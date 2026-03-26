#include "databaseworker.h"

#include <QDebug>
#include <QDir>
#include <qthread.h>



DataBaseWorker::DataBaseWorker(QObject* parent) : QObject(parent)
{
    bd = new QSqlDatabase(QSqlDatabase::addDatabase("QSQLITE", "main"));
    QString currentPath = QCoreApplication::applicationDirPath();
    QDir dir(currentPath);
    dir.cdUp();
    dir.cdUp(); // поднимаемся на уровень выше
    QString parentPath = dir.path();
    QString pathDB = parentPath + "/data.db";
    qDebug() << pathDB << Qt::endl;

    (*bd).setDatabaseName(pathDB);
    if (!bd->open())
    {
        qDebug() << "Не удалось открыть базу данных: " << bd->lastError().text() << Qt::endl;
        return;
    }
    else
    {
        qDebug() << "База данных успешно открыта" << Qt::endl;
    }
    model = new QSqlTableModel(this, *bd);

    model->setTable("Flights");
    model->setHeaderData(1, Qt::Horizontal, "Номер рейса");
    model->setHeaderData(2, Qt::Horizontal, "Компания");
    model->setHeaderData(3, Qt::Horizontal, "Город вылета");
    model->setHeaderData(4, Qt::Horizontal, "Город прилёта");
    model->setHeaderData(5, Qt::Horizontal, "Время");
    model->select();
}

DataBaseWorker::~DataBaseWorker()
{

    if (bd->isOpen())
    {
        qDebug() << "Закрываем базу данных" << Qt::endl;
        bd->close();
    }
    if (bd)
    {
        qDebug() << "Удаляем базу" << Qt::endl;
        delete bd;
    }
}

void DataBaseWorker::insertInTable(int flight_number, QString airline, QString departure_city, QString arrival_city,
                                   double travel_time)
{
    // Проверяем подключение к базе данных
    if (!bd->isOpen())
    {
        qDebug() << "База не открыта";
        return;
    }

    // Формируем правильный SQL-запрос
    QString sql = QString("INSERT INTO Flights(flight_number, airline, departure_city, arrival_city, travel_time)"
                          "VALUES(:flight_number, :airline, :departure_city, :arrival_city, :travel_time)");

    // Готовим запрос
    QSqlQuery query(*bd);
    if (!query.prepare(sql))
    {
        qDebug() << "Ошибка подготовки запроса: " << query.lastError().text();
        return;
    }

    // Связываем значения с плейсхолдерами
    query.bindValue(":flight_number", flight_number);
    query.bindValue(":airline", airline);
    query.bindValue(":departure_city", departure_city);
    query.bindValue(":arrival_city", arrival_city);
    query.bindValue(":travel_time", travel_time);

    // Выполняем запрос
    if (!query.exec())
    {
        qDebug() << "Ошибка выполнения запроса: " << query.lastError().text();
        return;
    }

    qDebug() << "Запись успешно добавлена!";

    model->select();
}

QSqlTableModel* DataBaseWorker::getModel()
{

    return model;
}

bool DataBaseWorker::save()
{
    if (model->submitAll())
    {
        return true;
    }
    else
    {

        model->revertAll();
        return false;
    }
}

QString DataBaseWorker::getStrData(int i, int j) {
return getModel()->data(getModel()->index(i, j)).toString();
}

std::optional<QVector<QPair<QString, int>>> DataBaseWorker::getСompanyCounts()
{
    QVector<QPair<QString, int>> result;

    if (!bd->isOpen())
    {
        qWarning() << "Database is not open";
        return std::nullopt;
    }

    QSqlQuery query(*bd);

    QString sql = R"(
        SELECT airline, COUNT(*) AS flights_count
        FROM Flights
        GROUP BY airline
        ORDER BY flights_count DESC
    )";

    if (!query.exec(sql))
    {
        qDebug() << "SQL error:" << query.lastError().text();
        return std::nullopt;
    }

    while (query.next())
    {
        QString airline = query.value("airline").toString();
        int flightsCount = query.value("flights_count").toInt();

        result.append(qMakePair(airline, flightsCount));
    }

    return result;
}

bool DataBaseWorker::deleteAll()
{

    if (!bd->isOpen())
    {
        qWarning() << "Database is not open";
        return false;
    }

    QSqlQuery query(*bd);

    // Начинаем транзакцию
    if (!bd->transaction())
    {
        qDebug() << "Failed to start transaction:" << bd->lastError().text();
        return false;
    }

    // 1. Удаляем все строки
    QString sqlDelete = "DELETE FROM Flights";
    if (!query.exec(sqlDelete))
    {
        qDebug() << "Delete error:" << query.lastError().text();
        bd->rollback();
        return false;
    }

    // 2. Сбрасываем автоинкрементный счётчик для SQLite
    QString sqlReset = "DELETE FROM sqlite_sequence WHERE name = 'Flights'";
    if (!query.exec(sqlReset))
    {
        // Этот запрос может не сработать, если таблица sqlite_sequence не существует
        // Но это не критично, просто логируем
        qDebug() << "Note: Could not reset sequence:" << query.lastError().text();
        // Не делаем rollback, так как данные уже удалены
    }

    // Подтверждаем транзакцию
    if (!bd->commit())
    {
        qDebug() << "Failed to commit transaction:" << bd->lastError().text();
        return false;
    }

    qDebug() << "All flights deleted successfully";
    return true;
}

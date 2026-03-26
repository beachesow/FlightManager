#ifndef DATABASEWORKER_H
#define DATABASEWORKER_H
#include <QCoreApplication>
#include <QMap>
#include <QModelIndex>
#include <QObject>
#include <QPair>
#include <QSqlDatabase>   //Интерфейсы для подключений к БД
#include <QSqlError>      //Позволяет посмотреть ошибки полученные от БД
#include <QSqlQuery>      //Класс для выполнения запросов к БД
#include <QSqlRecord>     //Накапливает результаты полей БД
#include <QSqlTableModel> //Класс предоставляет возможность работать с конкретной таблицей БД и редактировать ее
#include <QString>
#include <QVariant>
#include <QVector>
#include <optional>

class DataBaseWorker : public QObject
{
    Q_OBJECT
  public:
    DataBaseWorker(QObject* parent = nullptr);
    ~DataBaseWorker();
    void insertInTable(int flight_number, QString airline, QString departure_city, QString arrival_city,
                       double travel_time);

    QSqlTableModel* getModel();
    bool save();
    QString getStrData(int i, int j);
    std::optional<QVector<QPair<QString, int>>> getСompanyCounts();
    bool deleteAll();

  private:
    QString pathDB;//Путь к файлу БД
    QSqlDatabase* bd = nullptr;//Указатель на объект подключения
    QSqlTableModel* model = nullptr;//Модель для работы с таблицей
};

#endif // DATABASEWORKER_H

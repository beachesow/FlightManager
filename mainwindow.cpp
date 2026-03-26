#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    baseWorker = new DataBaseWorker(this);
    ui->tableView->setModel(baseWorker->getModel());
    ui->tableView->hideColumn(0);//скрываем id
    graficLoader = new Graficloader();
    graficLoader->resize(400, 400);
}

MainWindow::~MainWindow()
{
    if (graficLoader)
    {
        delete graficLoader;
    }
    delete ui;
}

void MainWindow::on_pushButton_Add_clicked()
{


    baseWorker->insertInTable(ui->lineEdit_Number->text().toInt(), ui->lineEdit_Company->text(),
                              ui->lineEdit_CityA->text(), ui->lineEdit_CityB->text(), ui->lineEdit_Time->text().toDouble());
}



void MainWindow::on_pushButton_Delete_clicked()
{
    auto ptrModel=baseWorker->getModel();
    int rowCount = ptrModel->rowCount();
    bool key=0;

    for(int i=0; i<rowCount; i++){
        if (ui->lineEdit_NumberD->text().toInt() ==  ptrModel->data(ptrModel->index(i, 1)).toInt()) {
            ptrModel->removeRow(i);
            key = true;
        }
    }

    if(!key){
        ui->lineEdit_NumberD->setText("Рейса не существует!");
        return;
    }
    if (!baseWorker->save())
    {
        qDebug() << "Не удалось сохранить удаление" << Qt::endl;
        return;
    }
    ptrModel->setFilter("");
    ptrModel->select();
}


void MainWindow::on_pushButton_FindCity_clicked()
{
     auto ptrModel=baseWorker->getModel();
    QString filter="departure_city='%1'";
    ptrModel->setFilter(filter.arg(ui->lineEdit_city->text()));
    ptrModel->select();
}


void MainWindow::on_pushButton_Time_clicked()
{
    auto ptrModel=baseWorker->getModel();

    QString cityA = ui->lineEdit_cityA->text();
    QString cityB = ui->lineEdit_cityB->text();

    ptrModel->setFilter(QString("departure_city='%1'").arg(cityA));
   ptrModel->setFilter(QString("arrival_city='%1'").arg(cityB));
   ptrModel->select();

    int rowCount = ptrModel->rowCount();
    qDebug()<<rowCount;

    double minTime =ptrModel->data(ptrModel->index(0, 5)).toDouble();
    int minRow = 0;

    for(int i = 1; i < rowCount; i++) {
        if (ptrModel->data(ptrModel->index(i, 5)).toDouble() < minTime) {
            minTime = ptrModel->data(ptrModel->index(i, 5)).toDouble();
            minRow = i;
        }
    }

    ui->tableView->selectRow(minRow);
    ui->tableView->scrollTo(ptrModel->index(minRow, 0));//подсвечиваем нужный рейс

    ui->textBrowser_MinTime->setText(QString::number(minTime) + " ч");


}


void MainWindow::on_pushButton_ShowCities_clicked()
{
     auto ptrModel=baseWorker->getModel();
    QString filter="airline='%1'";
    ptrModel->setFilter(filter.arg(ui->lineEdit_company->text()));
    ptrModel->select();

    int rowCount=ptrModel->rowCount();
    QString  result;
    for (int i=0; i<rowCount; i++){
        bool key=true;
        for (int j=0; j<i; j++){
            if (baseWorker->getStrData(i, 3)==baseWorker->getStrData(j, 3)){
                key=false;
            }
        }
        if (key){
            result+=baseWorker->getStrData(i, 3)+" ";
        }
    }
    ui->textBrowser_Cities->setText(result);
}


void MainWindow::on_pushButton_Histogram_clicked()
{
    if (graficLoader->isVisible())
    {
        qDebug() << "Окно уже открыто" << Qt::endl;
        return;
    }
    auto res = baseWorker->getСompanyCounts();
    if (!res.has_value())
    {
        return;
    }
    graficLoader->loadGrafic(res.value());

    qDebug() << "Открываем окно" << Qt::endl;
    graficLoader->show();
}

void MainWindow::on_pushButton_show_all_clicked()
{
    auto ptrModel=baseWorker->getModel();
    qDebug() << "Показываем всю таблицу" << Qt::endl;
    ptrModel->setFilter("");
    ptrModel->select();
}

void MainWindow::on_pushButton_Delete_ALL_clicked()
{
    auto ptrModel=baseWorker->getModel();
    if (!baseWorker->deleteAll())
    {
        return;
    }
    ptrModel->setFilter("");
    ptrModel->select();
}

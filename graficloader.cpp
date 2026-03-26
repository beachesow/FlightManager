#include "graficloader.h"
#include "ui_graficloader.h"

Graficloader::Graficloader(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Graficloader)
{
    ui->setupUi(this);

    chart = new QChart();              // память для графика
    chartView = new QChartView(chart); // память для представления
    connect(chart, &QObject::destroyed, this, []() { qDebug() << "QChart удалён"; });
    connect(chartView, &QObject::destroyed, this, []() { qDebug() << "QchartView удалён"; });

    series = new QBarSeries(this); // тут проверить
    series->setLabelsVisible(true);
    series->setLabelsPosition(QAbstractBarSeries::LabelsOutsideEnd);
    connect(series, &QObject::destroyed, this, []() { qDebug() << "QBarSeries удалён"; });

    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->addSeries(series);
    chart->setTitle("Гистограмма авиакомпаний");

    axisX = new QBarCategoryAxis(this);
    connect(axisX, &QObject::destroyed, this, []() { qDebug() << "QBarCategoryAxis удалён"; });
    //axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);

    axisY = new QValueAxis(this);
    connect(axisY, &QObject::destroyed, this, []() { qDebug() << "QValueAxis удалён"; });

    //axisY->setTitleText("Суммарное количество ");
    chart->addAxis(axisY, Qt::AlignLeft);

    series->attachAxis(axisX);
    series->attachAxis(axisY);

    ui->verticalLayout_2->addWidget(chartView);
}

Graficloader::~Graficloader()

{
    qDebug() << "Деструктор Graficloader" << Qt::endl;

    if (chartView)
    {
        delete chartView;
    }
    delete ui;
}

void Graficloader::loadGrafic(const QVector<QPair<QString, int>>& vec)
{


    if(set != nullptr){
        auto sets = series->barSets();
        for(auto s : sets){
            series->remove(s);
        }
         set=nullptr;
    }

    set = new QBarSet("Суммарное количество рейсов", this);
    connect(set, &QObject::destroyed, this, []() { qDebug() << "QBarSet удалён"; });
    set->setLabelColor(Qt::black);
    set->setColor(Qt::green);

    QStringList categories;
    int maxValue = 0;

    for (const auto& pair : vec)
    {
        categories << pair.first; // название
        *set << pair.second;      // значение

        if (pair.second > maxValue)
            maxValue = pair.second;
    }

    series->append(set);


    axisX->clear();
    axisX->append(categories);



    axisY->setRange(0, maxValue * 1.5);
    axisY->setLabelFormat("%.0f");
    axisY->setTickCount(5);

}

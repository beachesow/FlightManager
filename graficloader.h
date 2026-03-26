#ifndef GRAFICLOADER_H
#define GRAFICLOADER_H

#include <QWidget>

#include <QtCharts/QtCharts>
#include <QtCharts/QBarSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QLineSeries>

namespace Ui {
class Graficloader;
}

class Graficloader : public QWidget
{
    Q_OBJECT

public:
    explicit Graficloader(QWidget *parent = nullptr);
    ~Graficloader();
    void loadGrafic(const QVector<QPair<QString, int>>& vec);

  private:
    Ui::Graficloader *ui;
    QBarSet* set = nullptr;            // набор данных для гистограммы
    QBarSeries* series = nullptr;      //  Создаем серию и для наборов
    QChart* chart = nullptr;           // график
    QBarCategoryAxis* axisX = nullptr; // Ось Х
    QValueAxis* axisY = nullptr;       // Ocь Y
    QChartView* chartView = nullptr;   // Создаем виджет для отображения графика
};

#endif // GRAFICLOADER_H

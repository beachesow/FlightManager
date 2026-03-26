#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "databaseworker.h"
#include <QMainWindow>
#include "graficloader.h"
QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

  public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

  private slots:

    void on_pushButton_Add_clicked();

    void on_pushButton_Delete_clicked();

    void on_pushButton_FindCity_clicked();

    void on_pushButton_Time_clicked();

    void on_pushButton_ShowCities_clicked();

    void on_pushButton_Histogram_clicked();

    void on_pushButton_show_all_clicked();

    void on_pushButton_Delete_ALL_clicked();

  private:
    DataBaseWorker* baseWorker = nullptr;
    Graficloader *graficLoader=nullptr;
    Ui::MainWindow* ui;

};
#endif // MAINWINDOW_H

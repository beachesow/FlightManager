/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit_Number;
    QLineEdit *lineEdit_Company;
    QLineEdit *lineEdit_CityA;
    QLineEdit *lineEdit_CityB;
    QLineEdit *lineEdit_Time;
    QPushButton *pushButton_Add;
    QLineEdit *lineEdit_NumberD;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_Delete_ALL;
    QLabel *label_6;
    QPushButton *pushButton_Histogram;
    QPushButton *pushButton_show_all;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_city;
    QPushButton *pushButton_FindCity;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_cityA;
    QLabel *label_4;
    QLineEdit *lineEdit_cityB;
    QPushButton *pushButton_Time;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *textBrowser_MinTime;
    QLabel *label;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_company;
    QTextBrowser *textBrowser_Cities;
    QPushButton *pushButton_ShowCities;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(993, 738);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setMinimumSize(QSize(0, 0));
        tableView->horizontalHeader()->setDefaultSectionSize(130);

        horizontalLayout->addWidget(tableView);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout_11 = new QHBoxLayout(groupBox_4);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName("label_8");

        verticalLayout_6->addWidget(label_8);

        lineEdit_Number = new QLineEdit(groupBox_4);
        lineEdit_Number->setObjectName("lineEdit_Number");

        verticalLayout_6->addWidget(lineEdit_Number);

        lineEdit_Company = new QLineEdit(groupBox_4);
        lineEdit_Company->setObjectName("lineEdit_Company");

        verticalLayout_6->addWidget(lineEdit_Company);

        lineEdit_CityA = new QLineEdit(groupBox_4);
        lineEdit_CityA->setObjectName("lineEdit_CityA");

        verticalLayout_6->addWidget(lineEdit_CityA);

        lineEdit_CityB = new QLineEdit(groupBox_4);
        lineEdit_CityB->setObjectName("lineEdit_CityB");
        lineEdit_CityB->setTabletTracking(false);

        verticalLayout_6->addWidget(lineEdit_CityB);

        lineEdit_Time = new QLineEdit(groupBox_4);
        lineEdit_Time->setObjectName("lineEdit_Time");

        verticalLayout_6->addWidget(lineEdit_Time);

        pushButton_Add = new QPushButton(groupBox_4);
        pushButton_Add->setObjectName("pushButton_Add");

        verticalLayout_6->addWidget(pushButton_Add);

        lineEdit_NumberD = new QLineEdit(groupBox_4);
        lineEdit_NumberD->setObjectName("lineEdit_NumberD");

        verticalLayout_6->addWidget(lineEdit_NumberD);

        pushButton_Delete = new QPushButton(groupBox_4);
        pushButton_Delete->setObjectName("pushButton_Delete");

        verticalLayout_6->addWidget(pushButton_Delete);

        pushButton_Delete_ALL = new QPushButton(groupBox_4);
        pushButton_Delete_ALL->setObjectName("pushButton_Delete_ALL");

        verticalLayout_6->addWidget(pushButton_Delete_ALL);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");

        verticalLayout_6->addWidget(label_6);

        pushButton_Histogram = new QPushButton(groupBox_4);
        pushButton_Histogram->setObjectName("pushButton_Histogram");

        verticalLayout_6->addWidget(pushButton_Histogram);

        pushButton_show_all = new QPushButton(groupBox_4);
        pushButton_show_all->setObjectName("pushButton_show_all");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_show_all->sizePolicy().hasHeightForWidth());
        pushButton_show_all->setSizePolicy(sizePolicy);
        pushButton_show_all->setMaximumSize(QSize(16777215, 16777215));
        pushButton_show_all->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout_6->addWidget(pushButton_show_all);


        horizontalLayout_11->addLayout(verticalLayout_6);


        horizontalLayout->addWidget(groupBox_4);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout_6 = new QHBoxLayout(groupBox);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_city = new QLineEdit(groupBox);
        lineEdit_city->setObjectName("lineEdit_city");

        horizontalLayout_2->addWidget(lineEdit_city);

        pushButton_FindCity = new QPushButton(groupBox);
        pushButton_FindCity->setObjectName("pushButton_FindCity");

        horizontalLayout_2->addWidget(pushButton_FindCity);


        horizontalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_7 = new QHBoxLayout(groupBox_2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_cityA = new QLineEdit(groupBox_2);
        lineEdit_cityA->setObjectName("lineEdit_cityA");

        horizontalLayout_3->addWidget(lineEdit_cityA);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        lineEdit_cityB = new QLineEdit(groupBox_2);
        lineEdit_cityB->setObjectName("lineEdit_cityB");

        horizontalLayout_3->addWidget(lineEdit_cityB);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_Time = new QPushButton(groupBox_2);
        pushButton_Time->setObjectName("pushButton_Time");

        verticalLayout->addWidget(pushButton_Time);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        textBrowser_MinTime = new QTextBrowser(groupBox_2);
        textBrowser_MinTime->setObjectName("textBrowser_MinTime");
        textBrowser_MinTime->setMaximumSize(QSize(125, 30));

        horizontalLayout_4->addWidget(textBrowser_MinTime);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_5->addWidget(groupBox_2);


        horizontalLayout_10->addLayout(verticalLayout_5);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_8 = new QHBoxLayout(groupBox_3);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");

        horizontalLayout_5->addWidget(label_7);

        lineEdit_company = new QLineEdit(groupBox_3);
        lineEdit_company->setObjectName("lineEdit_company");

        horizontalLayout_5->addWidget(lineEdit_company);


        verticalLayout_3->addLayout(horizontalLayout_5);

        textBrowser_Cities = new QTextBrowser(groupBox_3);
        textBrowser_Cities->setObjectName("textBrowser_Cities");

        verticalLayout_3->addWidget(textBrowser_Cities);

        pushButton_ShowCities = new QPushButton(groupBox_3);
        pushButton_ShowCities->setObjectName("pushButton_ShowCities");

        verticalLayout_3->addWidget(pushButton_ShowCities);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_8->addLayout(verticalLayout_4);


        horizontalLayout_10->addWidget(groupBox_3);


        verticalLayout_7->addLayout(horizontalLayout_10);


        gridLayout->addLayout(verticalLayout_7, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 993, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \321\202\320\260\320\261\320\273\320\270\321\206\320\265\320\271", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        lineEdit_Number->setText(QString());
        lineEdit_Number->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\200\320\265\320\271\321\201\320\260", nullptr));
        lineEdit_Company->setText(QString());
        lineEdit_Company->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\274\320\277\320\260\320\275\320\270\321\217", nullptr));
        lineEdit_CityA->setText(QString());
        lineEdit_CityA->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264 \320\262\321\213\320\273\320\265\321\202\320\260", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_CityB->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\223\320\276\321\200\320\276\320\264 \320\277\321\200\320\270\320\273\320\265\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineEdit_CityB->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        lineEdit_CityB->setText(QString());
        lineEdit_CityB->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264 \320\277\321\200\320\270\320\273\320\265\321\202\320\260", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_Time->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_Time->setText(QString());
        lineEdit_Time->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\265\320\271\321\201", nullptr));
        lineEdit_NumberD->setText(QString());
        lineEdit_NumberD->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\200\320\265\320\271\321\201\320\260", nullptr));
        pushButton_Delete->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\265\320\271\321\201", nullptr));
        pushButton_Delete_ALL->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\321\221", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\224\321\200\321\203\320\263\320\270\320\265 \320\276\320\277\321\206\320\270\320\270", nullptr));
        pushButton_Histogram->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\263\320\270\321\201\321\202\320\276\320\263\321\200\320\260\320\274\320\274\321\203 \321\200\320\265\320\271\321\201\320\276\320\262 \320\277\320\276 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\321\217\320\274", nullptr));
        pushButton_show_all->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 \320\277\320\276\320\273\320\275\320\276\321\201\321\202\321\214\321\216", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\263\320\276\321\200\320\276\320\264\321\203 \320\262\321\213\320\273\320\265\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264 \320\262\321\213\320\273\320\265\321\202\320\260: ", nullptr));
        lineEdit_city->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\234\320\276\321\201\320\272\320\262\320\260", nullptr));
        pushButton_FindCity->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \321\200\320\265\320\271\321\201\321\213", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\276\320\277\321\202\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264 \320\262\321\213\320\273\320\265\321\202\320\260:", nullptr));
        lineEdit_cityA->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\273\320\260\320\264\320\270\320\262\320\276\321\201\321\202\320\276\320\272", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264 \320\277\321\200\320\270\320\273\320\265\321\202\320\260:", nullptr));
        lineEdit_cityB->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\265\320\272\320\270\320\275", nullptr));
        pushButton_Time->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\274\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        textBrowser_MinTime->setPlaceholderText(QCoreApplication::translate("MainWindow", "2.5 \321\207", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<-\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\263\320\276\321\200\320\276\320\264\320\276\320\262, \320\276\320\261\321\201\320\273\321\203\320\266\320\270\320\262\320\260\320\265\320\274\321\213\321\205 \320\264\320\260\320\275\320\275\320\276\320\271 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\265\320\271", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\320\270\320\260\320\272\320\276\320\274\320\277\320\260\320\275\320\270\321\217:", nullptr));
        lineEdit_company->setPlaceholderText(QCoreApplication::translate("MainWindow", "Emirates", nullptr));
        pushButton_ShowCities->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\263\320\276\321\200\320\276\320\264\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

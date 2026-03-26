/********************************************************************************
** Form generated from reading UI file 'graficloader.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFICLOADER_H
#define UI_GRAFICLOADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Graficloader
{
public:
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *Graficloader)
    {
        if (Graficloader->objectName().isEmpty())
            Graficloader->setObjectName("Graficloader");
        Graficloader->resize(848, 672);
        verticalLayout_2 = new QVBoxLayout(Graficloader);
        verticalLayout_2->setObjectName("verticalLayout_2");

        retranslateUi(Graficloader);

        QMetaObject::connectSlotsByName(Graficloader);
    } // setupUi

    void retranslateUi(QWidget *Graficloader)
    {
        Graficloader->setWindowTitle(QCoreApplication::translate("Graficloader", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graficloader: public Ui_Graficloader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFICLOADER_H

/********************************************************************************
** Form generated from reading UI file 'series.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIES_H
#define UI_SERIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Series
{
public:
    QPushButton *serie1;
    QPushButton *pushButton_5;
    QLabel *label;
    QPushButton *serie2;
    QPushButton *serie3;
    QPushButton *serie4;

    void setupUi(QDialog *Series)
    {
        if (Series->objectName().isEmpty())
            Series->setObjectName(QStringLiteral("Series"));
        Series->resize(639, 522);
        serie1 = new QPushButton(Series);
        serie1->setObjectName(QStringLiteral("serie1"));
        serie1->setGeometry(QRect(70, 100, 221, 161));
        pushButton_5 = new QPushButton(Series);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(400, 460, 115, 32));
        label = new QLabel(Series);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 30, 151, 16));
        serie2 = new QPushButton(Series);
        serie2->setObjectName(QStringLiteral("serie2"));
        serie2->setGeometry(QRect(310, 100, 221, 161));
        serie3 = new QPushButton(Series);
        serie3->setObjectName(QStringLiteral("serie3"));
        serie3->setGeometry(QRect(70, 270, 221, 161));
        serie4 = new QPushButton(Series);
        serie4->setObjectName(QStringLiteral("serie4"));
        serie4->setGeometry(QRect(310, 270, 221, 161));

        retranslateUi(Series);

        QMetaObject::connectSlotsByName(Series);
    } // setupUi

    void retranslateUi(QDialog *Series)
    {
        Series->setWindowTitle(QApplication::translate("Series", "Dialog", 0));
        serie1->setText(QString());
        pushButton_5->setText(QApplication::translate("Series", "Cerrar", 0));
        label->setText(QApplication::translate("Series", "Compra de Series de TV", 0));
        serie2->setText(QString());
        serie3->setText(QString());
        serie4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Series: public Ui_Series {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIES_H

/********************************************************************************
** Form generated from reading UI file 'seriesprem.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIESPREM_H
#define UI_SERIESPREM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SeriesPrem
{
public:
    QLabel *label;
    QPushButton *serie3;
    QPushButton *serie2;
    QPushButton *serie1;
    QPushButton *serie4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *SeriesPrem)
    {
        if (SeriesPrem->objectName().isEmpty())
            SeriesPrem->setObjectName(QStringLiteral("SeriesPrem"));
        SeriesPrem->resize(579, 494);
        label = new QLabel(SeriesPrem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 20, 151, 16));
        serie3 = new QPushButton(SeriesPrem);
        serie3->setObjectName(QStringLiteral("serie3"));
        serie3->setGeometry(QRect(50, 260, 221, 161));
        serie2 = new QPushButton(SeriesPrem);
        serie2->setObjectName(QStringLiteral("serie2"));
        serie2->setGeometry(QRect(290, 90, 221, 161));
        serie1 = new QPushButton(SeriesPrem);
        serie1->setObjectName(QStringLiteral("serie1"));
        serie1->setGeometry(QRect(50, 90, 221, 161));
        serie4 = new QPushButton(SeriesPrem);
        serie4->setObjectName(QStringLiteral("serie4"));
        serie4->setGeometry(QRect(290, 260, 221, 161));
        pushButton_5 = new QPushButton(SeriesPrem);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(380, 450, 115, 32));

        retranslateUi(SeriesPrem);

        QMetaObject::connectSlotsByName(SeriesPrem);
    } // setupUi

    void retranslateUi(QDialog *SeriesPrem)
    {
        SeriesPrem->setWindowTitle(QApplication::translate("SeriesPrem", "Dialog", 0));
        label->setText(QApplication::translate("SeriesPrem", "Compra de Series de TV", 0));
        serie3->setText(QString());
        serie2->setText(QString());
        serie1->setText(QString());
        serie4->setText(QString());
        pushButton_5->setText(QApplication::translate("SeriesPrem", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class SeriesPrem: public Ui_SeriesPrem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIESPREM_H

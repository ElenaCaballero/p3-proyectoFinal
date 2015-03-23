/********************************************************************************
** Form generated from reading UI file 'peliculas.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PELICULAS_H
#define UI_PELICULAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Peliculas
{
public:
    QPushButton *peli1;
    QPushButton *pushButton_5;
    QLabel *label;
    QPushButton *peli2;
    QPushButton *peli3;
    QPushButton *peli4;

    void setupUi(QDialog *Peliculas)
    {
        if (Peliculas->objectName().isEmpty())
            Peliculas->setObjectName(QStringLiteral("Peliculas"));
        Peliculas->resize(490, 528);
        peli1 = new QPushButton(Peliculas);
        peli1->setObjectName(QStringLiteral("peli1"));
        peli1->setGeometry(QRect(30, 100, 201, 151));
        pushButton_5 = new QPushButton(Peliculas);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(330, 460, 115, 32));
        label = new QLabel(Peliculas);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 30, 201, 16));
        peli2 = new QPushButton(Peliculas);
        peli2->setObjectName(QStringLiteral("peli2"));
        peli2->setGeometry(QRect(250, 100, 201, 151));
        peli3 = new QPushButton(Peliculas);
        peli3->setObjectName(QStringLiteral("peli3"));
        peli3->setGeometry(QRect(30, 270, 201, 151));
        peli4 = new QPushButton(Peliculas);
        peli4->setObjectName(QStringLiteral("peli4"));
        peli4->setGeometry(QRect(250, 270, 201, 151));

        retranslateUi(Peliculas);

        QMetaObject::connectSlotsByName(Peliculas);
    } // setupUi

    void retranslateUi(QDialog *Peliculas)
    {
        Peliculas->setWindowTitle(QApplication::translate("Peliculas", "Dialog", 0));
        peli1->setText(QString());
        pushButton_5->setText(QApplication::translate("Peliculas", "Cerrar", 0));
        label->setText(QApplication::translate("Peliculas", "Alquiler y Compra de Peliculas", 0));
        peli2->setText(QString());
        peli3->setText(QString());
        peli4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Peliculas: public Ui_Peliculas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PELICULAS_H

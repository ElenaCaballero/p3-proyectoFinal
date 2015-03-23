/********************************************************************************
** Form generated from reading UI file 'peliculasprem.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PELICULASPREM_H
#define UI_PELICULASPREM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PeliculasPrem
{
public:
    QPushButton *peli4;
    QPushButton *peli2;
    QLabel *label;
    QPushButton *peli3;
    QPushButton *peli1;
    QPushButton *pushButton_5;

    void setupUi(QDialog *PeliculasPrem)
    {
        if (PeliculasPrem->objectName().isEmpty())
            PeliculasPrem->setObjectName(QStringLiteral("PeliculasPrem"));
        PeliculasPrem->resize(619, 520);
        peli4 = new QPushButton(PeliculasPrem);
        peli4->setObjectName(QStringLiteral("peli4"));
        peli4->setGeometry(QRect(310, 270, 201, 151));
        peli2 = new QPushButton(PeliculasPrem);
        peli2->setObjectName(QStringLiteral("peli2"));
        peli2->setGeometry(QRect(310, 100, 201, 151));
        label = new QLabel(PeliculasPrem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 30, 201, 16));
        peli3 = new QPushButton(PeliculasPrem);
        peli3->setObjectName(QStringLiteral("peli3"));
        peli3->setGeometry(QRect(90, 270, 201, 151));
        peli1 = new QPushButton(PeliculasPrem);
        peli1->setObjectName(QStringLiteral("peli1"));
        peli1->setGeometry(QRect(90, 100, 201, 151));
        pushButton_5 = new QPushButton(PeliculasPrem);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(390, 460, 115, 32));

        retranslateUi(PeliculasPrem);

        QMetaObject::connectSlotsByName(PeliculasPrem);
    } // setupUi

    void retranslateUi(QDialog *PeliculasPrem)
    {
        PeliculasPrem->setWindowTitle(QApplication::translate("PeliculasPrem", "Dialog", 0));
        peli4->setText(QString());
        peli2->setText(QString());
        label->setText(QApplication::translate("PeliculasPrem", "Alquiler y Compra de Peliculas", 0));
        peli3->setText(QString());
        peli1->setText(QString());
        pushButton_5->setText(QApplication::translate("PeliculasPrem", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class PeliculasPrem: public Ui_PeliculasPrem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PELICULASPREM_H

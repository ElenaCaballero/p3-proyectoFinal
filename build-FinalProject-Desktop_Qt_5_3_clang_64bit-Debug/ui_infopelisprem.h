/********************************************************************************
** Form generated from reading UI file 'infopelisprem.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOPELISPREM_H
#define UI_INFOPELISPREM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_InfoPelisPrem
{
public:
    QLabel *label_3;
    QPushButton *buyM;
    QPushButton *foto;
    QLineEdit *resena;
    QLineEdit *fecha;
    QLabel *label_4;
    QLineEdit *clasi;
    QPushButton *pushButton_6;
    QTextEdit *descri;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *tamano;
    QLabel *label_7;
    QLineEdit *estudio;
    QLabel *label_6;
    QLabel *label;
    QPushButton *RentM;
    QLineEdit *titulo;
    QLineEdit *genero;
    QLabel *label_8;

    void setupUi(QDialog *InfoPelisPrem)
    {
        if (InfoPelisPrem->objectName().isEmpty())
            InfoPelisPrem->setObjectName(QStringLiteral("InfoPelisPrem"));
        InfoPelisPrem->resize(564, 453);
        label_3 = new QLabel(InfoPelisPrem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 280, 59, 16));
        buyM = new QPushButton(InfoPelisPrem);
        buyM->setObjectName(QStringLiteral("buyM"));
        buyM->setGeometry(QRect(200, 390, 141, 32));
        foto = new QPushButton(InfoPelisPrem);
        foto->setObjectName(QStringLiteral("foto"));
        foto->setEnabled(true);
        foto->setGeometry(QRect(170, 20, 201, 151));
        foto->setCheckable(false);
        resena = new QLineEdit(InfoPelisPrem);
        resena->setObjectName(QStringLiteral("resena"));
        resena->setGeometry(QRect(190, 280, 113, 21));
        resena->setReadOnly(true);
        fecha = new QLineEdit(InfoPelisPrem);
        fecha->setObjectName(QStringLiteral("fecha"));
        fecha->setGeometry(QRect(190, 340, 113, 21));
        fecha->setReadOnly(true);
        label_4 = new QLabel(InfoPelisPrem);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(320, 280, 91, 16));
        clasi = new QLineEdit(InfoPelisPrem);
        clasi->setObjectName(QStringLiteral("clasi"));
        clasi->setGeometry(QRect(420, 280, 113, 21));
        clasi->setReadOnly(true);
        pushButton_6 = new QPushButton(InfoPelisPrem);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 390, 115, 32));
        descri = new QTextEdit(InfoPelisPrem);
        descri->setObjectName(QStringLiteral("descri"));
        descri->setGeometry(QRect(130, 220, 401, 51));
        descri->setReadOnly(true);
        label_2 = new QLabel(InfoPelisPrem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 220, 91, 16));
        label_5 = new QLabel(InfoPelisPrem);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 310, 59, 16));
        tamano = new QLineEdit(InfoPelisPrem);
        tamano->setObjectName(QStringLiteral("tamano"));
        tamano->setGeometry(QRect(420, 340, 113, 21));
        tamano->setReadOnly(true);
        label_7 = new QLabel(InfoPelisPrem);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 340, 151, 16));
        estudio = new QLineEdit(InfoPelisPrem);
        estudio->setObjectName(QStringLiteral("estudio"));
        estudio->setGeometry(QRect(420, 310, 113, 21));
        estudio->setReadOnly(true);
        label_6 = new QLabel(InfoPelisPrem);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(320, 310, 59, 16));
        label = new QLabel(InfoPelisPrem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 180, 59, 16));
        RentM = new QPushButton(InfoPelisPrem);
        RentM->setObjectName(QStringLiteral("RentM"));
        RentM->setGeometry(QRect(400, 390, 115, 32));
        titulo = new QLineEdit(InfoPelisPrem);
        titulo->setObjectName(QStringLiteral("titulo"));
        titulo->setGeometry(QRect(100, 180, 431, 21));
        titulo->setReadOnly(true);
        genero = new QLineEdit(InfoPelisPrem);
        genero->setObjectName(QStringLiteral("genero"));
        genero->setGeometry(QRect(190, 310, 113, 21));
        genero->setReadOnly(true);
        label_8 = new QLabel(InfoPelisPrem);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(320, 340, 59, 16));

        retranslateUi(InfoPelisPrem);

        QMetaObject::connectSlotsByName(InfoPelisPrem);
    } // setupUi

    void retranslateUi(QDialog *InfoPelisPrem)
    {
        InfoPelisPrem->setWindowTitle(QApplication::translate("InfoPelisPrem", "Dialog", 0));
        label_3->setText(QApplication::translate("InfoPelisPrem", "Resena:", 0));
        buyM->setText(QApplication::translate("InfoPelisPrem", "Comprar ($14.99)", 0));
        foto->setText(QString());
        label_4->setText(QApplication::translate("InfoPelisPrem", "Clasificacion:", 0));
        pushButton_6->setText(QApplication::translate("InfoPelisPrem", "Cerrar", 0));
        label_2->setText(QApplication::translate("InfoPelisPrem", "Descripcion:", 0));
        label_5->setText(QApplication::translate("InfoPelisPrem", "Genero:", 0));
        label_7->setText(QApplication::translate("InfoPelisPrem", "Fecha de Lanzamiento: ", 0));
        label_6->setText(QApplication::translate("InfoPelisPrem", "Estudio:", 0));
        label->setText(QApplication::translate("InfoPelisPrem", "Titulo:", 0));
        RentM->setText(QApplication::translate("InfoPelisPrem", "Alquilar ($4.99)", 0));
        label_8->setText(QApplication::translate("InfoPelisPrem", "HD:", 0));
    } // retranslateUi

};

namespace Ui {
    class InfoPelisPrem: public Ui_InfoPelisPrem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOPELISPREM_H

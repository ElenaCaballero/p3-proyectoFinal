/********************************************************************************
** Form generated from reading UI file 'infopelis.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOPELIS_H
#define UI_INFOPELIS_H

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

class Ui_InfoPelis
{
public:
    QLabel *label;
    QLineEdit *titulo;
    QLabel *label_2;
    QTextEdit *descri;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *buyM;
    QPushButton *RentM;
    QLineEdit *resena;
    QLineEdit *genero;
    QLineEdit *fecha;
    QLineEdit *clasi;
    QLineEdit *estudio;
    QLineEdit *tamano;
    QPushButton *foto;
    QPushButton *pushButton_6;

    void setupUi(QDialog *InfoPelis)
    {
        if (InfoPelis->objectName().isEmpty())
            InfoPelis->setObjectName(QStringLiteral("InfoPelis"));
        InfoPelis->resize(585, 439);
        label = new QLabel(InfoPelis);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 170, 59, 16));
        titulo = new QLineEdit(InfoPelis);
        titulo->setObjectName(QStringLiteral("titulo"));
        titulo->setGeometry(QRect(120, 170, 431, 21));
        titulo->setReadOnly(true);
        label_2 = new QLabel(InfoPelis);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 210, 91, 16));
        descri = new QTextEdit(InfoPelis);
        descri->setObjectName(QStringLiteral("descri"));
        descri->setGeometry(QRect(150, 210, 401, 51));
        descri->setReadOnly(true);
        label_3 = new QLabel(InfoPelis);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 270, 59, 16));
        label_4 = new QLabel(InfoPelis);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 270, 91, 16));
        label_5 = new QLabel(InfoPelis);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 300, 59, 16));
        label_6 = new QLabel(InfoPelis);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(340, 300, 59, 16));
        label_7 = new QLabel(InfoPelis);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 330, 151, 16));
        label_8 = new QLabel(InfoPelis);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(340, 330, 59, 16));
        buyM = new QPushButton(InfoPelis);
        buyM->setObjectName(QStringLiteral("buyM"));
        buyM->setGeometry(QRect(220, 380, 141, 32));
        RentM = new QPushButton(InfoPelis);
        RentM->setObjectName(QStringLiteral("RentM"));
        RentM->setGeometry(QRect(420, 380, 115, 32));
        resena = new QLineEdit(InfoPelis);
        resena->setObjectName(QStringLiteral("resena"));
        resena->setGeometry(QRect(210, 270, 113, 21));
        resena->setReadOnly(true);
        genero = new QLineEdit(InfoPelis);
        genero->setObjectName(QStringLiteral("genero"));
        genero->setGeometry(QRect(210, 300, 113, 21));
        genero->setReadOnly(true);
        fecha = new QLineEdit(InfoPelis);
        fecha->setObjectName(QStringLiteral("fecha"));
        fecha->setGeometry(QRect(210, 330, 113, 21));
        fecha->setReadOnly(true);
        clasi = new QLineEdit(InfoPelis);
        clasi->setObjectName(QStringLiteral("clasi"));
        clasi->setGeometry(QRect(440, 270, 113, 21));
        clasi->setReadOnly(true);
        estudio = new QLineEdit(InfoPelis);
        estudio->setObjectName(QStringLiteral("estudio"));
        estudio->setGeometry(QRect(440, 300, 113, 21));
        estudio->setReadOnly(true);
        tamano = new QLineEdit(InfoPelis);
        tamano->setObjectName(QStringLiteral("tamano"));
        tamano->setGeometry(QRect(440, 330, 113, 21));
        tamano->setReadOnly(true);
        foto = new QPushButton(InfoPelis);
        foto->setObjectName(QStringLiteral("foto"));
        foto->setEnabled(true);
        foto->setGeometry(QRect(190, 10, 201, 151));
        foto->setCheckable(false);
        pushButton_6 = new QPushButton(InfoPelis);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(60, 380, 115, 32));

        retranslateUi(InfoPelis);

        QMetaObject::connectSlotsByName(InfoPelis);
    } // setupUi

    void retranslateUi(QDialog *InfoPelis)
    {
        InfoPelis->setWindowTitle(QApplication::translate("InfoPelis", "Dialog", 0));
        label->setText(QApplication::translate("InfoPelis", "Titulo:", 0));
        label_2->setText(QApplication::translate("InfoPelis", "Descripcion:", 0));
        label_3->setText(QApplication::translate("InfoPelis", "Resena:", 0));
        label_4->setText(QApplication::translate("InfoPelis", "Clasificacion:", 0));
        label_5->setText(QApplication::translate("InfoPelis", "Genero:", 0));
        label_6->setText(QApplication::translate("InfoPelis", "Estudio:", 0));
        label_7->setText(QApplication::translate("InfoPelis", "Fecha de Lanzamiento: ", 0));
        label_8->setText(QApplication::translate("InfoPelis", "HD:", 0));
        buyM->setText(QApplication::translate("InfoPelis", "Comprar ($14.99)", 0));
        RentM->setText(QApplication::translate("InfoPelis", "Alquilar ($4.99)", 0));
        foto->setText(QString());
        pushButton_6->setText(QApplication::translate("InfoPelis", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class InfoPelis: public Ui_InfoPelis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOPELIS_H

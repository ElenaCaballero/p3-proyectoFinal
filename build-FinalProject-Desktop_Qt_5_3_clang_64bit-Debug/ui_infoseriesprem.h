/********************************************************************************
** Form generated from reading UI file 'infoseriesprem.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOSERIESPREM_H
#define UI_INFOSERIESPREM_H

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

class Ui_InfoSeriesPrem
{
public:
    QLabel *label_8;
    QPushButton *foto;
    QLineEdit *episodios;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QLineEdit *resena;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *titulo;
    QLineEdit *genero;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_6;
    QLineEdit *ptotal;
    QLineEdit *clasi;
    QLineEdit *pepisodio;
    QLineEdit *estudio;
    QLineEdit *fecha;
    QTextEdit *descri;

    void setupUi(QDialog *InfoSeriesPrem)
    {
        if (InfoSeriesPrem->objectName().isEmpty())
            InfoSeriesPrem->setObjectName(QStringLiteral("InfoSeriesPrem"));
        InfoSeriesPrem->resize(628, 505);
        label_8 = new QLabel(InfoSeriesPrem);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(360, 340, 71, 16));
        foto = new QPushButton(InfoSeriesPrem);
        foto->setObjectName(QStringLiteral("foto"));
        foto->setEnabled(true);
        foto->setGeometry(QRect(210, 20, 201, 151));
        foto->setCheckable(false);
        episodios = new QLineEdit(InfoSeriesPrem);
        episodios->setObjectName(QStringLiteral("episodios"));
        episodios->setGeometry(QRect(460, 340, 113, 21));
        episodios->setReadOnly(true);
        label_4 = new QLabel(InfoSeriesPrem);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 280, 91, 16));
        label_10 = new QLabel(InfoSeriesPrem);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(360, 380, 81, 16));
        label_7 = new QLabel(InfoSeriesPrem);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 340, 151, 16));
        label_3 = new QLabel(InfoSeriesPrem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 280, 59, 16));
        pushButton_2 = new QPushButton(InfoSeriesPrem);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(250, 430, 141, 32));
        pushButton_6 = new QPushButton(InfoSeriesPrem);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(80, 430, 115, 32));
        pushButton = new QPushButton(InfoSeriesPrem);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 430, 141, 32));
        resena = new QLineEdit(InfoSeriesPrem);
        resena->setObjectName(QStringLiteral("resena"));
        resena->setGeometry(QRect(242, 280, 111, 21));
        resena->setReadOnly(true);
        label_5 = new QLabel(InfoSeriesPrem);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 310, 59, 16));
        label_2 = new QLabel(InfoSeriesPrem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 220, 91, 16));
        titulo = new QLineEdit(InfoSeriesPrem);
        titulo->setObjectName(QStringLiteral("titulo"));
        titulo->setGeometry(QRect(140, 180, 431, 21));
        titulo->setReadOnly(true);
        genero = new QLineEdit(InfoSeriesPrem);
        genero->setObjectName(QStringLiteral("genero"));
        genero->setGeometry(QRect(240, 310, 111, 21));
        genero->setReadOnly(true);
        label = new QLabel(InfoSeriesPrem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 180, 59, 16));
        label_9 = new QLabel(InfoSeriesPrem);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 380, 131, 16));
        label_6 = new QLabel(InfoSeriesPrem);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 310, 59, 16));
        ptotal = new QLineEdit(InfoSeriesPrem);
        ptotal->setObjectName(QStringLiteral("ptotal"));
        ptotal->setGeometry(QRect(460, 380, 113, 21));
        ptotal->setReadOnly(true);
        clasi = new QLineEdit(InfoSeriesPrem);
        clasi->setObjectName(QStringLiteral("clasi"));
        clasi->setGeometry(QRect(460, 280, 113, 21));
        clasi->setReadOnly(true);
        pepisodio = new QLineEdit(InfoSeriesPrem);
        pepisodio->setObjectName(QStringLiteral("pepisodio"));
        pepisodio->setGeometry(QRect(240, 380, 113, 21));
        pepisodio->setReadOnly(true);
        estudio = new QLineEdit(InfoSeriesPrem);
        estudio->setObjectName(QStringLiteral("estudio"));
        estudio->setGeometry(QRect(460, 310, 113, 21));
        estudio->setReadOnly(true);
        fecha = new QLineEdit(InfoSeriesPrem);
        fecha->setObjectName(QStringLiteral("fecha"));
        fecha->setGeometry(QRect(210, 340, 141, 21));
        fecha->setReadOnly(true);
        descri = new QTextEdit(InfoSeriesPrem);
        descri->setObjectName(QStringLiteral("descri"));
        descri->setGeometry(QRect(170, 220, 401, 51));
        descri->setReadOnly(true);

        retranslateUi(InfoSeriesPrem);

        QMetaObject::connectSlotsByName(InfoSeriesPrem);
    } // setupUi

    void retranslateUi(QDialog *InfoSeriesPrem)
    {
        InfoSeriesPrem->setWindowTitle(QApplication::translate("InfoSeriesPrem", "Dialog", 0));
        label_8->setText(QApplication::translate("InfoSeriesPrem", "Episodios:", 0));
        foto->setText(QString());
        label_4->setText(QApplication::translate("InfoSeriesPrem", "Clasificacion:", 0));
        label_10->setText(QApplication::translate("InfoSeriesPrem", "Precio Total:", 0));
        label_7->setText(QApplication::translate("InfoSeriesPrem", "Fecha de Lanzamiento: ", 0));
        label_3->setText(QApplication::translate("InfoSeriesPrem", "Resena:", 0));
        pushButton_2->setText(QApplication::translate("InfoSeriesPrem", "Comprar Episodio", 0));
        pushButton_6->setText(QApplication::translate("InfoSeriesPrem", "Cerrar", 0));
        pushButton->setText(QApplication::translate("InfoSeriesPrem", "Comprar Total", 0));
        label_5->setText(QApplication::translate("InfoSeriesPrem", "Genero:", 0));
        label_2->setText(QApplication::translate("InfoSeriesPrem", "Descripcion:", 0));
        label->setText(QApplication::translate("InfoSeriesPrem", "Titulo:", 0));
        label_9->setText(QApplication::translate("InfoSeriesPrem", "Precio por Episodio:", 0));
        label_6->setText(QApplication::translate("InfoSeriesPrem", "Estudio:", 0));
    } // retranslateUi

};

namespace Ui {
    class InfoSeriesPrem: public Ui_InfoSeriesPrem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOSERIESPREM_H

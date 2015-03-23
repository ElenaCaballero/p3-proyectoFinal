/********************************************************************************
** Form generated from reading UI file 'infoseries.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOSERIES_H
#define UI_INFOSERIES_H

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

class Ui_InfoSeries
{
public:
    QLabel *label_2;
    QLineEdit *clasi;
    QLineEdit *resena;
    QLabel *label_4;
    QLineEdit *estudio;
    QLineEdit *titulo;
    QLabel *label_3;
    QLabel *label_6;
    QPushButton *foto;
    QTextEdit *descri;
    QLabel *label_7;
    QPushButton *pushButton;
    QLineEdit *genero;
    QLabel *label_5;
    QPushButton *pushButton_6;
    QLineEdit *fecha;
    QLabel *label_8;
    QLineEdit *episodios;
    QLabel *label;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QLabel *label_10;
    QLineEdit *pepisodio;
    QLineEdit *ptotal;

    void setupUi(QDialog *InfoSeries)
    {
        if (InfoSeries->objectName().isEmpty())
            InfoSeries->setObjectName(QStringLiteral("InfoSeries"));
        InfoSeries->resize(648, 498);
        label_2 = new QLabel(InfoSeries);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 220, 91, 16));
        clasi = new QLineEdit(InfoSeries);
        clasi->setObjectName(QStringLiteral("clasi"));
        clasi->setGeometry(QRect(460, 280, 113, 21));
        clasi->setReadOnly(true);
        resena = new QLineEdit(InfoSeries);
        resena->setObjectName(QStringLiteral("resena"));
        resena->setGeometry(QRect(242, 280, 111, 21));
        resena->setReadOnly(true);
        label_4 = new QLabel(InfoSeries);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 280, 91, 16));
        estudio = new QLineEdit(InfoSeries);
        estudio->setObjectName(QStringLiteral("estudio"));
        estudio->setGeometry(QRect(460, 310, 113, 21));
        estudio->setReadOnly(true);
        titulo = new QLineEdit(InfoSeries);
        titulo->setObjectName(QStringLiteral("titulo"));
        titulo->setGeometry(QRect(140, 180, 431, 21));
        titulo->setReadOnly(true);
        label_3 = new QLabel(InfoSeries);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 280, 59, 16));
        label_6 = new QLabel(InfoSeries);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 310, 59, 16));
        foto = new QPushButton(InfoSeries);
        foto->setObjectName(QStringLiteral("foto"));
        foto->setEnabled(true);
        foto->setGeometry(QRect(210, 20, 201, 151));
        foto->setCheckable(false);
        descri = new QTextEdit(InfoSeries);
        descri->setObjectName(QStringLiteral("descri"));
        descri->setGeometry(QRect(170, 220, 401, 51));
        descri->setReadOnly(true);
        label_7 = new QLabel(InfoSeries);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 340, 151, 16));
        pushButton = new QPushButton(InfoSeries);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 430, 141, 32));
        genero = new QLineEdit(InfoSeries);
        genero->setObjectName(QStringLiteral("genero"));
        genero->setGeometry(QRect(240, 310, 111, 21));
        genero->setReadOnly(true);
        label_5 = new QLabel(InfoSeries);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 310, 59, 16));
        pushButton_6 = new QPushButton(InfoSeries);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(80, 430, 115, 32));
        fecha = new QLineEdit(InfoSeries);
        fecha->setObjectName(QStringLiteral("fecha"));
        fecha->setGeometry(QRect(210, 340, 141, 21));
        fecha->setReadOnly(true);
        label_8 = new QLabel(InfoSeries);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(360, 340, 71, 16));
        episodios = new QLineEdit(InfoSeries);
        episodios->setObjectName(QStringLiteral("episodios"));
        episodios->setGeometry(QRect(460, 340, 113, 21));
        episodios->setReadOnly(true);
        label = new QLabel(InfoSeries);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 180, 59, 16));
        label_9 = new QLabel(InfoSeries);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 380, 131, 16));
        pushButton_2 = new QPushButton(InfoSeries);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 430, 141, 32));
        label_10 = new QLabel(InfoSeries);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(360, 380, 81, 16));
        pepisodio = new QLineEdit(InfoSeries);
        pepisodio->setObjectName(QStringLiteral("pepisodio"));
        pepisodio->setGeometry(QRect(240, 380, 113, 21));
        pepisodio->setReadOnly(true);
        ptotal = new QLineEdit(InfoSeries);
        ptotal->setObjectName(QStringLiteral("ptotal"));
        ptotal->setGeometry(QRect(460, 380, 113, 21));
        ptotal->setReadOnly(true);

        retranslateUi(InfoSeries);

        QMetaObject::connectSlotsByName(InfoSeries);
    } // setupUi

    void retranslateUi(QDialog *InfoSeries)
    {
        InfoSeries->setWindowTitle(QApplication::translate("InfoSeries", "Dialog", 0));
        label_2->setText(QApplication::translate("InfoSeries", "Descripcion:", 0));
        label_4->setText(QApplication::translate("InfoSeries", "Clasificacion:", 0));
        label_3->setText(QApplication::translate("InfoSeries", "Resena:", 0));
        label_6->setText(QApplication::translate("InfoSeries", "Estudio:", 0));
        foto->setText(QString());
        label_7->setText(QApplication::translate("InfoSeries", "Fecha de Lanzamiento: ", 0));
        pushButton->setText(QApplication::translate("InfoSeries", "Comprar Total", 0));
        label_5->setText(QApplication::translate("InfoSeries", "Genero:", 0));
        pushButton_6->setText(QApplication::translate("InfoSeries", "Cerrar", 0));
        label_8->setText(QApplication::translate("InfoSeries", "Episodios:", 0));
        label->setText(QApplication::translate("InfoSeries", "Titulo:", 0));
        label_9->setText(QApplication::translate("InfoSeries", "Precio por Episodio:", 0));
        pushButton_2->setText(QApplication::translate("InfoSeries", "Comprar Episodio", 0));
        label_10->setText(QApplication::translate("InfoSeries", "Precio Total:", 0));
    } // retranslateUi

};

namespace Ui {
    class InfoSeries: public Ui_InfoSeries {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOSERIES_H

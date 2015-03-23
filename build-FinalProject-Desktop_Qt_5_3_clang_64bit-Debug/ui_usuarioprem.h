/********************************************************************************
** Form generated from reading UI file 'usuarioprem.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USUARIOPREM_H
#define UI_USUARIOPREM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UsuarioPrem
{
public:
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *UsuarioPrem)
    {
        if (UsuarioPrem->objectName().isEmpty())
            UsuarioPrem->setObjectName(QStringLiteral("UsuarioPrem"));
        UsuarioPrem->resize(452, 215);
        lineEdit = new QLineEdit(UsuarioPrem);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(80, 50, 281, 21));
        lineEdit->setReadOnly(true);
        label_2 = new QLabel(UsuarioPrem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 59, 16));
        pushButton = new QPushButton(UsuarioPrem);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 120, 201, 32));
        pushButton_2 = new QPushButton(UsuarioPrem);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 120, 161, 32));
        pushButton_3 = new QPushButton(UsuarioPrem);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 80, 115, 32));
        label = new QLabel(UsuarioPrem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 181, 16));
        label_6 = new QLabel(UsuarioPrem);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 90, 111, 16));
        lineEdit_2 = new QLineEdit(UsuarioPrem);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 90, 113, 21));
        lineEdit_2->setReadOnly(true);
        pushButton_4 = new QPushButton(UsuarioPrem);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(280, 160, 115, 32));

        retranslateUi(UsuarioPrem);

        QMetaObject::connectSlotsByName(UsuarioPrem);
    } // setupUi

    void retranslateUi(QDialog *UsuarioPrem)
    {
        UsuarioPrem->setWindowTitle(QApplication::translate("UsuarioPrem", "Dialog", 0));
        label_2->setText(QApplication::translate("UsuarioPrem", "Nombre:", 0));
        pushButton->setText(QApplication::translate("UsuarioPrem", "Comprar/Alquilar Peliculas", 0));
        pushButton_2->setText(QApplication::translate("UsuarioPrem", "Comprar Series de TV", 0));
        pushButton_3->setText(QApplication::translate("UsuarioPrem", "Pago", 0));
        label->setText(QApplication::translate("UsuarioPrem", "Bienvenido Usuario Premium", 0));
        label_6->setText(QApplication::translate("UsuarioPrem", "Dinero disponible:", 0));
        pushButton_4->setText(QApplication::translate("UsuarioPrem", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class UsuarioPrem: public Ui_UsuarioPrem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USUARIOPREM_H

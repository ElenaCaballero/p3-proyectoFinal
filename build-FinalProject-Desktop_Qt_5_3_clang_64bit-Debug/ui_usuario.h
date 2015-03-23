/********************************************************************************
** Form generated from reading UI file 'usuario.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USUARIO_H
#define UI_USUARIO_H

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

class Ui_Usuario
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Usuario)
    {
        if (Usuario->objectName().isEmpty())
            Usuario->setObjectName(QStringLiteral("Usuario"));
        Usuario->resize(457, 243);
        label = new QLabel(Usuario);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 10, 131, 16));
        label_2 = new QLabel(Usuario);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 40, 59, 16));
        lineEdit = new QLineEdit(Usuario);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(90, 40, 281, 21));
        lineEdit->setReadOnly(true);
        label_6 = new QLabel(Usuario);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 80, 111, 16));
        lineEdit_2 = new QLineEdit(Usuario);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 80, 113, 21));
        lineEdit_2->setReadOnly(true);
        pushButton = new QPushButton(Usuario);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 130, 201, 32));
        pushButton_2 = new QPushButton(Usuario);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 130, 161, 32));
        pushButton_3 = new QPushButton(Usuario);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 80, 115, 32));
        pushButton_4 = new QPushButton(Usuario);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 180, 115, 32));

        retranslateUi(Usuario);

        QMetaObject::connectSlotsByName(Usuario);
    } // setupUi

    void retranslateUi(QDialog *Usuario)
    {
        Usuario->setWindowTitle(QApplication::translate("Usuario", "Dialog", 0));
        label->setText(QApplication::translate("Usuario", "Bienvenido Usuario", 0));
        label_2->setText(QApplication::translate("Usuario", "Nombre:", 0));
        label_6->setText(QApplication::translate("Usuario", "Dinero disponible:", 0));
        pushButton->setText(QApplication::translate("Usuario", "Comprar/Alquilar Peliculas", 0));
        pushButton_2->setText(QApplication::translate("Usuario", "Comprar Series de TV", 0));
        pushButton_3->setText(QApplication::translate("Usuario", "Pago", 0));
        pushButton_4->setText(QApplication::translate("Usuario", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class Usuario: public Ui_Usuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USUARIO_H

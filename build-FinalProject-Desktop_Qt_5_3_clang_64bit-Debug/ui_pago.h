/********************************************************************************
** Form generated from reading UI file 'pago.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGO_H
#define UI_PAGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pago
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;

    void setupUi(QDialog *Pago)
    {
        if (Pago->objectName().isEmpty())
            Pago->setObjectName(QStringLiteral("Pago"));
        Pago->resize(400, 251);
        label = new QLabel(Pago);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 20, 41, 16));
        label_2 = new QLabel(Pago);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 59, 16));
        label_3 = new QLabel(Pago);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 120, 59, 16));
        lineEdit = new QLineEdit(Pago);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 70, 251, 21));
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(Pago);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 120, 251, 21));
        pushButton_5 = new QPushButton(Pago);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(240, 200, 115, 32));
        pushButton_6 = new QPushButton(Pago);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 200, 115, 32));
        widget = new QWidget(Pago);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 160, 278, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setChecked(true);

        horizontalLayout->addWidget(radioButton_2);


        retranslateUi(Pago);

        QMetaObject::connectSlotsByName(Pago);
    } // setupUi

    void retranslateUi(QDialog *Pago)
    {
        Pago->setWindowTitle(QApplication::translate("Pago", "Dialog", 0));
        label->setText(QApplication::translate("Pago", "Pago", 0));
        label_2->setText(QApplication::translate("Pago", "Nombre:", 0));
        label_3->setText(QApplication::translate("Pago", "Cantidad:", 0));
        pushButton_5->setText(QApplication::translate("Pago", "Pagar", 0));
        pushButton_6->setText(QApplication::translate("Pago", "Cerrar", 0));
        radioButton->setText(QApplication::translate("Pago", "Tarjeta de Credito", 0));
        radioButton_2->setText(QApplication::translate("Pago", "Tarjeta de Regalo", 0));
    } // retranslateUi

};

namespace Ui {
    class Pago: public Ui_Pago {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGO_H

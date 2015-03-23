/********************************************************************************
** Form generated from reading UI file 'pagoprem.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGOPREM_H
#define UI_PAGOPREM_H

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

class Ui_PagoPrem
{
public:
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label;
    QPushButton *pushButton_5;

    void setupUi(QDialog *PagoPrem)
    {
        if (PagoPrem->objectName().isEmpty())
            PagoPrem->setObjectName(QStringLiteral("PagoPrem"));
        PagoPrem->resize(400, 300);
        label_2 = new QLabel(PagoPrem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 90, 59, 16));
        layoutWidget = new QWidget(PagoPrem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 180, 278, 20));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setChecked(true);

        horizontalLayout->addWidget(radioButton_2);

        lineEdit_2 = new QLineEdit(PagoPrem);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 130, 251, 21));
        pushButton_6 = new QPushButton(PagoPrem);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(140, 220, 115, 32));
        lineEdit = new QLineEdit(PagoPrem);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 90, 251, 21));
        label_3 = new QLabel(PagoPrem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 140, 59, 16));
        label = new QLabel(PagoPrem);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 40, 101, 16));
        pushButton_5 = new QPushButton(PagoPrem);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(260, 220, 115, 32));

        retranslateUi(PagoPrem);

        QMetaObject::connectSlotsByName(PagoPrem);
    } // setupUi

    void retranslateUi(QDialog *PagoPrem)
    {
        PagoPrem->setWindowTitle(QApplication::translate("PagoPrem", "Dialog", 0));
        label_2->setText(QApplication::translate("PagoPrem", "Nombre:", 0));
        radioButton->setText(QApplication::translate("PagoPrem", "Tarjeta de Credito", 0));
        radioButton_2->setText(QApplication::translate("PagoPrem", "Tarjeta de Regalo", 0));
        pushButton_6->setText(QApplication::translate("PagoPrem", "Cerrar", 0));
        label_3->setText(QApplication::translate("PagoPrem", "Cantidad:", 0));
        label->setText(QApplication::translate("PagoPrem", "Pago Premium", 0));
        pushButton_5->setText(QApplication::translate("PagoPrem", "Pagar", 0));
    } // retranslateUi

};

namespace Ui {
    class PagoPrem: public Ui_PagoPrem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGOPREM_H

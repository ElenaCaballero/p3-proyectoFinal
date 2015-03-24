/********************************************************************************
** Form generated from reading UI file 'iprempelis.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPREMPELIS_H
#define UI_IPREMPELIS_H

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

class Ui_IPremPelis
{
public:
    QPushButton *foto;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTextEdit *textEdit;

    void setupUi(QDialog *IPremPelis)
    {
        if (IPremPelis->objectName().isEmpty())
            IPremPelis->setObjectName(QStringLiteral("IPremPelis"));
        IPremPelis->resize(639, 519);
        foto = new QPushButton(IPremPelis);
        foto->setObjectName(QStringLiteral("foto"));
        foto->setGeometry(QRect(170, 10, 191, 151));
        label = new QLabel(IPremPelis);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 170, 59, 16));
        lineEdit = new QLineEdit(IPremPelis);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 170, 391, 21));
        label_2 = new QLabel(IPremPelis);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 200, 91, 16));
        textEdit = new QTextEdit(IPremPelis);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(50, 220, 441, 79));

        retranslateUi(IPremPelis);

        QMetaObject::connectSlotsByName(IPremPelis);
    } // setupUi

    void retranslateUi(QDialog *IPremPelis)
    {
        IPremPelis->setWindowTitle(QApplication::translate("IPremPelis", "Dialog", 0));
        foto->setText(QString());
        label->setText(QApplication::translate("IPremPelis", "Titulo:", 0));
        label_2->setText(QApplication::translate("IPremPelis", "Descripcion:", 0));
    } // retranslateUi

};

namespace Ui {
    class IPremPelis: public Ui_IPremPelis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPREMPELIS_H

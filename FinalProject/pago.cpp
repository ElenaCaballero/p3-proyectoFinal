#include "pago.h"
#include "ui_pago.h"
#include <stdlib.h>
#include <string>
#include "user.h"

Pago::Pago(vector<User>* u, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pago)
{
    usuarios = u;
    ui->setupUi(this);
    for(int i = 0; i < usuarios->size(); i++){
        ui->lineEdit->setText(QString(usuarios->at(i).getName().c_str()));
    }
}

Pago::~Pago()
{
    delete ui;
}

void Pago::on_pushButton_6_clicked()
{
    this->close();
}

void Pago::on_pushButton_5_clicked()
{
    string n = ui->lineEdit_2->text().toStdString();
    double num = atof(n.c_str());
    for(int i = 0; i < usuarios->size(); i++){
        usuarios->at(i).setBalance(usuarios->at(i).Pay(num));
    }
    this->close();
}

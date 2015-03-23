#include "pagoprem.h"
#include "ui_pagoprem.h"

PagoPrem::PagoPrem(vector<PremiumUser>* prem, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PagoPrem)
{
    premusuarios = prem;
    ui->setupUi(this);
    for(int i = 0; i < premusuarios->size(); i++){
        ui->lineEdit->setText(QString(premusuarios->at(i).getName().c_str()));
    }
}

PagoPrem::~PagoPrem()
{
    delete ui;
}

void PagoPrem::on_pushButton_6_clicked()
{
    this->close();
}

void PagoPrem::on_pushButton_5_clicked()
{
    string n = ui->lineEdit_2->text().toStdString();
    double num = atof(n.c_str());
    for(int i = 0; i < premusuarios->size(); i++){
        premusuarios->at(i).setSpecialBalance(premusuarios->at(i).Pay(num));
    }
    this->close();
}

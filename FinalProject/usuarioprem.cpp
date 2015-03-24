#include "usuarioprem.h"
#include "ui_usuarioprem.h"
#include "peliculasprem.h"
#include "seriesprem.h"
#include "pagoprem.h"

UsuarioPrem::UsuarioPrem(vector<PremiumUser>* prem,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UsuarioPrem)
{
    ui->setupUi(this);
    premusuarios = prem;
    for(int i = 0; i < premusuarios->size(); i++){
        ui->lineEdit->setText(QString(premusuarios->at(i).getName().c_str()));
        ui->lineEdit_2->setText(QString(premusuarios->at(i).getBalance().c_str()));
    }
}

UsuarioPrem::~UsuarioPrem()
{
    delete ui;
}

void UsuarioPrem::on_pushButton_4_clicked()
{
    this->close();
}

void UsuarioPrem::on_pushButton_clicked()
{
    PeliculasPrem pelis(premusuarios);
    pelis.exec();
    for(int i = 0; i < premusuarios->size(); i++){
        ui->lineEdit_2->setText(QString(premusuarios->at(i).getBalance().c_str()));
    }
}

void UsuarioPrem::on_pushButton_2_clicked()
{
    SeriesPrem serie(premusuarios);
    serie.exec();
    for(int i = 0; i < premusuarios->size(); i++){
        ui->lineEdit_2->setText(QString(premusuarios->at(i).getBalance().c_str()));
    }
}

void UsuarioPrem::on_pushButton_3_clicked()
{
    PagoPrem pay(premusuarios);
    pay.exec();
    for(int i = 0; i < premusuarios->size(); i++){
        ui->lineEdit_2->setText(QString(premusuarios->at(i).getBalance().c_str()));
    }
}

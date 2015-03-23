#include "usuario.h"
#include "ui_usuario.h"
#include "peliculas.h"
#include "series.h"
#include "pago.h"
#include "user.h"
#include "movies.h"
#include "entertainment.h"
#include <QPixmap>

Usuario::Usuario(vector<User>* u, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Usuario)
{

    usuarios = u;
    ui->setupUi(this);
    for(int i = 0; i < usuarios->size(); i++){
        ui->lineEdit->setText(QString(usuarios->at(i).getName().c_str()));
        ui->lineEdit_2->setText(QString(usuarios->at(i).getBalance().c_str()));
    }
}

Usuario::~Usuario()
{
    delete ui;
}

void Usuario::on_pushButton_4_clicked()
{
    this->close();
}

void Usuario::on_pushButton_clicked()
{
    Peliculas pelis(usuarios);

    pelis.exec();
    for(int i = 0; i < usuarios->size(); i++){
        ui->lineEdit_2->setText(QString(usuarios->at(i).getBalance().c_str()));
    }
}

void Usuario::on_pushButton_2_clicked()
{
    Series serie(usuarios);
    serie.exec();
    for(int i = 0; i < usuarios->size(); i++){
        ui->lineEdit_2->setText(QString(usuarios->at(i).getBalance().c_str()));
    }
}

void Usuario::on_pushButton_3_clicked()
{
    Pago pago(usuarios);
    pago.exec();
    for(int i = 0; i < usuarios->size(); i++){
        ui->lineEdit_2->setText(QString(usuarios->at(i).getBalance().c_str()));
    }
}

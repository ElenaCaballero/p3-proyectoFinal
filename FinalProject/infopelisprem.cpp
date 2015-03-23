#include "infopelisprem.h"
#include "ui_infopelisprem.h"
#include <QMessageBox>

InfoPelisPrem::InfoPelisPrem(int p, vector<Movies>* m, vector<PremiumUser>* u, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoPelisPrem)
{
    ui->setupUi(this);
    usuarios = u;
    pelic = m;
    ui->setupUi(this);
    pe = p;
    if(pe == 1){
        QPixmap pixmap(":birdman");
        QIcon ButtonIcon(pixmap);
        ui->foto->setIcon(ButtonIcon);
        ui->foto->setIconSize(pixmap.rect().size());
    }else if(pe == 2){
        QPixmap pixmap(":whiplash");
        QIcon ButtonIcon(pixmap);
        ui->foto->setIcon(ButtonIcon);
        ui->foto->setIconSize(pixmap.rect().size());
    }else if(pe == 3){
        QPixmap pixmap(":theory");
        QIcon ButtonIcon(pixmap);
        ui->foto->setIcon(ButtonIcon);
        ui->foto->setIconSize(pixmap.rect().size());
    }else if(pe == 4){
        QPixmap pixmap(":imitation");
        QIcon ButtonIcon(pixmap);
        ui->foto->setIcon(ButtonIcon);
        ui->foto->setIconSize(pixmap.rect().size());
    }
    for(int i = 0; i < pelic->size(); i++){
        ui->titulo->setText(QString(pelic->at(pe-1).getTitle().c_str()));
        ui->descri->setText(QString(pelic->at(pe-1).getDescription().c_str()));
        ui->clasi->setText(QString(pelic->at(pe-1).getRating().c_str()));
        ui->resena->setText(QString(pelic->at(pe-1).getReview().c_str()));
        ui->genero->setText(QString(pelic->at(pe-1).getGenre().c_str()));
        ui->estudio->setText(QString(pelic->at(pe-1).getStudio().c_str()));
        ui->fecha->setText(QString(pelic->at(pe-1).getReleased().c_str()));
        ui->tamano->setText(QString(pelic->at(pe-1).getSize().c_str()));
    }
}

InfoPelisPrem::~InfoPelisPrem()
{
    delete ui;
}

void InfoPelisPrem::on_pushButton_6_clicked()
{
    this->close();
}

void InfoPelisPrem::on_buyM_clicked()
{
    for(int i = 0; i < usuarios->size(); i++){
        usuarios->at(i).setSpecialBalance(usuarios->at(i).Buy(14.99));
    }
    QMessageBox msgBox;
    msgBox.setText("Has comprado una Pelicula.");
    msgBox.exec();
}

void InfoPelisPrem::on_RentM_clicked()
{
    for(int i = 0; i < usuarios->size(); i++){
        usuarios->at(i).setSpecialBalance(usuarios->at(i).Buy(4.99));
    }
    QMessageBox msgBox;
    msgBox.setText("Has rentado una Pelicula.");
    msgBox.exec();
}

#include "infoseries.h"
#include "ui_infoseries.h"
#include <QMessageBox>

InfoSeries::InfoSeries(int s, vector<TVSeries>* m, vector<User>* u, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoSeries)
{
    usuarios = u;
    pelic = m;
    ui->setupUi(this);
    se = s;
    if(se == 1){
        QPixmap pixmap("::/../build-FinalProject-Desktop_Qt_5_3_clang_64bit-Debug/cards.jpg");
        QIcon ButtonIcon(pixmap);
        ui->foto->setIcon(ButtonIcon);
        ui->foto->setIconSize(pixmap.rect().size());
    }else if(se == 2){
        QPixmap pixmap("::/../build-FinalProject-Desktop_Qt_5_3_clang_64bit-Debug/murder.jpg");
        QIcon ButtonIcon(pixmap);
        ui->foto->setIcon(ButtonIcon);
        ui->foto->setIconSize(pixmap.rect().size());
    }else if(se == 3){
        QPixmap pixmap("::/../build-FinalProject-Desktop_Qt_5_3_clang_64bit-Debug/orphan.jpg");
        QIcon ButtonIcon(pixmap);
        ui->foto->setIcon(ButtonIcon);
        ui->foto->setIconSize(pixmap.rect().size());
    }else if(se == 4){
        QPixmap pixmap("::/../build-FinalProject-Desktop_Qt_5_3_clang_64bit-Debug/scandal.jpg");
        QIcon ButtonIcon(pixmap);
        ui->foto->setIcon(ButtonIcon);
        ui->foto->setIconSize(pixmap.rect().size());
    }
    for(int i = 0; i < pelic->size(); i++){
        ui->titulo->setText(QString(pelic->at(se-1).getTitle().c_str()));
        ui->descri->setText(QString(pelic->at(se-1).getDescription().c_str()));
        ui->clasi->setText(QString(pelic->at(se-1).getRating().c_str()));
        ui->resena->setText(QString(pelic->at(se-1).getReview().c_str()));
        ui->genero->setText(QString(pelic->at(se-1).getGenre().c_str()));
        ui->estudio->setText(QString(pelic->at(se-1).getStudio().c_str()));
        ui->fecha->setText(QString(pelic->at(se-1).getReleased().c_str()));
        ui->episodios->setText(QString(pelic->at(se-1).getEpisodes().c_str()));
        ui->pepisodio->setText(QString(pelic->at(se-1).getBuyPrice().c_str()));
        ui->ptotal->setText(QString(pelic->at(se-1).getTotPrice().c_str()));
    }
}

InfoSeries::~InfoSeries()
{
    delete ui;
}

void InfoSeries::on_pushButton_6_clicked()
{
    this->close();
}

void InfoSeries::on_pushButton_2_clicked()
{
    for(int i = 0; i < usuarios->size(); i++){
        usuarios->at(i).setBalance(usuarios->at(i).Buy(1.99));
    }
    QMessageBox msgBox;
    msgBox.setText("Has comprado un Episodio.");
    msgBox.exec();
}

void InfoSeries::on_pushButton_clicked()
{
    string n = ui->ptotal->text().toStdString();
    double num = atof(n.c_str());
    for(int i = 0; i < usuarios->size(); i++){
        usuarios->at(i).setBalance(usuarios->at(i).Buy(num));
    }
    QMessageBox msgBox;
    msgBox.setText("Has comprado un todos los episodios de la serie.");
    msgBox.exec();
}

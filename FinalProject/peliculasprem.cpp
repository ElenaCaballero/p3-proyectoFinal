#include "peliculasprem.h"
#include "ui_peliculasprem.h"
#include "infopelisprem.h"

PeliculasPrem::PeliculasPrem(vector<PremiumUser>* u, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PeliculasPrem)
{
    usuarios = u;
    pelic = new vector<Movies>();
    crew = crew;
    pelic->push_back(Movies("Birdman","Fame and Failure",5,"R","Comedy","Fox Searchlight","2014",1.59,1080,crew,2));
    pelic->push_back(Movies("Whiplash","Jazz Drum Player",5,"R","Drama","Whiplash LLC","2014",1.46,1080,crew,2));
    pelic->push_back(Movies("Theory of Everything","Stephen Hawking",4,"PG-13","Drama","Focus Features","2014",2.03,1080,crew,2));
    pelic->push_back(Movies("Imitation Game","Alan Turing",5,"PG-13","Drama","The Weinstein Company","2014",1.53,1080,crew,2));

    ui->setupUi(this);
    QPixmap pixmap(":birdman");
    QIcon ButtonIcon(pixmap);
    ui->peli1->setIcon(ButtonIcon);
    ui->peli1->setIconSize(pixmap.rect().size());
    QPixmap pixmap2(":whiplash");
    QIcon ButtonIcon2(pixmap2);
    ui->peli2->setIcon(ButtonIcon2);
    ui->peli2->setIconSize(pixmap2.rect().size());
    QPixmap pixmap3(":theory");
    QIcon ButtonIcon3(pixmap3);
    ui->peli3->setIcon(ButtonIcon3);
    ui->peli3->setIconSize(pixmap3.rect().size());
    QPixmap pixmap4(":imitation");
    QIcon ButtonIcon4(pixmap4);
    ui->peli4->setIcon(ButtonIcon4);
    ui->peli4->setIconSize(pixmap4.rect().size());

}

PeliculasPrem::~PeliculasPrem()
{
    delete ui;
}

void PeliculasPrem::on_peli1_clicked()
{
    InfoPelisPrem info(1, pelic, usuarios);
    info.exec();
}

void PeliculasPrem::on_peli2_clicked()
{
    InfoPelisPrem info(2, pelic, usuarios);
    info.exec();
}

void PeliculasPrem::on_peli3_clicked()
{
    InfoPelisPrem info(3, pelic, usuarios);
    info.exec();
}

void PeliculasPrem::on_peli4_clicked()
{
    InfoPelisPrem info(4, pelic, usuarios);
    info.exec();
}

void PeliculasPrem::on_pushButton_5_clicked()
{
    this->close();
}

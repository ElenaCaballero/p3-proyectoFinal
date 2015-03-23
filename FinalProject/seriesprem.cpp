#include "seriesprem.h"
#include "ui_seriesprem.h"
#include "infoseriesprem.h"

SeriesPrem::SeriesPrem(vector<PremiumUser>* u,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SeriesPrem)
{
    usuarios = u;
    pelic = new vector<TVSeries>();
    pelic->push_back(TVSeries("House of Cards", "Presidential", 5, "R", "Drama", "Netflix","Febrero 1, 2013",39));
    pelic->push_back(TVSeries("How to Get Away with Murder", "Murder plot", 4, "R", "Legal Drama", "ABC Disney","Septiembre 25, 2014",15));
    pelic->push_back(TVSeries("Orphan Black", "Clones", 4, "R", "Science Fiction", "BBC America","Marzo 30, 2013",20));
    pelic->push_back(TVSeries("Scandal", "Presidential", 4, "R", "Drama", "ABC Disney","Abril 5, 2012",63));

    ui->setupUi(this);
    QPixmap pixmap("::/../build-FinalProject-Desktop_Qt_5_3_clang_64bit-Debug/cards.jpg");
    QIcon ButtonIcon(pixmap);
    ui->serie1->setIcon(ButtonIcon);
    ui->serie1->setIconSize(pixmap.rect().size());
    QPixmap pixmap2("::/../build-FinalProject-Desktop_Qt_5_3_clang_64bit-Debug/murder.jpg");
    QIcon ButtonIcon2(pixmap2);
    ui->serie2->setIcon(ButtonIcon2);
    ui->serie2->setIconSize(pixmap2.rect().size());
    QPixmap pixmap3("::/../build-FinalProject-Desktop_Qt_5_3_clang_64bit-Debug/orphan.jpg");
    QIcon ButtonIcon3(pixmap3);
    ui->serie3->setIcon(ButtonIcon3);
    ui->serie3->setIconSize(pixmap3.rect().size());
    QPixmap pixmap4("::/../build-FinalProject-Desktop_Qt_5_3_clang_64bit-Debug/scandal.jpg");
    QIcon ButtonIcon4(pixmap4);
    ui->serie4->setIcon(ButtonIcon4);
    ui->serie4->setIconSize(pixmap4.rect().size());
}

SeriesPrem::~SeriesPrem()
{
    delete ui;
}

void SeriesPrem::on_serie1_clicked()
{
    InfoSeriesPrem ser(1, pelic, usuarios);
    ser.exec();
}

void SeriesPrem::on_serie2_clicked()
{
    InfoSeriesPrem ser(2, pelic, usuarios);
    ser.exec();
}

void SeriesPrem::on_serie3_clicked()
{
    InfoSeriesPrem ser(3, pelic, usuarios);
    ser.exec();
}

void SeriesPrem::on_serie4_clicked()
{
    InfoSeriesPrem ser(4, pelic, usuarios);
    ser.exec();
}

void SeriesPrem::on_pushButton_5_clicked()
{
    this->close();
}

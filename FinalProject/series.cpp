#include "series.h"
#include "ui_series.h"
#include "infoseries.h"

Series::Series(vector<User>* u, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Series)
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

Series::~Series()
{
    delete ui;
}

void Series::on_pushButton_5_clicked()
{
    this->close();
}

void Series::on_serie1_clicked()
{
    InfoSeries ser(1, pelic, usuarios);
    ser.exec();
}

void Series::on_serie2_clicked()
{
    InfoSeries ser(2, pelic, usuarios);
    ser.exec();
}

void Series::on_serie3_clicked()
{
    InfoSeries ser(3, pelic, usuarios);
    ser.exec();
}

void Series::on_serie4_clicked()
{
    InfoSeries ser(4, pelic, usuarios);
    ser.exec();
}

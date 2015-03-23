#include "infopelisprem.h"
#include "ui_infopelisprem.h"

InfoPelisPrem::InfoPelisPrem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoPelisPrem)
{
    ui->setupUi(this);
}

InfoPelisPrem::~InfoPelisPrem()
{
    delete ui;
}

#include "infoseriesprem.h"
#include "ui_infoseriesprem.h"

InfoSeriesPrem::InfoSeriesPrem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoSeriesPrem)
{
    ui->setupUi(this);
}

InfoSeriesPrem::~InfoSeriesPrem()
{
    delete ui;
}

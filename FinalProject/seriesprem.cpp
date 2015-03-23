#include "seriesprem.h"
#include "ui_seriesprem.h"

SeriesPrem::SeriesPrem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SeriesPrem)
{
    ui->setupUi(this);
}

SeriesPrem::~SeriesPrem()
{
    delete ui;
}

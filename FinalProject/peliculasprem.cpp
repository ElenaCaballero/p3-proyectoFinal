#include "peliculasprem.h"
#include "ui_peliculasprem.h"

PeliculasPrem::PeliculasPrem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PeliculasPrem)
{
    ui->setupUi(this);
}

PeliculasPrem::~PeliculasPrem()
{
    delete ui;
}

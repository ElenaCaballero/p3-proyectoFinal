#include "iprempelis.h"
#include "ui_iprempelis.h"

IPremPelis::IPremPelis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IPremPelis)
{
    ui->setupUi(this);
}

IPremPelis::~IPremPelis()
{
    delete ui;
}

#ifndef INFOPELISPREM_H
#define INFOPELISPREM_H

#include <QDialog>

namespace Ui {
class InfoPelisPrem;
}

class InfoPelisPrem : public QDialog
{
    Q_OBJECT

public:
    explicit InfoPelisPrem(QWidget *parent = 0);
    ~InfoPelisPrem();

private:
    Ui::InfoPelisPrem *ui;
};

#endif // INFOPELISPREM_H

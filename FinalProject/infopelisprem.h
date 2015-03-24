#ifndef INFOPELISPREM_H
#define INFOPELISPREM_H

#include <QDialog>
#include <vector>
#include "movies.h"
#include "premiumuser.h"

namespace Ui {
class InfoPelisPrem;
}

class InfoPelisPrem : public QDialog
{
    Q_OBJECT

public:
    explicit InfoPelisPrem(int, vector<Movies>*, vector<PremiumUser>*, QWidget *parent = 0);
    ~InfoPelisPrem();

private slots:
    void on_close_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::InfoPelisPrem *ui;
    int pe;
    vector<Movies>* pelic;
    vector<PremiumUser>* usuarios;
};

#endif // INFOPELISPREM_H

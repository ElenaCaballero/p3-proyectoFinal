#ifndef INFOSERIESPREM_H
#define INFOSERIESPREM_H

#include <QDialog>
#include <vector>
#include "tvseries.h"
#include "premiumuser.h"

namespace Ui {
class InfoSeriesPrem;
}

class InfoSeriesPrem : public QDialog
{
    Q_OBJECT

public:
    explicit InfoSeriesPrem(int, vector<TVSeries>*, vector<PremiumUser>*, QWidget *parent = 0);
    ~InfoSeriesPrem();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::InfoSeriesPrem *ui;
    int se;
    vector<TVSeries>* pelic;
    vector<PremiumUser>* usuarios;
};

#endif // INFOSERIESPREM_H

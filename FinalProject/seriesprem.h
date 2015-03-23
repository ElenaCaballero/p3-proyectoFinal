#ifndef SERIESPREM_H
#define SERIESPREM_H

#include <QDialog>
#include "premiumuser.h"
#include "tvseries.h"

namespace Ui {
class SeriesPrem;
}

class SeriesPrem : public QDialog
{
    Q_OBJECT

public:
    explicit SeriesPrem(vector<PremiumUser>*, QWidget *parent = 0);
    ~SeriesPrem();

private slots:
    void on_serie1_clicked();

    void on_serie2_clicked();

    void on_serie3_clicked();

    void on_serie4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::SeriesPrem *ui;
    vector<TVSeries>* pelic;
    vector<PremiumUser>* usuarios;
};

#endif // SERIESPREM_H

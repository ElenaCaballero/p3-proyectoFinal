#ifndef PELICULASPREM_H
#define PELICULASPREM_H

#include <QDialog>
#include "movies.h"
#include "cast.h"
#include "premiumuser.h"

namespace Ui {
class PeliculasPrem;
}

class PeliculasPrem : public QDialog
{
    Q_OBJECT

public:
    explicit PeliculasPrem(vector<PremiumUser>*, QWidget *parent = 0);
    ~PeliculasPrem();

private slots:
    void on_peli1_clicked();

    void on_peli4_clicked();

    void on_peli2_clicked();

    void on_peli3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::PeliculasPrem *ui;
    vector<Cast*> crew;
    vector<Movies>* pelic;
    vector<PremiumUser>* usuarios;
};

#endif // PELICULASPREM_H

#ifndef PELICULAS_H
#define PELICULAS_H

#include <QDialog>
#include "movies.h"
#include "cast.h"
#include "user.h"

namespace Ui {
class Peliculas;
}

class Peliculas : public QDialog
{
    Q_OBJECT

public:
    explicit Peliculas(vector<User>*, QWidget *parent = 0);
    ~Peliculas();

private slots:
    void on_pushButton_5_clicked();

    void on_peli1_clicked();

    void on_peli2_clicked();

    void on_peli3_clicked();

    void on_peli4_clicked();

private:
    Ui::Peliculas *ui;
    vector<Cast*> crew;
    vector<Movies>* pelic;
    vector<User>* usuarios;
};

#endif // PELICULAS_H

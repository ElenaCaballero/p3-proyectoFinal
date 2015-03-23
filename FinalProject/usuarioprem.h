#ifndef USUARIOPREM_H
#define USUARIOPREM_H

#include <QDialog>
#include <vector>
#include "premiumuser.h"
#include "movies.h"
#include "cast.h"

namespace Ui {
class UsuarioPrem;
}

class UsuarioPrem : public QDialog
{
    Q_OBJECT

public:
    explicit UsuarioPrem(vector<PremiumUser>*, QWidget *parent = 0);
    ~UsuarioPrem();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::UsuarioPrem *ui;
    vector<PremiumUser>* premusuarios;

};

#endif // USUARIOPREM_H

#ifndef INFOPELIS_H
#define INFOPELIS_H

#include <QDialog>
#include <vector>
#include "movies.h"
#include "user.h"

namespace Ui {
class InfoPelis;
}

class InfoPelis : public QDialog
{
    Q_OBJECT

public:
    explicit InfoPelis(int, vector<Movies>*, vector<User>*, QWidget *parent = 0);
    ~InfoPelis();

private slots:
    void on_pushButton_6_clicked();

    void on_buyM_clicked();

    void on_RentM_clicked();

private:
    Ui::InfoPelis *ui;
    int pe;
    vector<Movies>* pelic;
    vector<User>* usuarios;
};

#endif // INFOPELIS_H

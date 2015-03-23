#ifndef PAGOPREM_H
#define PAGOPREM_H

#include <QDialog>
#include <vector>
#include "premiumuser.h"

namespace Ui {
class PagoPrem;
}

class PagoPrem : public QDialog
{
    Q_OBJECT

public:
    explicit PagoPrem(vector<PremiumUser>*, QWidget *parent = 0);
    ~PagoPrem();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::PagoPrem *ui;
    vector<PremiumUser>* premusuarios;
};

#endif // PAGOPREM_H

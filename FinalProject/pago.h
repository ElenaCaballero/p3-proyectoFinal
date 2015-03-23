#ifndef PAGO_H
#define PAGO_H

#include <QDialog>
#include <vector>
#include "user.h"

namespace Ui {
class Pago;
}

class Pago : public QDialog
{
    Q_OBJECT

public:
    explicit Pago(vector<User>*, QWidget *parent = 0);
    ~Pago();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Pago *ui;
    vector<User>* usuarios;
};

#endif // PAGO_H

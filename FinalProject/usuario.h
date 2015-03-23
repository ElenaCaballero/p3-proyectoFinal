#ifndef USUARIO_H
#define USUARIO_H

#include <QDialog>
#include <vector>
#include "user.h"
#include "cast.h"
#include "movies.h"

namespace Ui {
class Usuario;
}

class Usuario : public QDialog
{
    Q_OBJECT

public:
    explicit Usuario(vector<User>*, QWidget *parent = 0);
    ~Usuario();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Usuario *ui;
    vector<User>* usuarios;
};

#endif // USUARIO_H

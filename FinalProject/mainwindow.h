#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "user.h"
#include "premiumuser.h"
#include "entertainment.h"
using std::vector;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<User>* usuarios;
    vector<PremiumUser>* premusuarios;
    vector<Entertainment*> bought;
    vector<Entertainment*> rented;
};

#endif // MAINWINDOW_H

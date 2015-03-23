#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "usuario.h"
#include "usuarioprem.h"
#include "user.h"
#include "premiumuser.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    usuarios = new vector<User>();
    premusuarios = new vector<PremiumUser>();
    usuarios->push_back(User("Elena","345","egc", bought, rented));
    premusuarios->push_back(PremiumUser("Special Elena","123","egc",bought,rented));
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Usuario u(usuarios);
    u.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    UsuarioPrem u(premusuarios);
    u.exec();
}

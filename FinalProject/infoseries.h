#ifndef INFOSERIES_H
#define INFOSERIES_H

#include <QDialog>
#include <vector>
#include "tvseries.h"
#include "user.h"

namespace Ui {
class InfoSeries;
}

class InfoSeries : public QDialog
{
    Q_OBJECT

public:
    explicit InfoSeries(int, vector<TVSeries>*, vector<User>*, QWidget *parent = 0);
    ~InfoSeries();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::InfoSeries *ui;
    int se;
    vector<TVSeries>* pelic;
    vector<User>* usuarios;
};

#endif // INFOSERIES_H

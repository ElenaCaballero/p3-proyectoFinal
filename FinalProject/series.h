#ifndef SERIES_H
#define SERIES_H

#include <QDialog>
#include "tvseries.h"
#include "user.h"

namespace Ui {
class Series;
}

class Series : public QDialog
{
    Q_OBJECT

public:
    explicit Series(vector<User>*, QWidget *parent = 0);
    ~Series();

private slots:
    void on_pushButton_5_clicked();

    void on_serie1_clicked();

    void on_serie2_clicked();

    void on_serie3_clicked();

    void on_serie4_clicked();

private:
    Ui::Series *ui;
    vector<TVSeries>* pelic;
    vector<User>* usuarios;
};

#endif // SERIES_H

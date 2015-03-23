#ifndef PELICULASPREM_H
#define PELICULASPREM_H

#include <QDialog>

namespace Ui {
class PeliculasPrem;
}

class PeliculasPrem : public QDialog
{
    Q_OBJECT

public:
    explicit PeliculasPrem(QWidget *parent = 0);
    ~PeliculasPrem();

private:
    Ui::PeliculasPrem *ui;
};

#endif // PELICULASPREM_H

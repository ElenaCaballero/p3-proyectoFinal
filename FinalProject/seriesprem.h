#ifndef SERIESPREM_H
#define SERIESPREM_H

#include <QDialog>

namespace Ui {
class SeriesPrem;
}

class SeriesPrem : public QDialog
{
    Q_OBJECT

public:
    explicit SeriesPrem(QWidget *parent = 0);
    ~SeriesPrem();

private:
    Ui::SeriesPrem *ui;
};

#endif // SERIESPREM_H

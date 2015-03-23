#ifndef INFOSERIESPREM_H
#define INFOSERIESPREM_H

#include <QDialog>

namespace Ui {
class InfoSeriesPrem;
}

class InfoSeriesPrem : public QDialog
{
    Q_OBJECT

public:
    explicit InfoSeriesPrem(QWidget *parent = 0);
    ~InfoSeriesPrem();

private:
    Ui::InfoSeriesPrem *ui;
};

#endif // INFOSERIESPREM_H

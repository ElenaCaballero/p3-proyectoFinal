#ifndef IPREMPELIS_H
#define IPREMPELIS_H

#include <QDialog>

namespace Ui {
class IPremPelis;
}

class IPremPelis : public QDialog
{
    Q_OBJECT

public:
    explicit IPremPelis(QWidget *parent = 0);
    ~IPremPelis();

private:
    Ui::IPremPelis *ui;
};

#endif // IPREMPELIS_H

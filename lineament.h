#ifndef LINEAMENT_H
#define LINEAMENT_H

#include <QWidget>

namespace Ui {
class Lineament;
}

class Lineament : public QWidget
{
    Q_OBJECT

public:
    explicit Lineament(QWidget *parent = 0);
    ~Lineament();


private:
    Ui::Lineament *ui;
};

#endif // LINEAMENT_H

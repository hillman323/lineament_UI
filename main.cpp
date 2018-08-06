#include "lineament.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Lineament w;
    w.showMaximized();

    return a.exec();
}

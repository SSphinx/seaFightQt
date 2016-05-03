#include "seafightqt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    seaFightQt w;
    w.show();

    return a.exec();
}

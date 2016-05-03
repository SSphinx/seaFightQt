#include "seafightqt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    seaFightQt w;
    w.show();
    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(QPixmap(":/menubg.png")));
    w.setPalette(palette);

    return a.exec();
}

#include "maingame.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainGame w;
    w.show();
    return a.exec();
}

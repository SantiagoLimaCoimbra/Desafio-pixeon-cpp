
#include "viewwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ViewWindow w;
    w.show();
    return a.exec();
}

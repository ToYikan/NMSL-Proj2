#include "mainclient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainClient *w = new MainClient;
    w->show();

    return a.exec();
}

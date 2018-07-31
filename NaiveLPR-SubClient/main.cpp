#include "subclient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SubClient w;
    w.show();

    return a.exec();
}

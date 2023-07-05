#include "datalogger.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    datalogger w;
    w.show();

    return a.exec();
}

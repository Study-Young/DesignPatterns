#include <QCoreApplication>

#include "adapter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Target *target = new Adapter();
    target->Request();

    return a.exec();
}

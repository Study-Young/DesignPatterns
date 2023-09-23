#include <QCoreApplication>

#include "visitor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ObjectStructure *o = new ObjectStructure();
    o->Attach(new Man());
    o->Attach(new Woman());

    Success *v1 = new Success();
    o->Display(v1);

    Failing *v2 = new Failing();
    o->Display(v2);

    Amativeness *v3 = new Amativeness();
    o->Display(v3);

    Marriage *v4 = new Marriage();
    o->Display(v4);

    return a.exec();
}

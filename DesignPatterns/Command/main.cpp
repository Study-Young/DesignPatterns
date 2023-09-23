#include <QCoreApplication>

#include "command.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Receiver *r = new Receiver();
    Command *c = new ConcreteCommand(r);
    Invoker *i = new Invoker();

    i->SetCommand(c);
    i->ExecuteCommand();

    return a.exec();
}

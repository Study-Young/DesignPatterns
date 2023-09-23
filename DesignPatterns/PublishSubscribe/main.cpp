#include <QCoreApplication>

#include "publishsubscribe.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ConcreteSubject *s = new ConcreteSubject();
    s->Attach(new ConcreteObserver(s, "X"));
    s->Attach(new ConcreteObserver(s, "Y"));
    s->Attach(new ConcreteObserver(s, "Z"));

    s->setSubjectState("ABC");
    s->Notify();

    return a.exec();
}

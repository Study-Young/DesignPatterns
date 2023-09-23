#include <QCoreApplication>
#include "mediator.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ConcreteMediator *m = new ConcreteMediator();

    ConcreteColleague1 *c1 = new ConcreteColleague1(m);
    ConcreteColleague2 *c2 = new ConcreteColleague2(m);

    m->setConcreteColleague1(c1);
    m->setConcreteColleague2(c2);

    c1->Send("吃过饭了吗？");
    c2->Send("没有呢，你打算请客？");

    return a.exec();
}

#include <QCoreApplication>

#include "iterator.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ConcreateAggregate *ca = new ConcreateAggregate();
    ca->setItem(0, "大鸟");
    ca->setItem(1, "小菜");
    ca->setItem(2, "行李");
    ca->setItem(3, "老外");
    ca->setItem(4, "公交内部员工");
    ca->setItem(5, "小偷");

    Iterator *i = new ConcreteIterator(ca);
    QString str = i->First();

    while(!i->IsDone())
    {
        qDebug()<<i->CurrentItem()<<" 请买票!";
        i->Next();
    }

    return a.exec();
}

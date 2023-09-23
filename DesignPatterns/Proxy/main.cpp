#include <QCoreApplication>

#include "proxy.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SchoolGirl* jiaojiao = new SchoolGirl();
    jiaojiao->setName("jiaojiao");

    Proxy* daili = new Proxy(jiaojiao);
    daili->giveDolls();
    daili->giveFlowers();
    daili->giveChocolate();

    return a.exec();
}

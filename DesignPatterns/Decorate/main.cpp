#include <QCoreApplication>
#include "person.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Person* xc = new Person("小菜");

    qDebug()<<"第一种装扮";

    GymShoes* qx = new GymShoes();
    BigTrouser* kk = new BigTrouser();
    TShirts* tx = new TShirts();

    qx->decorate(xc);
    kk->decorate(qx);
    tx->decorate(kk);
    tx->show();

    qDebug()<<"第二种装扮";

    LeatherShoes* px = new LeatherShoes();
    Tie* ld = new Tie();
    BusinessSuit *xz = new BusinessSuit();

    px->decorate(xc);
    ld->decorate(px);
    xz->decorate(ld);
    xz->show();

    return a.exec();
}

#include <QCoreApplication>
#include "bridge.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    HandsetBrand *ab;
    ab = new HandsetBrandM();
    ab->SetHandsetSoft(new HandsetGame());
    ab->Run();
    ab->SetHandsetSoft(new HandsetAddressList());
    ab->Run();

    ab = new HandsetBrandN();
    ab->SetHandsetSoft(new HandsetGame());
    ab->Run();
    ab->SetHandsetSoft(new HandsetAddressList());
    ab->Run();

    return a.exec();
}

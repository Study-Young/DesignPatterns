#include "factorymethod.h"
#include <QString>
#include <QDebug>

void LeiFeng::sweep()
{
    qDebug()<<"Sweep!";
}

void LeiFeng::wash()
{
    qDebug()<<"Wash!";
}

void LeiFeng::buyRice()
{
    qDebug()<<"BuyRice!";
}

LeiFeng* UndergraduateFactory::createLeiFeng()
{
    return new Undergraduate();
}

LeiFeng* VolunteerFactory::createLeiFeng()
{
    return new Volunteer();
}

#include "proxy.h"
#include <QDebug>

QString SchoolGirl::getName()
{
    return m_name;
}

void SchoolGirl::setName(QString name)
{
    m_name = name;
}

Pursuit::Pursuit(SchoolGirl* mm)
{
    m_mm = mm;
}

void Pursuit::giveDolls()
{
    qDebug()<< m_mm->getName() << " Pursuit give you a doll!";
}

void Pursuit::giveFlowers()
{
    qDebug()<< m_mm->getName() << " Pursuit give you flowers!";
}

void Pursuit::giveChocolate()
{
    qDebug()<< m_mm->getName() << " Pursuit give you a chocolate!";
}

Proxy::Proxy(SchoolGirl* mm)
{
    m_gg = new Pursuit(mm);
}

void Proxy::giveDolls()
{
    m_gg->giveDolls();
}

void Proxy::giveFlowers()
{
    m_gg->giveFlowers();
}

void Proxy::giveChocolate()
{
    m_gg->giveChocolate();
}

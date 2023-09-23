#include "person.h"

Person::Person()
{

}

Person::Person(QString name)
{
    m_name = name;
}

void Person::show()
{
    qDebug() << QString("装扮的%1").arg(m_name);
}

void Finery::decorate(Person* component)
{
    m_component = component;
}

void Finery::show()
{
    if(m_component != nullptr)
        m_component->show();
}

void TShirts::show()
{
    qDebug()<<"大T恤 ";
    Finery::show();
}

void BigTrouser::show()
{
    qDebug()<<"垮裤 ";
    Finery::show();
}

void GymShoes::show()
{
    qDebug()<<"球鞋 ";
    Finery::show();
}


void BusinessSuit::show()
{
    qDebug()<<"西装 ";
    Finery::show();
}


void Tie::show()
{
    qDebug()<<"领带 ";
    Finery::show();
}


void LeatherShoes::show()
{
    qDebug()<<"皮鞋 ";
    Finery::show();
}

#include "mediator.h"

Colleague::Colleague(Mediator *mediator)
{
    m_pMediator = mediator;
}

ConcreteColleague1::ConcreteColleague1(Mediator *mediator)
    :Colleague(mediator)
{

}

void ConcreteColleague1::Send(QString message)
{
    m_pMediator->Send(message, this);
}

void ConcreteColleague1::Notify(QString message)
{
    qDebug()<<"同事1得到信息"<<message;
}

ConcreteColleague2::ConcreteColleague2(Mediator *mediator)
    :Colleague(mediator)
{

}

void ConcreteColleague2::Send(QString message)
{
    m_pMediator->Send(message, this);
}

void ConcreteColleague2::Notify(QString message)
{
    qDebug()<<"同事2得到信息"<<message;
}

void ConcreteMediator::setConcreteColleague1(ConcreteColleague1 *colleague)
{
    m_pColleague1 = colleague;
}

void ConcreteMediator::setConcreteColleague2(ConcreteColleague2 *colleague)
{
    m_pColleague2 = colleague;
}

void ConcreteMediator::Send(QString message, Colleague *colleague)
{
    if(colleague == m_pColleague1)
        m_pColleague2->Notify(message);
    else
        m_pColleague1->Notify(message);
}

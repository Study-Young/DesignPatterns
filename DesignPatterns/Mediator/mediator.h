#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QString>
#include <QDebug>

class Colleague;

class Mediator
{
public:
    virtual void Send(QString message, Colleague *colleague) = 0;
};

class Colleague
{
public:
    Colleague(Mediator *mediator);

protected:
    Mediator * m_pMediator;
};

class ConcreteColleague1 : public Colleague
{
public:
    ConcreteColleague1(Mediator *mediator);
    void Send(QString message);
    void Notify(QString message);
};

class ConcreteColleague2 : public Colleague
{
public:
    ConcreteColleague2(Mediator *mediator);
    void Send(QString message);
    void Notify(QString message);
};

class ConcreteMediator : public Mediator
{
public:
    void setConcreteColleague1(ConcreteColleague1 *colleague);
    void setConcreteColleague2(ConcreteColleague2 *colleague);
    void Send(QString message, Colleague *colleague);

private:
    ConcreteColleague1 *m_pColleague1;
    ConcreteColleague2 *m_pColleague2;
};

#endif // MEDIATOR_H

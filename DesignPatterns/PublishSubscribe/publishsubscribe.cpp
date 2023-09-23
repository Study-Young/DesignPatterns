#include "publishsubscribe.h"

#include <QDebug>

void Subject::Attach(Observer *observer)
{
    observers.append(observer);
}

void Subject::Detach(Observer *observer)
{
    observers.removeOne(observer);
}

void Subject::Notify()
{
    for(int i=0; i<observers.size(); i++)
    {
        Observer *observer = observers.at(i);
        observer->Update();
    }
}

QString ConcreteSubject::getSubjectState()
{
    return subjectState;
}

void ConcreteSubject::setSubjectState(QString str)
{
    subjectState = str;
}

ConcreteObserver::ConcreteObserver(ConcreteSubject *subject, QString name)
{
    m_subject = subject;
    m_name = name;
}

void ConcreteObserver::Update()
{
    m_observerState = m_subject->getSubjectState();
    qDebug()<<QString("观察者%1的状态是%2").arg(m_name).arg(m_observerState);
}

ConcreteSubject *ConcreteObserver::getConcreteSubject()
{
    return m_subject;
}

void ConcreteObserver::setConcreteSubject(ConcreteSubject *subject)
{
    m_subject = subject;
}

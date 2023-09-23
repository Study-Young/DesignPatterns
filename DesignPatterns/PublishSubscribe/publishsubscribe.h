#ifndef PUBLISHSUBSCRIBE_H
#define PUBLISHSUBSCRIBE_H

#include <QList>

class Observer
{
public:
    virtual void Update() = 0;
};

class Subject
{
public:
    void Attach(Observer *observer);
    void Detach(Observer *observer);
    void Notify();

private:
    QList<Observer *> observers;
};

class ConcreteSubject : public Subject
{
public:
    QString getSubjectState();
    void setSubjectState(QString str);

private:
    QString subjectState;
};

class ConcreteObserver : public Observer
{
public:
    ConcreteObserver(ConcreteSubject *subject, QString name);
    void Update();
    ConcreteSubject *getConcreteSubject();
    void setConcreteSubject(ConcreteSubject *subject);

private:
    QString m_name;
    QString m_observerState;
    ConcreteSubject *m_subject;
};

#endif // PUBLISHSUBSCRIBE_H

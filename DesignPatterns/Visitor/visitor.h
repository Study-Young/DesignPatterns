#ifndef VISITOR_H
#define VISITOR_H

#include <QString>
#include <QDebug>

class Action;

class Person
{
public:
    virtual void Accept(Action *visitor) = 0;
};

class Man : public Person
{
public:
    void Accept(Action *visitor);
    QString name = "男人";
};

class Woman : public Person
{
public:
    void Accept(Action *visitor);
    QString name = "女人";
};

class Action
{
public:
    virtual void GetManConclusion(Man *concreteElementA) = 0;
    virtual void GetWomanConclusion(Woman *concreteElementB) = 0;
};

class Success : public Action
{
public:
    void GetManConclusion(Man *concreteElementA);
    void GetWomanConclusion(Woman *concreteElementB);
    QString name = "成功";
};

class Failing : public Action
{
public:
    void GetManConclusion(Man *concreteElementA);
    void GetWomanConclusion(Woman *concreteElementB);
    QString name = "失败";
};

class Amativeness : public Action
{
public:
    void GetManConclusion(Man *concreteElementA);
    void GetWomanConclusion(Woman *concreteElementB);
    QString name = "恋爱";
};

class Marriage : public Action
{
    void GetManConclusion(Man *concreteElementA);
    void GetWomanConclusion(Woman *concreteElementB);
    QString name = "结婚";
};

class ObjectStructure
{
public:
    void Attach(Person *element);
    void Detach(Person *element);
    void Display(Action *visitor);

private:
    QList<Person *> elementList;
};

#endif // VISITOR_H

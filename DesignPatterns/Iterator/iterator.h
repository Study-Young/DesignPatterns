#ifndef ITERATOR_H
#define ITERATOR_H
#include <QDebug>

class Iterator
{
public:
    virtual QString First() = 0;
    virtual QString Next() = 0;
    virtual bool IsDone() = 0;
    virtual QString CurrentItem() = 0;
};

class Aggregate
{
public:
    virtual Iterator * CreateIterator() = 0;
};

class ConcreateAggregate : public Aggregate
{
public:
    Iterator * CreateIterator();
    int getCount();
    QString getItem(int index);
    void setItem(int index, QString value);

private:
    QList<QString> items;
};

class ConcreteIterator : public Iterator
{
public:
    ConcreteIterator(ConcreateAggregate *aggregate);
    QString First();
    QString Next();
    bool IsDone();
    QString CurrentItem();

private:
    ConcreateAggregate *m_pAggregate;
    int m_current = 0;
};

#endif // ITERATOR_H

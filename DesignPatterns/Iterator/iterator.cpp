#include "iterator.h"

Iterator * ConcreateAggregate::CreateIterator()
{
    return new ConcreteIterator(this);
}

int ConcreateAggregate::getCount()
{
    return items.size();
}

QString ConcreateAggregate::getItem(int index)
{
    return items[index];
}

void ConcreateAggregate::setItem(int index, QString value)
{
    items.insert(index, value);
}

ConcreteIterator::ConcreteIterator(ConcreateAggregate *aggregate)
{
    m_pAggregate = aggregate;
}

QString ConcreteIterator::First()
{
    return m_pAggregate->getItem(0);
}

QString ConcreteIterator::Next()
{
    QString str;
    m_current++;
    if(m_current < m_pAggregate->getCount())
        str = m_pAggregate->getItem(m_current);

    return str;
}

bool ConcreteIterator::IsDone()
{
    return m_current >= m_pAggregate->getCount() ? true : false;
}

QString ConcreteIterator::CurrentItem()
{
    return m_pAggregate->getItem(m_current);
}

#include "component.h"

Component::Component(QString name)
{
    m_name = name;
}

Leaf::Leaf(QString name)
    :Component(name)
{
}

void Leaf::Add(Component *c)
{
    qDebug()<<"Cannot add to leaf!";
}

void Leaf::Remove(Component *c)
{
    qDebug()<<"Cannot remove to leaf!";
}

void Leaf::Display(int depth)
{
    QString disStr;
    for(int i=0; i<depth; i++)
    {
        disStr += "-";
    }
    qDebug()<<disStr<<m_name;
}

Composite::Composite(QString name)
    :Component(name)
{
}

void Composite::Add(Component *c)
{
    childrenList.append(c);
}

void Composite::Remove(Component *c)
{
    childrenList.removeOne(c);
}

void Composite::Display(int depth)
{
    QString disStr;
    for(int i=0; i<depth; i++)
    {
        disStr += "-";
    }
    qDebug()<<disStr<<m_name;

    for(int i=0; i<childrenList.size(); i++)
    {
        childrenList.at(i)->Display(depth+2);
    }
}

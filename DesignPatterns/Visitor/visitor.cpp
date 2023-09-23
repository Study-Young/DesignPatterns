#include "visitor.h"

void Man::Accept(Action *visitor)
{
    visitor->GetManConclusion(this);
}

void Woman::Accept(Action *visitor)
{
    visitor->GetWomanConclusion(this);
}

void Success::GetManConclusion(Man *concreteElementA)
{
    qDebug()<<concreteElementA->name<<this->name<<"时，背后多半有一个伟大的女人。";
}

void Success::GetWomanConclusion(Woman *concreteElementB)
{
    qDebug()<<concreteElementB->name<<this->name<<"时，背后大多有一个不成功的男人。";
}

void Failing::GetManConclusion(Man *concreteElementA)
{
    qDebug()<<concreteElementA->name<<this->name<<"时，闷头喝酒，谁也劝不动。";
}

void Failing::GetWomanConclusion(Woman *concreteElementB)
{
    qDebug()<<concreteElementB->name<<this->name<<"时，眼泪汪汪，谁也劝不动。";
}

void Amativeness::GetManConclusion(Man *concreteElementA)
{
    qDebug()<<concreteElementA->name<<this->name<<"时，凡事不懂也要装懂。";
}

void Amativeness::GetWomanConclusion(Woman *concreteElementB)
{
    qDebug()<<concreteElementB->name<<this->name<<"时，遇事懂也要装不懂。";
}

void Marriage::GetManConclusion(Man *concreteElementA)
{
    qDebug()<<concreteElementA->name<<this->name<<"时，感慨道：恋爱游戏结束时，‘有妻徒刑’遥无期。";
}

void Marriage::GetWomanConclusion(Woman *concreteElementB)
{
    qDebug()<<concreteElementB->name<<this->name<<"时，欣慰曰：爱情长跑路漫漫，婚姻保险保平安。";
}

void ObjectStructure::Attach(Person *element)
{
    elementList.append(element);
}

void ObjectStructure::Detach(Person *element)
{
    elementList.removeOne(element);
}

void ObjectStructure::Display(Action *visitor)
{
    for(int i=0; i<elementList.size(); i++)
    {
        elementList.at(i)->Accept(visitor);
    }
}

#include "facade.h"
#include <QDebug>

void SubSystemOne::MethodOne()
{
    qDebug()<<"子系统方法一";
}

void SubSystemTwo::MethodTwo()
{
    qDebug()<<"子系统方法二";
}

void SubSystemThree::MethodThree()
{
    qDebug()<<"子系统方法三";
}

void SubSystemFour::MethodFour()
{
    qDebug()<<"子系统方法四";
}

Facade::Facade()
{
    one = new SubSystemOne();
    two = new SubSystemTwo();
    three = new SubSystemThree();
    four = new SubSystemFour();
}

void Facade::MethodA()
{
    qDebug()<<"\n方法组A() -------";
    one->MethodOne();
    two->MethodTwo();
    four->MethodFour();
}

void Facade::MethodB()
{
    qDebug()<<"\n方法组B() -------";
    two->MethodTwo();
    three->MethodThree();
}

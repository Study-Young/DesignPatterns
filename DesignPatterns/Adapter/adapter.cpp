#include "adapter.h"

#include <QDebug>

void Target::Request()
{
    qDebug()<<"普通请求!";
}

void Adaptee::SpecificRequest()
{
    qDebug()<<"特殊请求!";
}

Adapter::Adapter()
{
    m_pAdaptee = new Adaptee();
}

void Adapter::Request()
{
    m_pAdaptee->SpecificRequest();
}

#include "responsibility.h"

QString Request::getRequestType()
{
    return m_requestType;
}

void Request::setRequestType(QString requestType)
{
    m_requestType = requestType;
}

QString Request::getRequestContent()
{
    return m_requestContent;
}

void Request::setRequestContent(QString requestContent)
{
    m_requestContent = requestContent;
}

int Request::getNumber()
{
    return m_number;
}

void Request::setNumber(int number)
{
    m_number = number;
}

Manager::Manager(QString name)
{
    m_name = name;
}

void Manager::SetSuperior(Manager *superior)
{
    m_pSuperior = superior;
}

CommonManager::CommonManager(QString name)
    :Manager(name)
{

}

void CommonManager::RequestApplications(Request *request)
{
    if(request->getRequestType() == "请假" &&
       request->getNumber() <= 2)
    {
        qDebug()<<m_name<<" : "<<request->getRequestContent()<<" 数量"<<request->getNumber()<<" 被批准";
    }
    else
    {
        if(m_pSuperior != NULL)
            m_pSuperior->RequestApplications(request);
    }
}

Majordomo::Majordomo(QString name)
    :Manager(name)
{

}

void Majordomo::RequestApplications(Request *request)
{
    if(request->getRequestType() == "请假" &&
       request->getNumber() <= 5)
    {
        qDebug()<<m_name<<" : "<<request->getRequestContent()<<" 数量"<<request->getNumber()<<" 被批准";
    }
    else
    {
        if(m_pSuperior != NULL)
            m_pSuperior->RequestApplications(request);
    }
}

GeneralManager::GeneralManager(QString name)
    :Manager(name)
{

}

void GeneralManager::RequestApplications(Request *request)
{
    if(request->getRequestType() == "请假")
    {
        qDebug()<<m_name<<" : "<<request->getRequestContent()<<" 数量"<<request->getNumber()<<" 被批准";
    }
    else if(request->getRequestType() == "加薪" &&
            request->getNumber() <= 500)
    {
        qDebug()<<m_name<<" : "<<request->getRequestContent()<<" 数量"<<request->getNumber()<<" 被批准";
    }
    else if(request->getRequestType() == "加薪" &&
            request->getNumber() > 500)
    {
        qDebug()<<m_name<<" : "<<request->getRequestContent()<<" 数量"<<request->getNumber()<<" 再说吧";
    }
}

#include "flyweight.h"

User::User(QString name)
{
    m_name = name;
}

QString User::getName()
{
    return m_name;
}

ConcreteWebSite::ConcreteWebSite(QString name)
{
    m_name = name;
}

void ConcreteWebSite::Use(User *user)
{
    qDebug()<<"网站分类："<<m_name<<" 用户："<<user->getName();
}

WebSite * WebSiteFactory::GetWebSiteCategory(QString key)
{
    if(!webSiteMap.keys().contains(key))
        webSiteMap.insert(key, new ConcreteWebSite(key));
    return (WebSite *)webSiteMap[key];
}

int WebSiteFactory::GetWebSiteCount()
{
    return webSiteMap.size();
}

#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <QString>
#include <QDebug>
#include <QMap>

class User
{
public:
    User(QString name);
    QString getName();

private:
    QString m_name;
};

class WebSite
{
public:
    virtual void Use(User *user) = 0;
};

class ConcreteWebSite : public WebSite
{
public:
    ConcreteWebSite(QString name);
    void Use(User *user);

private:
    QString m_name = "";
};

class WebSiteFactory
{
public:
    WebSite *GetWebSiteCategory(QString key);
    int GetWebSiteCount();

private:
    QMap<QString, ConcreteWebSite *> webSiteMap;
};

#endif // FLYWEIGHT_H

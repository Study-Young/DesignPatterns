#ifndef RESPONSIBILITY_H
#define RESPONSIBILITY_H

#include <QDebug>

class Request
{
public:
    QString getRequestType();
    void setRequestType(QString requestType);
    QString getRequestContent();
    void setRequestContent(QString requestContent);
    int getNumber();
    void setNumber(int number);

private:
    QString m_requestType;
    QString m_requestContent;
    int m_number;
};

class Manager
{
public:
    Manager(QString name);
    void SetSuperior(Manager *superior);
    virtual void RequestApplications(Request *request) = 0;

protected:
    QString m_name;
    Manager *m_pSuperior;
};

class CommonManager : public Manager
{
public:
    CommonManager(QString name);
    void RequestApplications(Request *request);
};

class Majordomo : public Manager
{
public:
    Majordomo(QString name);
    void RequestApplications(Request *request);
};

class GeneralManager : public Manager
{
public:
    GeneralManager(QString name);
    void RequestApplications(Request *request);
};

#endif // RESPONSIBILITY_H

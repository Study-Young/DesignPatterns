#include "abstractfactory.h"

#include <QDebug>

int User::getId()
{
    return m_id;
}

void User::setId(int id)
{
    m_id = id;
}

QString User::getName()
{
    return m_name;
}

void User::serName(QString name)
{
    m_name = name;
}

void SqlserverUser::Insert(User *user)
{
    qDebug()<<"在SQL Server中给User表增加一条记录";
}

User* SqlserverUser::GetUser(int id)
{
    qDebug()<<"在SQL Server中给根据ID得到User表一条记录";
    return NULL;
}

void AccessUser::Insert(User *user)
{
    qDebug()<<"在Access中给User表增加一条记录";
}

User* AccessUser::GetUser(int id)
{
    qDebug()<<"在Access中给根据ID得到User表一条记录";
    return NULL;
}

int Department::getId()
{
    return m_id;
}

void Department::setId(int id)
{
    m_id = id;
}

QString Department::getName()
{
    return m_deptName;
}

void Department::setName(QString name)
{
    m_deptName = name;
}

void SqlserverDepartment::Insert(Department *department)
{
    qDebug()<<"在SQL Server中给Department表增加一条记录";
}

Department * SqlserverDepartment::GetDepartment(int id)
{
    qDebug()<<"在SQL Server中根据ID得到Department表一条记录";
    return NULL;
}

void AccessDepartment::Insert(Department *department)
{
    qDebug()<<"在Access中给Department表增加一条记录";
}

Department * AccessDepartment::GetDepartment(int id)
{
    qDebug()<<"在Access中根据ID得到Department表一条记录";
    return NULL;
}

IUser* SqlserverFactory::CreateUser()
{
    return new SqlserverUser();
}

IDepartment* SqlserverFactory::CreateDepartment()
{
    return new SqlserverDepartment();
}

IUser* AccessFactory::CreateUser()
{
    return new AccessUser();
}

IDepartment* AccessFactory::CreateDepartment()
{
    return new AccessDepartment();
}

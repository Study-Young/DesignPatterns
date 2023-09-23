#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include <QString>

//用户表
class User
{
public:
    int getId();
    void setId(int id);
    QString getName();
    void serName(QString name);

private:
    int m_id;
    QString m_name;
};

class IUser
{
public:
    virtual void Insert(User* user) = 0;
    virtual User* GetUser(int id) = 0;
};

class SqlserverUser : public IUser
{
public:
    void Insert(User *user);
    User* GetUser(int id);
};

class AccessUser : public IUser
{
public:
    void Insert(User *user);
    User* GetUser(int id);
};


//部门表
class Department
{
public:
    int getId();
    void setId(int id);
    QString getName();
    void setName(QString name);

private:
    int m_id;
    QString m_deptName;
};

class IDepartment
{
public:
    virtual void Insert(Department* department) = 0;
    virtual Department* GetDepartment(int id) = 0;
};

class SqlserverDepartment : public IDepartment
{
public:
    void Insert(Department* department);
    Department* GetDepartment(int id);
};

class AccessDepartment : public IDepartment
{
public:
    void Insert(Department* department);
    Department* GetDepartment(int id);
};

//工厂
class IFactory
{
public:
    virtual IUser* CreateUser() = 0;
    virtual IDepartment* CreateDepartment() = 0;
};

class SqlserverFactory : public IFactory
{
public:
    IUser* CreateUser();
    IDepartment* CreateDepartment();
};

class AccessFactory : public IFactory
{
public:
    IUser* CreateUser();
    IDepartment* CreateDepartment();
};


#endif // ABSTRACTFACTORY_H

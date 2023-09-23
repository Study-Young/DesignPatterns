#include <QCoreApplication>

#include "abstractfactory.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    User *user = new User();
    Department *dept = new Department();

//    IFactory *factory = new SqlserverFactory();
    IFactory *factory = new AccessFactory();

    IUser *iu = factory->CreateUser();

    iu->Insert(user);
    iu->GetUser(1);

    IDepartment *id = factory->CreateDepartment();
    id->Insert(dept);
    id->GetDepartment(1);

    return a.exec();
}

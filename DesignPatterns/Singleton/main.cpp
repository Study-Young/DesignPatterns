#include <QCoreApplication>
#include <QDebug>
#include "singleton.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Singleton* s1 = Singleton::GetInstance();
    Singleton* s2 = Singleton::GetInstance();

    if(s1 == s2)
    {
        qDebug()<<"两个对象是相同的实例！";
    }
    else
    {
        qDebug()<<"两个对象是不同的实例！";
    }

    return a.exec();
}

#include <QCoreApplication>
#include "responsibility.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    CommonManager *jl = new CommonManager("经理");
    Majordomo *zj = new Majordomo("总监");
    GeneralManager *zjl = new GeneralManager("总经理");
    jl->SetSuperior(zj);
    zj->SetSuperior(zjl);

    Request *request = new Request();
    request->setRequestType("请假");
    request->setRequestContent("小菜请假");
    request->setNumber(1);
    jl->RequestApplications(request);

    Request *request2 = new Request();
    request2->setRequestType("请假");
    request2->setRequestContent("小菜请假");
    request2->setNumber(4);
    jl->RequestApplications(request2);

    Request *request3 = new Request();
    request3->setRequestType("加薪");
    request3->setRequestContent("小菜请求加薪");
    request3->setNumber(500);
    jl->RequestApplications(request3);

    Request *request4 = new Request();
    request4->setRequestType("加薪");
    request4->setRequestContent("小菜请求加薪");
    request4->setNumber(1000);
    jl->RequestApplications(request4);

    return a.exec();
}

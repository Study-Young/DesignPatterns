#include <QCoreApplication>
#include <iostream>

#include "factorymethod.h"
#include "operationfactory.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

#if 0
    IFactory* factory = new UndergraduateFactory();
    LeiFeng* student = factory->createLeiFeng();

    student->buyRice();
    student->sweep();
    student->wash();
#endif

    double numberA;
    double numberB;
    char operationC;
    QString operationStr;
    cout << "Please input numberA: ";
    cin >> numberA;
    cout << "Please input operator symbol: ";
    cin >> operationC;
    operationStr = QString(operationC);
    cout << "Please input numberB: " ;
    cin >> numberB;

    OperationFactory *factory = nullptr;

    if(operationStr == "+")
    {
        factory = new OperationAddFactory();
    }
    else if(operationStr == "-")
    {
        factory = new OperationSubFactory();
    }
    else if(operationStr == "*")
    {
        factory = new OperationMulFactory();
    }
    else if(operationStr == "/")
    {
        factory = new OperationDivFactory();
    }
    else
    {
        cout << "Input symbol error!";
    }

    Operation *operation = factory->createOperation();
    operation->setNumberA(numberA);
    operation->setNumberB(numberB);
    double result = operation->getResult();
    cout << result;

    return a.exec();
}

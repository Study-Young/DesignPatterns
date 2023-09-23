#include <QCoreApplication>
#include <iostream>
#include "operation.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Operation* oper = nullptr;
    double numberA;
    double numberB;
    char operation;
    cout << "Please input numberA: ";
    cin >> numberA;
    cout << "Please input operator symbol: ";
    cin >> operation;
    cout << "Please input numberB: " ;
    cin >> numberB;
    oper = OperationFactory::creatorOperate(QString(operation));
    oper->setNumberA(numberA);
    oper->setNumberB(numberB);
    double result = oper->getResult();
    cout << result;

    return a.exec();
}

#include "operation.h"

Operation::Operation()
{

}

double Operation::getNumberA()
{
    return m_numberA;
}

double Operation::getNumberB()
{
    return m_numberB;
}

void Operation::setNumberA(double number)
{
    m_numberA = number;
}

void Operation::setNumberB(double number)
{
    m_numberB = number;
}

double OperationAdd::getResult()
{
    double result = 0;
    result = getNumberA() + getNumberB();
    return result;
}

double OperationSub::getResult()
{
    double result = 0;
    result = getNumberA() - getNumberB();
    return result;
}

double OperationMul::getResult()
{
    double result = 0;
    result = getNumberA() * getNumberB();
    return result;
}

double OperationDiv::getResult()
{
    double result = 0;
    if(getNumberB() == 0)
        return 0;
    result = getNumberA() / getNumberB();
    return result;
}

Operation* OperationFactory::creatorOperate(QString operate)
{
    Operation* oper = nullptr;
    if(operate == "+")
    {
        OperationAdd* operAdd = new OperationAdd();
        oper = operAdd;
    }
    else if(operate == "-")
    {
        OperationSub* operSub = new OperationSub();
        oper = operSub;
    }
    else if(operate == "*")
    {
        OperationMul* operMul = new OperationMul();
        oper = operMul;
    }
    else if(operate == "/")
    {
        OperationDiv* operDiv = new OperationDiv();
        oper = operDiv;
    }
    else
    {
        oper = new OperationAdd();
    }
    return oper;
}

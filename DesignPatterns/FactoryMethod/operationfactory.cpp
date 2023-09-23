#include "operationfactory.h"

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

Operation* OperationAddFactory::createOperation()
{
    return new OperationAdd();
}

Operation* OperationSubFactory::createOperation()
{
    return new OperationSub();
}

Operation* OperationMulFactory::createOperation()
{
    return new OperationMul();
}

Operation* OperationDivFactory::createOperation()
{
    return new OperationDiv();
}

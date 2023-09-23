#ifndef OPERATION_H
#define OPERATION_H
#include <QString>

class Operation
{
public:
    Operation();
    double getNumberA();
    double getNumberB();
    void setNumberA(double number);
    void setNumberB(double number);

    virtual double getResult() = 0;

private:
    double m_numberA;
    double m_numberB;
};

class OperationAdd : public Operation
{
public:
    double getResult();
};

class OperationSub : public Operation
{
public:
    double getResult();
};

class OperationMul : public Operation
{
public:
    double getResult();
};

class OperationDiv : public Operation
{
public:
    double getResult();
};

class OperationFactory
{
public:
    static Operation* creatorOperate(QString operate);
};

#endif // OPERATION_H

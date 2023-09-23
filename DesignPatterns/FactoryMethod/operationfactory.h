#ifndef OPERATIONFACTORY_H
#define OPERATIONFACTORY_H

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
    virtual Operation* createOperation() = 0;
};

class OperationAddFactory : public OperationFactory
{
public:
    Operation* createOperation();
};

class OperationSubFactory : public OperationFactory
{
public:
    Operation* createOperation();
};

class OperationMulFactory : public OperationFactory
{
public:
    Operation* createOperation();
};

class OperationDivFactory : public OperationFactory
{
public:
    Operation* createOperation();
};

#endif // OPERATIONFACTORY_H

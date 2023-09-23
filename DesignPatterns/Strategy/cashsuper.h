#ifndef CASHSUPER_H
#define CASHSUPER_H
#include <QString>

class CashSuper
{
public:
    CashSuper();
    virtual double acceptCash(double money) = 0;
};

class CashNormal : public CashSuper
{
public:
    CashNormal();
    double acceptCash(double money);
};

class CashRebate : public CashSuper
{
public:
    CashRebate(double moneyRebate);
    double acceptCash(double money);

private:
    double m_moneyRebate = 0.0;
};

class CashReturn : public CashSuper
{
public:
    CashReturn(double moneyCondition, double moneyReturn);
    double acceptCash(double money);

private:
    double m_moneyCondition = 0.0;
    double m_moneyReturn = 0.0;
};

#endif // CASHSUPER_H

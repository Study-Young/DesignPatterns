#include <QtMath>
#include "cashsuper.h"

CashSuper::CashSuper()
{

}

CashNormal::CashNormal()
{

}

double CashNormal::acceptCash(double money)
{
    return money;
}

CashRebate::CashRebate(double moneyRebate)
{
    m_moneyRebate = moneyRebate;
}

double CashRebate::acceptCash(double money)
{
    return money * m_moneyRebate / 10.0;
}

CashReturn::CashReturn(double moneyCondition, double moneyReturn)
{
    m_moneyCondition = moneyCondition;
    m_moneyReturn = moneyReturn;
}

double CashReturn::acceptCash(double money)
{
    double result = money;
    if(money >= m_moneyCondition)
        result = money - qFloor(money / m_moneyCondition) * m_moneyReturn;
    return result;
}

#include "cashcontext.h"

CashContext::CashContext(int type)
{
    switch (type)
    {
        case 0:
        {
            m_cs = new CashNormal();
            break;
        }
        case 1:
        {
            m_cs = new CashRebate(8);
            break;
        }
        case 2:
        {
            m_cs = new CashReturn(300, 100);
            break;
        }
        default:
        {
            m_cs = new CashNormal();
            break;
        }
    }
}

double CashContext::getResult(double money)
{
    return m_cs->acceptCash(money);
}

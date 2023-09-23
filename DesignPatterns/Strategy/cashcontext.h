#ifndef CASHCONTEXT_H
#define CASHCONTEXT_H

#include "cashsuper.h"
class CashContext
{
public:
    CashContext(int type);
    double getResult(double money);

private:
    CashSuper* m_cs = nullptr;
};

#endif // CASHCONTEXT_H

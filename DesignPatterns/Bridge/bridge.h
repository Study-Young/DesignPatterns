#ifndef BRIDGE_H
#define BRIDGE_H

#include <QDebug>

class HandsetSoft
{
public:
    virtual void Run() = 0;
};

class HandsetGame : public HandsetSoft
{
public:
    void Run();
};

class HandsetAddressList : public HandsetSoft
{
public:
    void Run();
};

class HandsetMP3 : public HandsetSoft
{
public:
    void Run();
};

class HandsetBrand
{
public:
    void SetHandsetSoft(HandsetSoft *soft);
    virtual void Run() = 0;

protected:
    HandsetSoft * m_pHandsetSoft;
};

class HandsetBrandM : public HandsetBrand
{
    void Run();
};

class HandsetBrandN : public HandsetBrand
{
    void Run();
};

class HandsetBrandP : public HandsetBrand
{
    void Run();
};
#endif // BRIDGE_H

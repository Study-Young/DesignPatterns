#include "singleton.h"

Singleton::Singleton()
{

}

Singleton::~Singleton()
{

}

Singleton * Singleton::pSingleton = nullptr;
Singleton * Singleton::GetInstance()
{
    if(pSingleton == nullptr)
    {
        pSingleton = new Singleton();
    }
    return pSingleton;
}

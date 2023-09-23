#ifndef SINGLETON_H
#define SINGLETON_H


class Singleton
{
public:
    static Singleton * GetInstance();

private:
    Singleton();
    ~Singleton();

    static Singleton* pSingleton;
};

#endif // SINGLETON_H

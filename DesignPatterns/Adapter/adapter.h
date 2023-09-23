#ifndef ADAPTER_H
#define ADAPTER_H

class Target
{
public:
    virtual void Request();
};

class Adaptee
{
public:
    void SpecificRequest();
};

class Adapter: public Target
{
public:
    Adapter();
    void Request();

private:
    Adaptee *m_pAdaptee;
};

#endif // ADAPTER_H

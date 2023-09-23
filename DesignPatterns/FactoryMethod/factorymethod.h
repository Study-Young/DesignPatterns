#ifndef FACTORYMETHOD_H
#define FACTORYMETHOD_H


class LeiFeng
{
public:
    void sweep();
    void wash();
    void buyRice();
};

class Undergraduate : public LeiFeng
{

};

class Volunteer : public LeiFeng
{

};

class IFactory
{
public:
    virtual LeiFeng* createLeiFeng() = 0;
};

class UndergraduateFactory : public IFactory
{
public:
    LeiFeng* createLeiFeng();
};

class VolunteerFactory : public IFactory
{
public:
    LeiFeng* createLeiFeng();
};

#endif // FACTORYMETHOD_H

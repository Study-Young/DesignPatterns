﻿#ifndef FACADE_H
#define FACADE_H


class SubSystemOne
{
public:
    void MethodOne();
};

class SubSystemTwo
{
public:
    void MethodTwo();
};

class SubSystemThree
{
public:
    void MethodThree();
};


class SubSystemFour
{
public:
    void MethodFour();
};

class Facade
{
    SubSystemOne *one;
    SubSystemTwo *two;
    SubSystemThree *three;
    SubSystemFour *four;

public:
    Facade();

    void MethodA();
    void MethodB();
};


#endif // FACADE_H

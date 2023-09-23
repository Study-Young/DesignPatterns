#ifndef BUILDER_H
#define BUILDER_H

#include <QList>

class Product
{
public:
    void Add(QString part);
    void Show();

private:
    QList<QString> parts;
};

class Builder
{
public:
    virtual void BuildPartA() = 0;
    virtual void BuildPartB() = 0;
    virtual Product *GetResult() = 0;
};

class ConcreteBuilder1 : public Builder
{
public:
    ConcreteBuilder1();
    void BuildPartA();
    void BuildPartB();
    Product* GetResult();

private:
    Product *product;
};

class ConcreteBuilder2 : public Builder
{
public:
    ConcreteBuilder2();
    void BuildPartA();
    void BuildPartB();
    Product* GetResult();

private:
    Product *product;
};

class Director
{
public:
    void Construct(Builder* builder);
};

#endif // BUILDER_H

#include "builder.h"

#include <QDebug>

void Product::Add(QString part)
{
    parts.append(part);
}

void Product::Show()
{
    qDebug()<<"\n产品 创建 ------";
    for(int i=0; i<parts.size(); i++)
    {
        qDebug()<<parts.at(i);
    }
}

ConcreteBuilder1::ConcreteBuilder1()
{
    product = new Product();
}

void ConcreteBuilder1::BuildPartA()
{
    product->Add("部件A");
}

void ConcreteBuilder1::BuildPartB()
{
    product->Add("部件B");
}

Product* ConcreteBuilder1::GetResult()
{
    return product;
}

ConcreteBuilder2::ConcreteBuilder2()
{
    product = new Product();
}

void ConcreteBuilder2::BuildPartA()
{
    product->Add("部件X");
}

void ConcreteBuilder2::BuildPartB()
{
    product->Add("部件Y");
}

Product* ConcreteBuilder2::GetResult()
{
    return product;
}

void Director::Construct(Builder *builder)
{
    builder->BuildPartA();
    builder->BuildPartB();
}

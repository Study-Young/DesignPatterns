#ifndef COMPONENT_H
#define COMPONENT_H
#include <QString>
#include <QDebug>

class Component
{
public:
    Component(QString name);

    virtual void Add(Component *c) = 0;
    virtual void Remove(Component *c) = 0;
    virtual void Display(int depth) = 0;

protected:
    QString m_name;
};

class Leaf : public Component
{
public:
    Leaf(QString name);

    void Add(Component *c);
    void Remove(Component *c);
    void Display(int depth);
};

class Composite : public Component
{
public:
    Composite(QString name);

    void Add(Component *c);
    void Remove(Component *c);
    void Display(int depth);

private:
    QList<Component *> childrenList;
};

#endif // COMPONENT_H

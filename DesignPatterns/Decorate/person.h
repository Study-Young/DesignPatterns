#ifndef PERSON_H
#define PERSON_H
#include <QString>
#include <QDebug>

class Person
{
public:
    Person();
    Person(QString name);

    virtual void show();

private:
    QString m_name;
};

class Finery : public Person
{
public:
    void decorate(Person* component);
    void show();

protected:
    Person* m_component = nullptr;
};

class TShirts : public Finery
{
public:
    void show();
};

class BigTrouser : public Finery
{
public:
    void show();
};

class GymShoes : public Finery
{
public:
    void show();
};

class BusinessSuit : public Finery
{
public:
    void show();
};

class Tie : public Finery
{
public:
    void show();
};

class LeatherShoes : public Finery
{
public:
    void show();
};


#endif // PERSON_H

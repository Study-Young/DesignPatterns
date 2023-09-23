#ifndef PROXY_H
#define PROXY_H
#include <QString>

class IGiveGitf
{
    virtual void giveDolls() = 0;
    virtual void giveFlowers() = 0;
    virtual void giveChocolate() = 0;
};

class SchoolGirl
{
public:
    QString getName();
    void setName(QString name);

private:
    QString m_name;
};

class Pursuit : public IGiveGitf
{
public:
    Pursuit(SchoolGirl* mm);

    void giveDolls();
    void giveFlowers();
    void giveChocolate();

private:
    SchoolGirl* m_mm;
};

class Proxy : public IGiveGitf
{
public:
    Proxy(SchoolGirl* mm);

    void giveDolls();
    void giveFlowers();
    void giveChocolate();

private:
    Pursuit* m_gg;
};

#endif // PROXY_H

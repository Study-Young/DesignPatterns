#ifndef TEMPLATEMETHOD_H
#define TEMPLATEMETHOD_H
#include <QString>
#include <QDebug>

class TestPaper
{
public:
    void testQuestion1();
    void testQuestion2();
    void testQuestion3();

protected:
    virtual QString answer1();
    virtual QString answer2();
    virtual QString answer3();
};

class TestPaperA : public TestPaper
{
protected:
    QString answer1();
    QString answer2();
    QString answer3();
};

class TestPaperB : public TestPaper
{
protected:
    QString answer1();
    QString answer2();
    QString answer3();
};

#endif // TEMPLATEMETHOD_H

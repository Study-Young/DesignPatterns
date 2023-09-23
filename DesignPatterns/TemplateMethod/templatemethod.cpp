#include "templatemethod.h"

void TestPaper::testQuestion1()
{
    qDebug()<<"Question 1: a.  b.  c.  d.  ";
    qDebug()<<"Answer: "<<answer1();
}

void TestPaper::testQuestion2()
{
    qDebug()<<"Question 2: a.  b.  c.  d.  ";
    qDebug()<<"Answer: "<<answer2();
}

void TestPaper::testQuestion3()
{
    qDebug()<<"Question 3: a.  b.  c.  d.  ";
    qDebug()<<"Answer: "<<answer3();
}

QString TestPaper::answer1()
{
    return "";
}

QString TestPaper::answer2()
{
    return "";
}

QString TestPaper::answer3()
{
    return "";
}

QString TestPaperA::answer1()
{
    return "b";
}

QString TestPaperA::answer2()
{
    return "c";
}

QString TestPaperA::answer3()
{
    return "a";
}

QString TestPaperB::answer1()
{
    return "c";
}

QString TestPaperB::answer2()
{
    return "a";
}

QString TestPaperB::answer3()
{
    return "a";
}

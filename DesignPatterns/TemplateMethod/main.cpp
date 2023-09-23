#include <QCoreApplication>

#include "templatemethod.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug()<<"Student 1:";
    TestPaper* student1 = new TestPaperA();
    student1->testQuestion1();
    student1->testQuestion2();
    student1->testQuestion3();

    qDebug()<<"Student 2:";
    TestPaper* student2 = new TestPaperB();
    student2->testQuestion1();
    student2->testQuestion2();
    student2->testQuestion3();

    return a.exec();
}

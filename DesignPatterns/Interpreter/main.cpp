#include <QCoreApplication>
#include "interpreter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    PlayContext *context = new PlayContext();
    qDebug()<<"上海滩：";
    context->setText("T 500 O 2 E 0.5 G 0.5 A 3 E 0.5 G 0.5 D 3 E 0.5 G 0.5 A 0.5 O 3 C 1 O 2 A 0.5 G 1 C 0.5 E 0.5 D 3 ");

    Expression *expression = NULL;

    while(context->getText().length() > 0)
    {
        QString str = context->getText().mid(0, 1);
        if(str == "O")
            expression = new Scale();
        else if(str == "T")
            expression = new Speed();
        else
            expression = new Note();
        expression->Interpret(context);
    }

    return a.exec();
}

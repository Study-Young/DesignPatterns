#include <QCoreApplication>

#include "state.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Work *emProjects = new Work();
    emProjects->setHour(9);
    emProjects->WriteProgram();
    emProjects->setHour(10);
    emProjects->WriteProgram();
    emProjects->setHour(12);
    emProjects->WriteProgram();
    emProjects->setHour(13);
    emProjects->WriteProgram();
    emProjects->setHour(14);
    emProjects->WriteProgram();
    emProjects->setHour(17);
    emProjects->setFinish(false);
    emProjects->WriteProgram();
    emProjects->setHour(19);
    emProjects->WriteProgram();
    emProjects->setHour(22);
    emProjects->WriteProgram();

    return a.exec();
}

#include <QCoreApplication>

#include "prototype.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Resume* aa = new Resume("DaNiao");
    aa->setPersonalInfo("Nan", "29");
    aa->setWorkExperience("1998-2000", "xxCompany");

    Resume* bb = aa->clone();
    bb->setWorkExperience("1998-2006", "yyCompany");

    Resume* cc = aa->clone();
    cc->setPersonalInfo("Nv", "24");
    cc->setWorkExperience("1998-2003", "zzCompany");

    aa->display();
    bb->display();
    cc->display();

    return a.exec();
}

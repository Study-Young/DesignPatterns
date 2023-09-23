#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <QString>
#include <QObject>

class WorkExperience
{
public:
    QString getWorkDate();
    QString getCompany();
    void setWorkDate(QString workDate);
    void setCompany(QString company);

    WorkExperience* clone();

private:
    QString m_workDate;
    QString m_company;
};

class Resume
{
public:
    Resume(QString name);
    void setPersonalInfo(QString sex, QString age);
    void setWorkExperience(QString timeArea, QString company);
    void display();

    Resume* clone();

private:
    Resume(WorkExperience* work);

private:
    QString m_name;
    QString m_sex;
    QString m_age;

    WorkExperience* m_work;
};

#endif // PROTOTYPE_H

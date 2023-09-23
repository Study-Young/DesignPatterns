#include "prototype.h"
#include <QDebug>

QString WorkExperience::getWorkDate()
{
    return m_workDate;
}

QString WorkExperience::getCompany()
{
    return m_company;
}

void WorkExperience::setWorkDate(QString workDate)
{
    m_workDate = workDate;
}

void WorkExperience::setCompany(QString company)
{
    m_company = company;
}

WorkExperience* WorkExperience::clone()
{
    return new WorkExperience();
}

Resume::Resume(QString name)
{
    m_name = name;
    m_work = new WorkExperience();
}

Resume::Resume(WorkExperience *work)
{
    m_work = work->clone();
}

void Resume::setPersonalInfo(QString sex, QString age)
{
    m_sex = sex;
    m_age = age;
}

void Resume::setWorkExperience(QString timeArea, QString company)
{
    m_work->setWorkDate(timeArea);
    m_work->setCompany(company);
}

void Resume::display()
{
    qDebug() << m_name << " " << m_sex << " " << m_age;
    qDebug() << "WorkExperience: " << m_work->getWorkDate()
             << " " << m_work->getCompany();
}

Resume* Resume::clone()
{
    Resume* obj = new Resume(m_work);
    obj->m_name = m_name;
    obj->m_sex = m_sex;
    obj->m_age = m_age;
    return obj;
}

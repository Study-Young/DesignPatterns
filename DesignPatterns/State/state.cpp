#include "state.h"
#include "QDebug"

Work::Work()
{
    m_pCurrent = new ForenoonState();
}

double Work::getHour()
{
    return m_hour;
}

void Work::setHour(double hour)
{
    m_hour = hour;
}

bool Work::getFinish()
{
    return m_finish;
}

void Work::setFinish(bool finish)
{
    m_finish = finish;
}

void Work::setState(State *s)
{
    m_pCurrent = s;
}

void Work::WriteProgram()
{
    m_pCurrent->WriteProgram(this);
}

void ForenoonState::WriteProgram(Work *work)
{
    if(work->getHour() < 12)
    {
        qDebug()<<QString("当前时间：%1点，上午工作，精神百倍。").arg(work->getHour());
    }
    else
    {
        work->setState(new NoonState());
        work->WriteProgram();
    }
}

void NoonState::WriteProgram(Work *work)
{
    if(work->getHour() < 13)
    {
        qDebug()<<QString("当前时间：%1点，饿了，午饭；犯困，午休。").arg(work->getHour());
    }
    else
    {
        work->setState(new AfternoonState());
        work->WriteProgram();
    }
}

void AfternoonState::WriteProgram(Work *work)
{
    if(work->getHour() < 17)
    {
        qDebug()<<QString("当前时间：%1点，下午状态还不错，继续努力。").arg(work->getHour());
    }
    else
    {
        work->setState(new EveningState());
        work->WriteProgram();
    }
}

void EveningState::WriteProgram(Work *work)
{
    if(work->getFinish())
    {
        work->setState(new RestState());
        work->WriteProgram();
    }
    else
    {
        if(work->getHour() < 21)
        {
            qDebug()<<QString("当前时间：%1点，加班哦，疲累至极。").arg(work->getHour());
        }
        else
        {
            work->setState(new SleepingState());
            work->WriteProgram();
        }
    }
}

void SleepingState::WriteProgram(Work *work)
{
    qDebug()<<QString("当前时间：%1点，不行了，睡着了。").arg(work->getHour());
}

void RestState::WriteProgram(Work *work)
{
    qDebug()<<QString("当前时间：%1点，下班回家了。").arg(work->getHour());
}

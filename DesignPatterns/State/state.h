#ifndef STATE_H
#define STATE_H

class State;
class ForenoonState;
class NoonState;
class AfternoonState;
class EveningState;
class SleepingState;
class RestState;

class Work
{
public:
    Work();
    double getHour();
    void setHour(double hour);
    bool getFinish();
    void setFinish(bool finish);
    void setState(State *s);
    void WriteProgram();

private:
    State *m_pCurrent;
    double m_hour;
    bool m_finish = false;
};

class State
{
public:
    virtual void WriteProgram(Work *work) = 0;
};

class ForenoonState : public State
{
public:
    void WriteProgram(Work *work);
};

class NoonState : public State
{
public:
    void WriteProgram(Work *work);
};

class AfternoonState : public State
{
public:
    void WriteProgram(Work *work);
};

class EveningState : public State
{
public:
    void WriteProgram(Work *work);
};

class SleepingState : public State
{
public:
    void WriteProgram(Work *work);
};

class RestState : public State
{
public:
    void WriteProgram(Work *work);
};

#endif // STATE_H

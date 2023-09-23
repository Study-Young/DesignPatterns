#ifndef COMMAND_H
#define COMMAND_H

#include <QDebug>

class Receiver;

class Command
{
public:
    Command(Receiver *receiver);
    virtual void Execute() = 0;

protected:
    Receiver * m_pReceiver;
};

class ConcreteCommand : public Command
{
public:
    ConcreteCommand(Receiver *receiver);
    void Execute();
};

class Invoker
{
public:
    void SetCommand(Command *command);
    void ExecuteCommand();

private:
    Command *m_pCommand;
};

class Receiver
{
public:
    void Action();
};

#endif // COMMAND_H

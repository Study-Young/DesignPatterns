#include "command.h"

Command::Command(Receiver *receiver)
{
    m_pReceiver = receiver;
}

ConcreteCommand::ConcreteCommand(Receiver *receiver)
    :Command(receiver)
{

}

void ConcreteCommand::Execute()
{
    m_pReceiver->Action();
}

void Invoker::SetCommand(Command *command)
{
    m_pCommand = command;
}

void Invoker::ExecuteCommand()
{
    m_pCommand->Execute();
}

void Receiver::Action()
{
    qDebug()<<"执行请求!";
}

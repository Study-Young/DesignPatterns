#include "memento.h"
#include <QDebug>

RoleStateMemento::RoleStateMemento(int vit, int atk, int def)
{
    m_vit = vit;
    m_atk = atk;
    m_def = def;
}

int RoleStateMemento::getVit()
{
    return m_vit;
}

void RoleStateMemento::setVit(int vit)
{
    m_vit = vit;
}

int RoleStateMemento::getAtk()
{
    return m_atk;
}

void RoleStateMemento::setAtk(int atk)
{
    m_atk = atk;
}

int RoleStateMemento::getDef()
{
    return m_def;
}

void RoleStateMemento::setDef(int def)
{
    m_def = def;
}

RoleStateMemento * RoleStateCaretaker::getRoleStateMemento()
{
    return m_pMemento;
}

void RoleStateCaretaker::setRoleStateMemento(RoleStateMemento *memento)
{
    m_pMemento = memento;
}

int GameRole::getVit()
{
    return m_vit;
}

void GameRole::setVit(int vit)
{
    m_vit = vit;
}

int GameRole::getAtk()
{
    return m_atk;
}

void GameRole::setAtk(int atk)
{
    m_atk = atk;
}

int GameRole::getDef()
{
    return m_def;
}

void GameRole::setDef(int def)
{
    m_def = def;
}

RoleStateMemento * GameRole::SaveState()
{
    return new RoleStateMemento(getVit(), getAtk(), getDef());
}

void GameRole::RecoveryState(RoleStateMemento *memento)
{
    setVit(memento->getVit());
    setAtk(memento->getAtk());
    setDef(memento->getDef());
}

void GameRole::StateDisplay()
{
    qDebug()<<"角色当前状态：";
    qDebug()<<"体力："<<m_vit;
    qDebug()<<"攻击力："<<m_atk;
    qDebug()<<"防御力："<<m_def;
    qDebug()<<"\n";
}

void GameRole::GetInitState()
{
    m_vit = 100;
    m_atk = 100;
    m_def = 100;
}

void GameRole::Fight()
{
    m_vit = 0;
    m_atk = 0;
    m_def = 0;
}

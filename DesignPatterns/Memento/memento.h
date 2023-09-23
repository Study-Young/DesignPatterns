#ifndef MEMENTO_H
#define MEMENTO_H

class RoleStateMemento
{
public:
    RoleStateMemento(int vit, int atk, int def);

    int getVit();
    void setVit(int vit);
    int getAtk();
    void setAtk(int atk);
    int getDef();
    void setDef(int def);

private:
    int m_vit;
    int m_atk;
    int m_def;
};

class RoleStateCaretaker
{
public:
    RoleStateMemento * getRoleStateMemento();
    void setRoleStateMemento(RoleStateMemento *memento);

private:
    RoleStateMemento *m_pMemento;
};

class GameRole
{
public:
    int getVit();
    void setVit(int vit);
    int getAtk();
    void setAtk(int atk);
    int getDef();
    void setDef(int def);

    RoleStateMemento * SaveState();
    void RecoveryState(RoleStateMemento *memento);

    void StateDisplay();
    void GetInitState();
    void Fight();

private:
    int m_vit;
    int m_atk;
    int m_def;
};

#endif // MEMENTO_H

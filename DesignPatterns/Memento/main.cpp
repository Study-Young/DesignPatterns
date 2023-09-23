#include <QCoreApplication>

#include "memento.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    GameRole * gameRole = new GameRole();
    gameRole->GetInitState();
    gameRole->StateDisplay();

    RoleStateCaretaker *stateAdmin = new RoleStateCaretaker();
    stateAdmin->setRoleStateMemento(gameRole->SaveState());

    gameRole->Fight();
    gameRole->StateDisplay();

    gameRole->RecoveryState(stateAdmin->getRoleStateMemento());
    gameRole->StateDisplay();

    return a.exec();
}

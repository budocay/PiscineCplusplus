/*
** main for piscine_tests
**
** Made by pirou_g in /home/pirou_g/piscine_tek2/piscine_tests
** Login   <pirou_g@epitech.net>
**
** Started on     15/01/16 16:43
** Last update on 15/01/16 16:43
*/

#include "AssaultTerminator.hh"
#include "Squad.hh"
#include "TacticalMarine.hh"

int main() {
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jim = new AssaultTerminator;
    ISpaceMarine *toto = jim->clone();
    ISpaceMarine *titi = bob->clone();
    ISpaceMarine *plop = bob->clone();

    ISquad *vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    vlc->push(toto);
    vlc->push(titi);
    vlc->push(plop);
    for (int i = 0; i < vlc->getCount(); ++i) {
        ISpaceMarine *cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    plop = new TacticalMarine;
    toto = new AssaultTerminator;
    plop->battleCry();
    plop->rangedAttack();
    plop->meleeAttack();
    *plop = *toto;
    plop->battleCry();
    plop->rangedAttack();
    plop->meleeAttack();
    delete plop;

    plop = new TacticalMarine;
    *toto = *plop;
    toto->battleCry();
    toto->rangedAttack();
    toto->meleeAttack();

    delete plop;
    delete toto;

    return 0;
}
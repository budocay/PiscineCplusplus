/*
** Warrior.hh /home/lina_a/Projects/piscine_cpp_d09
** 
** Created by lina_a on 14/01/16.
**
*/

#ifndef PISCINE_CPP_D09_WARRIOR_HH
#define PISCINE_CPP_D09_WARRIOR_HH

#include <iostream>
#include "Character.hh"

class Warrior : public Character{
public:
    Warrior(const std::string name, int);
    std::string getWeapon() const;
    virtual ~Warrior();
    virtual int CloseAttack();
    virtual int RangeAttack();

private:
    std::string _newWeapon;
};

#endif //PISCINE_CPP_D09_WARRIOR_HH

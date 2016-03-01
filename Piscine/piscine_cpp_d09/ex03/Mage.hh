/*
** Mage.hh /home/lina_a/Projects/piscine_cpp_d09
** 
** Created by lina_a on 14/01/16.
**
*/

#ifndef PISCINE_CPP_D09_MAGE_HH
#define PISCINE_CPP_D09_MAGE_HH

#include <iostream>
#include "Character.hh"

class Mage : public Character {
public:
    Mage(const std::string& name, int lvl);
    virtual ~Mage();
    virtual int CloseAttack();
    virtual int RangeAttack();
    virtual void RestorePower();
};

#endif //PISCINE_CPP_D09_MAGE_HH

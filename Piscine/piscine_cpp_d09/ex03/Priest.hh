/*
** Priest.hh /home/lina_a/Projects/piscine_cpp_d09
** 
** Created by lina_a on 14/01/16.
**
*/

#ifndef PISCINE_CPP_D09_PRIEST_HH
#define PISCINE_CPP_D09_PRIEST_HH

#include <iostream>
#include "Mage.hh"

class Priest : public Mage{
public:
    Priest(const std::string& name, int);
    virtual ~Priest();
    virtual int CloseAttack();
    virtual int RangeAttack();
    virtual void Heal();
};

#endif //PISCINE_CPP_D09_PRIEST_HH

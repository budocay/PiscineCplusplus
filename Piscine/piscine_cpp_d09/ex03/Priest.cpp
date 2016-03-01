/*
** Priest.cpp /home/lina_a/Projects/piscine_cpp_d09
** 
** Created by lina_a on 14/01/16.
**
*/

#include <iostream>
#include "Priest.hh"

Priest::Priest(const std::string &name, int lvl) : Mage(name, lvl)
{
    Strength = 4;
    Stamania = 4;
    Intelligence = 42;
    Spirit = 21;
    Agility = 2;
    std::cout << name << " enters in the order" << std::endl;
}

Priest::~Priest() {

}

int Priest::CloseAttack() {
    if (Power < 10)
    {
        std::cout << Name << " out of power" << std::endl;
        return 0;
    }
    Power -= 10;
    std::cout  << Name << " uses a spirit explosion" << std::endl;
    return 10 + Spirit;
}

int Priest::RangeAttack() {
    if (Power < 25)
    {
        std::cout << Name << " out of power" << std::endl;
        return 0;
    }
    Power -= 25;
    std::cout  << Name << " launches a fire ball" << std::endl;
    return 20 + Spirit;
}

void Priest::Heal() {
    if (Power < 10)
    {
        std::cout << Name << " out of power" << std::endl;
        return;
    }
    Power -= 10;
    Life += 70;
    if (Life > 100)
        Life = 100;
    std::cout << Name << " cast a little heal spell" << std::endl;
}
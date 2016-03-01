/*
** Mage.cpp /home/lina_a/Projects/piscine_cpp_d09
** 
** Created by lina_a on 14/01/16.
**
*/

#include <iostream>
#include "Mage.hh"

Mage::Mage(const std::string &name, int lvl) : Character(name, lvl)
{
    Strength = 6;
    Stamania = 6;
    Intelligence = 12;
    Spirit = 11;
    Agility = 7;
    std::cout << name << " teleported" << std::endl;
}


int Mage::CloseAttack() {
    if (Power < 10)
    {
        std::cout << Name << " out of power" << std::endl;
        return 0;
    }
    Power -= 10;
    Range = RANGE;
    std::cout  << Name << " blinks" << std::endl;
    return 20 + Strength;
}

int Mage::RangeAttack() {
    if (Power < 25)
    {
        std::cout << Name << " out of power" << std::endl;
        return 0;
    }
    Power = Power - 25;
    std::cout << Name << " launches a fire ball" << std::endl;
    return 20 + Spirit;
}


void Mage::RestorePower() {
    Power = Power + 50 + Intelligence;
    std::cout << Name << " takes a mana potion" << std::endl;
}

Mage::~Mage() {

}
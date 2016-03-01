/*
** Warrior.cpp /home/lina_a/Projects/piscine_cpp_d09
**
** Created by lina_a on 14/01/16.
**
*/

#include <iostream>
#include "Warrior.hh"

Warrior::Warrior(const std::string name, int lvl) : Character(name, lvl)
{
    Strength = 12;
    Stamania = 12;
    Intelligence = 6;
    Spirit = 5;
    Agility = 7;
    _newWeapon = "hammer";
    std::cout << "I'm " << name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{

}

std::string Warrior::getWeapon() const {
    return _newWeapon;
}

int Warrior::RangeAttack() {
    if (Power < 10)
    {
        std::cout << Name << " out of power" << std::endl;
        return 0;
    }
    Power = Power - 10;
    Range = CLOSE;
    std::cout << Name << " intercepts" << std::endl;
    return 0;
}

int Warrior::CloseAttack() {
    if (Power < 30)
    {
        std::cout << Name << " out of power" << std::endl;
        return 0;
    }
    Power -= 30;
    std::cout  << Name << " strikes with his " << _newWeapon << std::endl;
    return 20 + Strength;
}

void Warrior::Heal() {
    Life = Life + 50;
    std::cout << Name << " takes a potion" << std::endl;
}

void Warrior::RestorePower() {
    Power = 100;
    std::cout << Name << " eats" << std::endl;
}
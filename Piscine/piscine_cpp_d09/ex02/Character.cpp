/*
** Character.cpp /home/lina_a/Projects/piscine_cpp_d09
**
** Created by lina_a on 14/01/16.
**
*/

#include <iostream>
#include "Character.hh"

Character::Character(const std::string &name, int lvl) : Name(name),
                                                         Lvl(lvl),
                                                         Power(100),
                                                         Life(100),
                                                         Strength(5),
                                                         Stamania(5),
                                                         Intelligence(5),
                                                         Spirit(5),
                                                         Agility(5),
                                                         Range(CLOSE)
{
  std::cout << name << " Created" << std::endl;
}

Character::~Character() {

}

Character::Character(Character const &cr) : Name(cr.getName()),
                                            Lvl(cr.getLvl()),
                                            Power(cr.getPower()),
                                            Life(cr.getPv()),
                                            Strength(cr.getStrength()),
                                            Stamania(cr.getStamania()),
                                            Intelligence(cr.getIntelligence()),
                                            Spirit(cr.getSpirit()),
                                            Agility(cr.getAgility()),
                                            Range(CLOSE)
{
}


Character& Character::operator=(Character const &obj)
{
    if (&obj != this)
    {
        this->Lvl = obj.getLvl();
        this->Power = obj.getPower();
        this->Life = obj.getPv();
        this->Strength = obj.getStrength();
        this->Stamania = obj.getStamania();
        this->Intelligence = obj.getIntelligence();
        this->Spirit = obj.getSpirit();
        this->Agility = obj.getAgility();
        this->Range = obj.CLOSE;
    }
    return *this;
}

const std::string & Character::getName() const {
    return Name;
}

int Character::getLvl() const {
    return Lvl;
}


int Character::getAgility() const {
    return Agility;
}

int Character::getIntelligence() const {
    return Intelligence;
}

int Character::getPower() const {
    return Power;
}

int Character::getPv() const {
    return Life;
}

int Character::getSpirit() const {
    return Spirit;
}

int Character::getStrength() const {
    return Strength;
}

int Character::CloseAttack() {
    if (Power < 10)
    {
        std::cout << Name << " out of power" << std::endl;
        return 0;
    }
    Power -= 10;
    std::cout << Name << " strikes with a wood stick" << std::endl;
    return 10 + Strength;
}

int Character::RangeAttack() {
    if (Power < 10)
    {
        std::cout << Name << " out of power" << std::endl;
        return 0;
    }
    Power = Power - 10;
    std::cout << Name << " launches a stone" << std::endl;
    return 5 + Strength;
}

void Character::Heal() {
    Life = Life + 50;
    if (Life > 100)
      Life = 100;
    std::cout << Name << " takes a potion" << std::endl;
}

void Character::RestorePower() {
    Power = 100;
    std::cout << Name << " eats" << std::endl;
}

void Character::TakeDamage(int _damage) {
    Life = Life - _damage;
    if (Life > 0)
        std::cout << Name << " takes " << _damage << " damage"<< std::endl;
    else {
        std::cout << Name << " out of combat" << std::endl;
    }
}

int Character::getStamania() const {
    return Stamania;
}

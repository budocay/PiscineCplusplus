//
// Character.cpp for character in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 16:44:07 2016 lina_a
// Last update Fri Jan 15 16:44:07 2016 lina_a
//

#include <iostream>
#include "AWeapon.hh"
#include "AEnemy.hh"
#include "Character.hh"

Character::Character(std::string const &name) : _name(name),
						_weapon(),
						_nbAP(40)
{

}

Character::~Character(){

}

void	Character::recoverAp()
{
    _nbAP += 10;
    if (_nbAP > 40)
        _nbAP = 40;
}

void Character::equip(AWeapon *weapon) {
    _weapon = weapon;
}

void Character::attack(AEnemy *en) {
    if (_nbAP <= 0 || *_weapon == 0)
        return;
}


const AWeapon* Character::getAWeapon() const {
    return _weapon;
}

const std::string & Character::getName() const {
    return _name;
}

int Character::getAP() const {
    return _nbAP;
}
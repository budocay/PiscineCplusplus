//
// Paladin.cpp for paladin in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d09/ex03
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 08:35:36 2016 lina_a
// Last update Fri Jan 15 08:35:36 2016 lina_a
//

#include <iostream>
#include "Paladin.hh"
#include "Warrior.hh"
#include "Priest.hh"
#include "Character.hh"

Paladin::Paladin(std::string &name, int lvl) :  Warrior(name, lvl), Priest(name, lvl)
{
  Character::Warrior::Strength = 9;
  Stamania = 10;
  Intelligence = 10;
  Spirit = 10;
  Agility = 2;
  Range = RANGE;
}

int Paladin::CloseAttack() : return (Warrior::CloseAttack());
{
}

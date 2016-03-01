//
// RadScorpion.cpp for rascoprion in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 16:32:43 2016 lina_a
// Last update Fri Jan 15 16:32:43 2016 lina_a
//

#include <iostream>
#include "RadScorpion.hh"
#include "AEnemy.hh"

RadScorpion::RadScorpion() : AEnemy(80, "Rad Scorpion")
{
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{

}

void RadScorpion::takeDamage(int dmg)
{
  _hp = _hp - dmg;
}

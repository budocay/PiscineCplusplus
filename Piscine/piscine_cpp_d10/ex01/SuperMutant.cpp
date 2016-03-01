//
// SuperMutant.cpp for supermutant in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 15:36:17 2016 lina_a
// Last update Fri Jan 15 15:36:17 2016 lina_a
//

#include <iostream>
#include "AEnemy.hh"
#include "SuperMutant.hh"

SuperMutant::SuperMutant() : AEnemy(170, "Super Mutant")
{
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
  std::cout << "Aaargh ..." << std::endl;
}

void	SuperMutant::takeDamage(int dmg)
{
  _hp = (_hp - dmg) + 3;
}

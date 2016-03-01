//
// Paladin.hh for palladin in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d09/ex03
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 08:30:09 2016 lina_a
// Last update Fri Jan 15 08:30:09 2016 lina_a
//


#ifndef PISCINE_CPP_D09_PALADIN_HH_
#define PISCINE_CPP_D09_PALADIN_HH_

#include <iostream>
#include "Priest.hh"
#include "Warrior.hh"

class Paladin :  virtual public Warrior, virtual public Priest
{
  Paladin(std::string &name, int lvl);
  virtual ~Paladin();
  int CloseAttak();
  int RangeAttack();
  void Heal();
};
#endif

//
// SuperMutant.hh for supermutant in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 15:36:27 2016 lina_a
// Last update Fri Jan 15 15:36:27 2016 lina_a
//


#ifndef SUPERMUTANT_HH_
#define SUPERMUTANT_HH_

#include <iostream>
#include "AEnemy.hh"

class SuperMutant : public AEnemy
{
public:
  SuperMutant();
  virtual ~SuperMutant();
  virtual void takeDamage(int);
};

#endif

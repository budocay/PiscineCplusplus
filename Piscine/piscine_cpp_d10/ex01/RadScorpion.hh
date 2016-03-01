//
// RadScorpion.hh for radscorpion in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 16:30:46 2016 lina_a
// Last update Fri Jan 15 16:30:46 2016 lina_a
//

#ifndef RADSCORPION_HH_
#define RADSCORPION_HH_

#include <iostream>
#include "AEnemy.hh"

class RadScorpion : public AEnemy
{
public:
  RadScorpion();
  virtual ~RadScorpion();
  virtual void takeDamage(int);
};

#endif

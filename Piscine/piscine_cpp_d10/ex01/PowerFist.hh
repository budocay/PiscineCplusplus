//
// PowerFist.hh for powerfist in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 14:56:30 2016 lina_a
// Last update Fri Jan 15 14:56:30 2016 lina_a
//


#ifndef POWERFIST_HH_
#define POWERFIST_HH_

#include <iostream>
#include "AWeapon.hh"

class PowerFist : public AWeapon
{
public:
  PowerFist();
  virtual ~PowerFist();
  virtual void attack() const;
};

#endif

//
// PlasmaRifle.hh for rifle.hh in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 14:28:00 2016 lina_a
// Last update Fri Jan 15 14:28:00 2016 lina_a
//

#ifndef PLASMARIFLE_HH_
#define PLASMARIFLE_HH_

#include <iostream>
#include "AWeapon.hh"

class PlasmaRifle : public AWeapon{

public:
  PlasmaRifle();
  virtual ~PlasmaRifle();
  virtual void attack() const;
};

#endif

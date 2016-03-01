//
// AWeapon.hh for weaponA in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 13:40:52 2016 lina_a
// Last update Fri Jan 15 13:40:52 2016 lina_a
//

#ifndef AWEAPON_HH_
#define AWEAPON_HH_

#include <iostream>

class AWeapon{
protected:
  std::string _name;
  int	      _AP;
  int	      _damage;

public:
  AWeapon(std::string const &, int, int);
  virtual ~AWeapon();
  std::string const & getName() const;
  int getAPCost() const;
  int getDamage() const;
  virtual void attack() const = 0;
};

#endif

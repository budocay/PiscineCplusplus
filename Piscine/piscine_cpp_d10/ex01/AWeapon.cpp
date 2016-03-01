//
// AWeapon.cpp for AWeapon in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 14:11:52 2016 lina_a
// Last update Fri Jan 15 14:11:52 2016 lina_a
//

#include <iostream>
#include "AWeapon.hh"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name),
								     _AP(apcost),
								     _damage(damage)
{}

AWeapon::~AWeapon(){

}

std::string const & AWeapon::getName() const
{
  return _name;
}

int	AWeapon::getAPCost() const
{
  return _AP;
}


int	AWeapon::getDamage() const
{
  return _damage;
}

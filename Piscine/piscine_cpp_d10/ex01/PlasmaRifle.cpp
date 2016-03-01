//
// PlasmaRifle.cpp for plasmarifle in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 14:50:23 2016 lina_a
// Last update Fri Jan 15 14:50:23 2016 lina_a
//

#include <iostream>
#include "PlasmaRifle.hh"
#include "AWeapon.hh"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle()
{}

void PlasmaRifle::attack() const
{
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

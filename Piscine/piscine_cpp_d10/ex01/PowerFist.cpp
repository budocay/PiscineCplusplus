//
// PowerFist.cpp for powerfist in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 15:00:20 2016 lina_a
// Last update Fri Jan 15 15:00:20 2016 lina_a
//

#include <iostream>
#include "AWeapon.hh"
#include "PowerFist.hh"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist(){
}

void PowerFist::attack() const
{
  std::cout << "* pschhh... SBAM! *" << std::endl;
}

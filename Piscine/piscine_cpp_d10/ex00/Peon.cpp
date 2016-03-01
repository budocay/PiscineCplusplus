//
// Peon.cpp for peon in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex00
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 10:57:51 2016 lina_a
// Last update Fri Jan 15 10:57:51 2016 lina_a
//

#include <iostream>
#include "Peon.hh"
#include "Victim.hh"

Peon::Peon(std::string const &name) : Victim(name)
{
  std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(){
  std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
  std::cout << getName() << " has been turned into a pink pony !" << std::endl;
}

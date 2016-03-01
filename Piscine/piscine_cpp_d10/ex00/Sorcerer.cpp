//
// Sorcerer.cpp for sorcerer in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex00
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 09:46:04 2016 lina_a
// Last update Fri Jan 15 09:46:04 2016 lina_a
//

#include <iostream>
#include "Sorcerer.hh"

Sorcerer::Sorcerer(std::string const &name, std::string const &title) : name_(name), title_(title)
{
  std::cout << name_ << ", " << title_ << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
  std::cout << name_ << ", " << title_ << " is dead." << " Consequences will never be the same !"<< std::endl;
}

std::string Sorcerer::getName()const {
  return this->name_;
}

std::string Sorcerer::getTitle() const {
  return this->title_;
}

std::ostream& operator<<(std::ostream &os, Sorcerer const &sorcer)
{
  os << "I am " << sorcer.getName() << ", " << sorcer.getTitle() << ", and I like ponies !" << std::endl;
  return os;
}

void Sorcerer::polymorph(Victim const &vc) const
{
  vc.getPolymorphed();
}

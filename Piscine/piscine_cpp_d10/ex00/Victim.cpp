//
// Victim.cpp for victim in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex00
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 10:09:06 2016 lina_a
// Last update Fri Jan 15 10:09:06 2016 lina_a
//

#include <iostream>
#include "Victim.hh"

Victim::Victim(std::string const &name) :name_(name)
{
  std::cout << "Some random victim called " << name_ << " just popped !" << std::endl;
}

Victim::Victim(Victim const &ob) : name_(ob.getName())
{

}

Victim& Victim::operator=(Victim const &ob)
{
  this->name_ = ob.getName();
  return *this;
}

Victim::~Victim()
{
  std::cout << "Victim " << name_<< " just died for no apparent reason !" << std::endl;
}

std::string Victim::getName() const
{
  return this->name_;
}

void Victim::getPolymorphed() const
{
  std::cout << getName() << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream& operator<<(std::ostream &os, Victim const &victim)
{
  os << "I'm " << victim.getName() << " and i like otter !" << std::endl;
  return os;
}

//
// Peon.hh for Peon in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex00
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 09:39:16 2016 lina_a
// Last update Fri Jan 15 09:39:16 2016 lina_a
//

#ifndef PEON_HH_
#define PEON_HH_

#include <iostream>
#include "Victim.hh"

class Peon : public Victim
{
public:
  Peon(std::string const &);
  virtual ~Peon();
  virtual void getPolymorphed() const;
};

#endif

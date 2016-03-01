//
// Sorceer.hh for sorcerr in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex00
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 09:37:38 2016 lina_a
// Last update Fri Jan 15 09:37:38 2016 lina_a
//

#ifndef SORCERER_HH_
#define SORCERER_HH_

#include <iostream>
#include "Victim.hh"

class Sorcerer
{
public:
  Sorcerer(std::string const &name, std::string const &title);
  ~Sorcerer();
  std::string getName() const ;
  std::string getTitle() const ;
  void polymorph(Victim const &) const;
protected:
  std::string name_;
  std::string title_;
};

std::ostream& operator<<(std::ostream &, Sorcerer const &);

#endif

//
// Victim.hh for victim in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex00
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 09:38:48 2016 lina_a
// Last update Fri Jan 15 09:38:48 2016 lina_a
//

#ifndef VITCTIM_HH_
#define VITCTIM_HH_

#include <iostream>

class Victim {
public:
  Victim(std::string const &);
  Victim(Victim const &);
  Victim& operator=(Victim const &);
  virtual ~Victim();
  virtual std::string getName() const;
  virtual void getPolymorphed() const;
protected:
  std::string name_;
};

std::ostream& operator<<(std::ostream &, Victim const &);

#endif

//
// Character.hh for character in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 16:44:20 2016 lina_a
// Last update Fri Jan 15 16:44:20 2016 lina_a
//

#ifndef CARACTER_HH_
# define CARACTER_HH_

#include <iostream>
#include "AWeapon.hh"
#include "AEnemy.hh"

class Character{

public:
  Character(std::string const &);
  ~Character();
  void recoverAP();
  void equip(AWeapon*);
  void attack(AEnemy*);
  const AWeapon* getAWeapon() const;
  int  getAP() const;
  std::string const & getName() const;

protected:
    AWeapon *_weapon;
    std::string _name;
    int	      _nbAP;
};

#endif

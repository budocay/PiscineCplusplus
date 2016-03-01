//
// AEnnemy.cpp for  in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 15:13:03 2016 lina_a
// Last update Fri Jan 15 15:13:03 2016 lina_a
//

#include <iostream>
#include "AEnemy.hh"

AEnemy::AEnemy(int nbHits, std::string const & type): _hp(nbHits),
						      _type(type)
{
}

AEnemy::~AEnemy()
{}

std::string const & AEnemy::getType() const
{
  return _type;
}

int	AEnemy::getHP() const
{
  return _hp;
}

void	AEnemy::takeDamage(int dmg)
{
  _hp = _hp - dmg;
}

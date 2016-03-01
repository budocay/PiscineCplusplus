//
// AEnnemy.hh for AEnnemy in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d10/ex01
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 15 15:13:31 2016 lina_a
// Last update Fri Jan 15 15:13:31 2016 lina_a
//

#ifndef AENNEMY_HH_
#define AENNEMY_HH_

class AEnemy{

protected:
  int _hp;
  std::string _type;

public:
  AEnemy(int, std::string const &);
  virtual ~AEnemy();
  std::string const & getType() const;
  int getHP() const;
  virtual void takeDamage(int);
};

#endif

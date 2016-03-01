/*
** Character.hh /home/lina_a/Projects/piscine_cpp_d09
** 
** Created by lina_a on 14/01/16.
**
*/

#ifndef PISCINE_CPP_D09_CHARACTER_HH
#define PISCINE_CPP_D09_CHARACTER_HH

#include <iostream>

class Character{
public:
    Character(const std::string &, int);
    virtual ~Character();
    Character(Character const &);
    Character& operator=(const Character &);
    const std::string &getName() const;
    int getLvl() const;
    int getPv() const;
    int getStrength()const ;
    int getStamania() const;
    int getIntelligence() const;
    int getSpirit() const;
    int getAgility() const;
    int getPower() const ;
    virtual int CloseAttack();
    virtual int RangeAttack();
    virtual void Heal();
    virtual void RestorePower();
    void TakeDamage(int _damage);

protected:
    std::string const Name;
    int     Lvl;
    int     Power;
    int     Life;
    int     Strength;
    int     Stamania;
    int     Intelligence;
    int     Spirit;
    int     Agility;

public:
    enum AttackRange
    {
        CLOSE,
        RANGE
    };
    AttackRange Range;
};

#endif //PISCINE_CPP_D09_CHARACTER_HH

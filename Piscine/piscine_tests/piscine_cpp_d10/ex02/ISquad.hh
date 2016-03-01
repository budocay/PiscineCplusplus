/*
** ISquad for piscine_tests
**
** Made by pirou_g in /home/pirou_g/piscine_tek2/piscine_tests
** Login   <pirou_g@epitech.net>
**
** Started on     15/01/16 16:46
** Last update on 15/01/16 16:46
*/

#ifndef PISCINE_TESTS_ISQUAD_HH
#define PISCINE_TESTS_ISQUAD_HH

# include "ISpaceMarine.hh"

class ISquad
{
public:
    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int) = 0;
    virtual int push(ISpaceMarine *) = 0;
};

#endif //PISCINE_TESTS_ISQUAD_HH

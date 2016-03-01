/*
** ISpaceMarine for piscine_tests
**
** Made by pirou_g in /home/pirou_g/piscine_tek2/piscine_tests
** Login   <pirou_g@epitech.net>
**
** Started on     15/01/16 16:45
** Last update on 15/01/16 16:45
*/

#ifndef PISCINE_TESTS_ISPACEMARINE_HH
#define PISCINE_TESTS_ISPACEMARINE_HH

class ISpaceMarine
{
public:
    virtual ~ISpaceMarine() {}
    virtual ISpaceMarine* clone() const = 0;
    virtual void battleCry() const = 0;
    virtual void rangedAttack() const = 0;
    virtual void meleeAttack() const = 0;
};

#endif //PISCINE_TESTS_ISPACEMARINE_HH

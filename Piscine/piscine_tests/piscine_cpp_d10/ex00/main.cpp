/*
** main for piscine_tests
**
** Made by pirou_g in /home/pirou_g/piscine_tek2/piscine_tests
** Login   <pirou_g@epitech.net>
**
** Started on     15/01/16 10:00
** Last update on 15/01/16 10:00
*/

#include "Peon.hh"
#include "Sorcerer.hh"

int main() {
    const Sorcerer robert("Robert", "the Magnificent");

    const Victim jim("Jimmy");
    const Peon joe("Joe");

    std::cout << robert << jim << joe;

    robert.polymorph(jim);
    robert.polymorph(joe);

    return 0;
}
//
// main.cpp for al in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d08/ex00
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Wed Jan 13 10:13:55 2016 lina_a
// Last update Wed Jan 13 10:13:55 2016 lina_a
//

#include <cstdlib>
#include <iostream>
#include "droid.hh"
#include "droidmemory.hh"

int     main()
{
    DroidMemory dm;
    DroidMemory dn;
    DroidMemory dg;

    srandom(time(0));
    dm += 42;
    DroidMemory dn1 = dm;
    std::cout << dm << std::endl;
    dn << dm;
    dn >> dm;
    dn << dm;
    std::cout << dn << std::endl;
    std::cout << dm << std::endl;
    dg = dm + dn1;
    return 0;
}
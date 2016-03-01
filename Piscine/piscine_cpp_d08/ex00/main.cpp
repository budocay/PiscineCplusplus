//
// main.cpp for al in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d08/ex00
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Wed Jan 13 10:13:55 2016 lina_a
// Last update Wed Jan 13 10:13:55 2016 lina_a
//

#include <iostream>
#include "droid.hh"

int     main()
{
    Droid d;
    Droid d1("Avenger");
    std::size_t Durasel = 200;

    std::cout << d << std::endl;
    std::cout << d1 << std::endl;
    d = d1;
    d.setStatus(new std::string("Kill Kill Kill!"));
    d << Durasel;
    std::cout << d << "--" << Durasel << std::endl;
    Droid d2 = d;
    d.setId("Rex");
    std::cout << (d2 != d) << std::endl;
    return 0;
}
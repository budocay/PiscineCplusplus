/*
** main.cpp /home/lina_a/Projects/piscine_cpp_d07a
** 
** Created by lina_a on 12/01/16.
**
*/

#include <iostream>
#include "Skat.h"

int     main()
{
    Skat s("Junior", 0);


    std::cout << "Soldier " << s.name() << std::endl;
    std::cout << s.stimPaks() << std::endl;
    s.status();
    s.useStimPaks();
    return 0;
}
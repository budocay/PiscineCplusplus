/*
** main.cpp /home/lina_a/Projects/piscine_cpp_d07a
** 
** Created by lina_a on 12/01/16.
**
*/


#include <iostream>
#include "KoalaBot.h"
#include "Parts.h"

int     main()
{
    KoalaBot kb("Marcos");

    std::cout << std::boolalpha << kb.status() << std::endl;
    kb.informations();
    return 0;
}


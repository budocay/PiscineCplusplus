//
// Created by lina_a on 18/01/16.
//

#include <iostream>
#include "Toy.h"

int     main()
{
    Toy toto;
    Toy ET(Toy::WOODY, "green", "./woody.txt");
    toto = ET;
    toto.setName("TOTO !");
    if(toto.getType() == Toy::WOODY)
        std::cout << "basic toy: " << toto.getName() << std::endl;
    std::cout << toto.getAscii() << std::endl;
    if (ET.getType() == Toy::WOODY)
        std::cout << "this alien is: " << ET.getName() << std::endl;
    std::cout << ET.getAscii() << std::endl;
}

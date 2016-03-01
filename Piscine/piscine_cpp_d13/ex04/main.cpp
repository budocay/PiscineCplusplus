//
// Created by lina_a on 18/01/16.
//

#include <iostream>
#include "Toy.h"
#include "Buzz.h"
#include "Woody.h"

int     main()
{
    Woody w("wood");

    if (w.setAscii("file_who_does_not_exist.txt") == false)
    {
        Toy::Error e = w.getLastError();
        if (e.type == Toy::Error::PICTURE)
        {
            std::cout << "Error in " << e.where() << ": " << e.what() << std::endl;
        }
    }
}

//
// Created by lina_a on 18/01/16.
//

#include <iostream>
#include "Toy.h"
#include "Buzz.h"
#include "Woody.h"

int     main()
{
  Toy *b = new Buzz("buziiii");
    Toy *w = new Woody("wood");
    Toy *t = new Toy(Toy::ALIEN, "ET", "./woody.txt");
    b->speak("To the code, and beyond !!!");
    w->speak("There's a snake n my booth");
    t->speak("the claaaaww");
}

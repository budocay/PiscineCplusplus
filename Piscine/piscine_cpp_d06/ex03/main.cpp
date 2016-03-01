/*
** main.cpp /home/lina_a/Projects/ex03
**
** Created by lina_a on 11/01/16.
**
*/

#include "sickkoala.h"
#include "koalanurse.h"

int     main()
{
    KoalaNurse lol(12);
    SickKoala *koala = new SickKoala("marc");

    lol.giveDrug("samere", koala);
    lol.timeCheck();
    lol.timeCheck();
    koala->takeDrug(lol.readReport("lol.rep"));
}

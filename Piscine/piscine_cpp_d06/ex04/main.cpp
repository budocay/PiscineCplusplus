/*
** main.cpp /home/lina_a/Projects/ex03
**
** Created by lina_a on 11/01/16.
**
*/

#include <cstdlib>
#include "sickkoala.h"
#include "koalanurse.h"
#include "koaladoctor.h"

int     main()
{
    srandom(time(NULL));
    KoalaNurse lol(12);
    SickKoala *koala = new SickKoala("marc");
    KoalaDoctor koalaDoc("David");

    koalaDoc.timeCheck();
    koalaDoc.diagnose(koala);
    koalaDoc.timeCheck();
    koala->takeDrug(lol.readReport("marc.report"));
    delete (koala);
}

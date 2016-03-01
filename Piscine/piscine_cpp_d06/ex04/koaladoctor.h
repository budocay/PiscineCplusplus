/*
** koaladoctor.h /home/lina_a/Projects/ex04
** 
** Created by lina_a on 11/01/16.
**
*/

#ifndef EX04_KOALADOCTOR_H
#define EX04_KOALADOCTOR_H

#include <iostream>
#include "sickkoala.h"

class KoalaDoctor{
public:
    KoalaDoctor(std::string const nameDoc);
    ~KoalaDoctor();
    void diagnose(SickKoala const *koala);
    void timeCheck();
private:
    std::string name;
    bool isWorking;
};


#endif //EX04_KOALADOCTOR_H

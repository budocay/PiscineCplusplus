/*
** koalanurse.h /home/lina_a/Projects/ex03
**
** Created by lina_a on 11/01/16.
**
*/

#ifndef EX03_KOALANURSE_H
#define EX03_KOALANURSE_H

#include "sickkoala.h"
#include <iostream>

class KoalaNurse{
public:
    KoalaNurse(int ID);
    ~KoalaNurse();
    void giveDrug(std::string const nameDrug, SickKoala *koalaSick);
    std::string readReport(std::string const fileName);
    void timeCheck();

private:
    int m_id_nurse;
    bool isWorking;
};
#endif //EX03_KOALANURSE_H

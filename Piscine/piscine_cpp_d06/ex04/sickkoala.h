/*
** sickkoala.h /home/lina_a/Projects/ex02
** 
** Created by lina_a on 11/01/16.
**
*/

#ifndef EX02_SICKKOALA_H
#define EX02_SICKKOALA_H

#include <iostream>

class SickKoala
{
public:
    SickKoala(std::string name);
    ~SickKoala();
    void poke() const;
    bool takeDrug(std::string name);
    void overDrive(std::string sentence);
    std::string getName() const;
private:
    std::string name;
};

#endif //EX02_SICKKOALA_H

/*
** KoalaBot.h /home/lina_a/Projects/piscine_cpp_d07a
** 
** Created by lina_a on 12/01/16.
**
*/

#ifndef PISCINE_CPP_D07A_KOALABOT_H
#define PISCINE_CPP_D07A_KOALABOT_H

#include <iostream>
#include "Parts.h"

class KoalaBot{
public:
    KoalaBot(std::string const = "Bob-01");
    ~KoalaBot();
    void setParts(Arms &);
    void setParts(Head &);
    void setParts(Legs &);
    void swapParts(Arms &);
    void swapParts(Head &);
    void swapParts(Legs &);
    void informations();
    bool status();

private:
    Arms _arms;
    Head _head;
    Legs _legs;
    std::string _serial;
};

#endif //PISCINE_CPP_D07A_KOALABOT_H

//
// Created by lina_a on 18/01/16.
//

#ifndef PISCINE_CPP_D13_BUZZ_H
#define PISCINE_CPP_D13_BUZZ_H

#include <iostream>
#include <string>
#include "Toy.h"

class Buzz : public Toy{
public:
    Buzz(std::string const &name);
    virtual ~Buzz();
    Buzz(const Buzz &);
    Buzz & operator=(Buzz const &);
};
std::ostream& operator<<(std::ostream &, Buzz const &);
#endif //PISCINE_CPP_D13_BUZZ_H

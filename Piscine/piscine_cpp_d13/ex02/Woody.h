//
// Created by lina_a on 18/01/16.
//

#ifndef PISCINE_CPP_D13_WOODY_H
#define PISCINE_CPP_D13_WOODY_H

#include <iostream>
#include <string>
#include "Toy.h"

class Woody : public Toy{
public:
    Woody(std::string const &name);
    virtual ~Woody();
    Woody(const Woody &);
    Woody & operator=(Woody const &);
};

#endif //PISCINE_CPP_D13_WOODY_H

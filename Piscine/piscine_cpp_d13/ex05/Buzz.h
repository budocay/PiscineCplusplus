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
    Buzz(std::string const &);
    virtual ~Buzz();
    Buzz(const Buzz &);
    Buzz & operator=(Buzz const &);
    virtual void speak(std::string const &surnom);
    virtual bool speak_es(std::string const &sp);
};

#endif //PISCINE_CPP_D13_BUZZ_H

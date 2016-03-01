//
// Created by lina_a on 19/01/16.
//

#ifndef EX00_BANANA_H
#define EX00_BANANA_H

#include <iostream>
#include <string>
#include "Fruit.h"

class Banana : public Fruit{
public:
    Banana(std::string const &nm = "Banana", int vit = 5);
    Banana&operator=(Banana const &);
    Banana(const Banana &);
    virtual ~Banana();
    virtual std::string getName() const;
};

#endif //EX00_BANANA_H

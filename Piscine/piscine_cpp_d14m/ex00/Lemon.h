//
// Created by lina_a on 19/01/16.
//

#ifndef EX00_LEMON_H
#define EX00_LEMON_H

#include <iostream>
#include <string>
#include "Fruit.h"

class Lemon : public Fruit{
public:
    Lemon(std::string const &nm = "lemon", int vit = 3);
    Lemon&operator=(Lemon const &);
    Lemon(const Lemon &);
    virtual ~Lemon();
    virtual std::string getName() const;
};

#endif //EX00_LEMON_H

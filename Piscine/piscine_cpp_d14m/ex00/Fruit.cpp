//
// Created by lina_a on 19/01/16.
//

#include "Fruit.h"

Fruit::Fruit(std::string const &nm, int vit) : _name(nm),
                                               _vitamins(vit)
{
}

int Fruit::getVitamins() const {
    return _vitamins;
}

Fruit::~Fruit() {

}

Fruit::Fruit(const Fruit &fruit) : _name(fruit.getName()),
                                   _vitamins(fruit._vitamins)
{
}

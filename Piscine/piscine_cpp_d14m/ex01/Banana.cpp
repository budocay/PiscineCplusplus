//
// Created by lina_a on 19/01/16.
//

#include "Banana.h"

Banana::Banana(const std::string &nm, int vit) : Fruit(nm, vit)
{
}

Banana &Banana::operator=(const Banana &Banana) {
    if (&Banana != this)
    {
        this->_name = Banana.getName();
        this->_vitamins = Banana.getVitamins();
    }
    return *this;
}

Banana::~Banana() {

}

std::string Banana::getName() const {
    return _name;
}

Banana::Banana(const Banana &Banana) : Fruit(Banana)
{

}
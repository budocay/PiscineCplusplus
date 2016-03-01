//
// Created by lina_a on 19/01/16.
//

#include "Lemon.h"

Lemon::Lemon(const std::string &nm, int vit) : Fruit(nm, vit)
{
}

Lemon &Lemon::operator=(const Lemon &lemon) {
    if (&lemon != this)
    {
        this->_name = lemon.getName();
        this->_vitamins = lemon.getVitamins();
    }
    return *this;
}

Lemon::~Lemon() {

}

std::string Lemon::getName() const {
    return _name;
}

Lemon::Lemon(const Lemon &lemon) : Fruit(lemon)
{

}

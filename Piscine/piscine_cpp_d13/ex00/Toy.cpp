//
// Created by lina_a on 18/01/16.
//

#include "Toy.h"

Toy::ToyType Toy::getType() const {
    return _type;
}

std::string Toy::getName() const {
    return _name;
}

void Toy::setName(std::string const string) {
    _name = string;
}

bool Toy::setAscii(std::string const &pic) {
    return _pic.getPictureFromFile(pic);
}

std::string Toy::getAscii() const {
    return _pic.data;
}

Toy::~Toy() {

}

Toy::Toy(Toy::ToyType type, std::string name, std::string picFile) : _name(name),
                                                                     _pic(picFile),
                                                                     _type(type)
{

}

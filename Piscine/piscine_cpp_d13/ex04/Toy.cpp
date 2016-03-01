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

Toy::Toy(const Toy &ty) {
    _name = ty.getName();
    _pic.data = ty.getAscii();
    _type = ty.getType();
}

Toy& Toy::operator=(const Toy &toy) {
    if (&toy != this)
    {
        this->_name = toy.getName();
        this->_pic.data = toy.getAscii();
        this->_type = toy.getType();
    }
    return *this;
}

void Toy::speak(const std::string &surnom) {
    std::cout << _name << " \"" << surnom << "\"" << std::endl;
}

std::ostream& operator<<(std::ostream &os, Toy const &ty)
{
    os << ty.getName() << std::endl;
    os << ty.getAscii() << std::endl;
    return os;
}

Toy& Toy::operator<<(const std::string &st)
{
    this->_pic.data = st;
    return *this;
}
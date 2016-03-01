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
    if (_pic.getPictureFromFile(pic) == true)
    {
        return true;
    }
    _errtype = Toy::Error::PICTURE ;
    return false;
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
    _pic.data = st;
    return *this;
}

bool Toy::speak_es(std::string const &sp) {
    std::cout << _name << " \"" << sp << "\"" << std::endl;
    _errtype = Toy::Error::SPEAK ;
    return false;
}

std::string Toy::Error::what() const {
    if (type == Toy::Error::PICTURE)
        return "bad new illustration";
    if (type == Toy::Error::SPEAK)
        return "wrong mode";
    else {;
        return "";
    }
}

std::string Toy::Error::where() const {
    if (type == Toy::Error::PICTURE)
        return "setAscii";
    if (type == Toy::Error::SPEAK)
        return "speak_es";
    else {
        return "";
    }
}
Toy::Error Toy::getLastError() {
    return Toy::Error(_errtype);
}

Toy::Error::Error(Toy::Error::ErrorType err) {
    type = err;
}
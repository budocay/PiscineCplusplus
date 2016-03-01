//
// Created by lina_a on 18/01/16.
//

#include "Buzz.h"

Buzz::~Buzz() {

}

Buzz::Buzz(const Buzz &Buzz) : Toy(Buzz.getType(), Buzz.getName(), Buzz.getAscii())
{
}

Buzz &Buzz::operator=(const Buzz &Buzz) {
    if (&Buzz != this)
    {
        this->_name = Buzz.getName();
        this->_pic.data = getAscii();
        this->_type = getType();
    }
    return *this;
}

Buzz::Buzz(std::string const &name) : Toy(BUZZ, name, "buzz.txt")
{
}

void Buzz::speak(std::string const &surnom) {
    std::cout << "BUZZ: " << _name << " \"" << surnom << "\"" << std::endl;
}

bool Buzz::speak_es(std::string const &sp) {
        std::cout << "BUZZ: " << _name << " senorita " << " \"" << sp << "\"" << " senorita" << std::endl;
    return true;
}
//
// Created by lina_a on 18/01/16.
//

#include "Woody.h"

Woody::~Woody() {

}

Woody::Woody(const Woody &woody) : Toy(woody.getType(), woody.getName(), woody.getAscii())
{
}

Woody &Woody::operator=(const Woody &woody) {
    if (&woody != this)
    {
        this->_name = woody.getName();
        this->_pic.data = getAscii();
        this->_type = getType();
    }
    return *this;
}

Woody::Woody(std::string const &name) : Toy(WOODY, name, "woody.txt")
{
}

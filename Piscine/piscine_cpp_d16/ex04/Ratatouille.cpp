//
// Created by lina_a on 21/01/16.
//

#include "Ratatouille.h"

Ratatouille::Ratatouille()
{
}

Ratatouille::Ratatouille(const Ratatouille &ratatouille)
{
    _cook = ratatouille.kooc();
}

Ratatouille::~Ratatouille() {

}

Ratatouille &Ratatouille::operator=(const Ratatouille &ratatouille) {
    _cook = ratatouille.kooc();
    return *this;
}

Ratatouille &Ratatouille::addVegetable(unsigned char i) {
    std::ostringstream strs;
    strs << i;
    _cook += strs.str();
    return *this;
}

Ratatouille &Ratatouille::addCondiment(unsigned int i) {
    std::ostringstream strs;
    strs << i;
    _cook += strs.str();
    return *this;
}

Ratatouille &Ratatouille::addSpice(double d) {
    std::ostringstream strs;
    strs << d;
    _cook += strs.str();
    return *this;
}

Ratatouille &Ratatouille::addSauce(const std::string &string) {
    _cook += string;
    return *this;
}

std::string Ratatouille::kooc(void) const {
    return _cook;
}

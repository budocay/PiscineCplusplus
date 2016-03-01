//
// Created by lina_a on 21/01/16.
//

#ifndef EX04_RATATOUILLE_H
#define EX04_RATATOUILLE_H

#include<iostream>
#include <string>
#include <sstream>

class Ratatouille{
public:
    Ratatouille();
    Ratatouille(Ratatouille const &);
    ~Ratatouille();
    Ratatouille &operator=(const Ratatouille &);
    Ratatouille &addVegetable(unsigned char);
    Ratatouille &addCondiment(unsigned int);
    Ratatouille &addSpice(double);
    Ratatouille &addSauce(const std::string &);
    std::string kooc(void) const ;

private:
    std::string _cook;
};

#endif //EX04_RATATOUILLE_H

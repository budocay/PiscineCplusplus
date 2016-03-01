//
// Created by lina_a on 19/01/16.
//

#ifndef EX00_FRUIT_H
#define EX00_FRUIT_H

#include <iostream>
#include <string>

class Fruit{
public:
    Fruit(std::string const &nm = "", int vit = 0);
    Fruit(const Fruit &);
    virtual ~Fruit();
    int getVitamins() const;
    virtual std::string getName() const = 0;
protected:
    std::string _name;
    int _vitamins;
};

#endif //EX00_FRUIT_H

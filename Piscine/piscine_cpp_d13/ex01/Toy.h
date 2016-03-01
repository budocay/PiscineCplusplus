//
// Created by lina_a on 18/01/16.
//

#ifndef EX00_TOY_H
#define EX00_TOY_H

#include <iostream>
#include <string>
#include "Picture.h"

class Toy{
public:
enum ToyType{
        BASIC_TOY,
        ALIEN
    };
public:
    ToyType getType() const;
    std::string getName() const;
    void setName(std::string const );
    bool setAscii(std::string const &);
    std::string getAscii() const;
    Toy(ToyType const &type = BASIC_TOY, std::string const &name = "toy", std::string const &picFile = "");
    Toy(Toy const &);
    Toy&operator=(const Toy &);
    ~Toy();
private:
    std::string _name;
    Picture _pic;
    ToyType _type;
};

#endif //EX00_TOY_H

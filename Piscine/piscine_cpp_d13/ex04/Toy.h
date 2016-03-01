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
        ALIEN,
        BUZZ,
        WOODY
    };
public:
    ToyType getType() const;
    std::string getName() const;
    void setName(std::string const);
    bool setAscii(std::string const &);
    std::string getAscii() const;
    Toy(ToyType type = BASIC_TOY, std::string name = "toy", std::string picFile = "");
    Toy(Toy const &);
    Toy&operator=(const Toy &);
    virtual ~Toy();
    virtual void speak(std::string const &surnom);
    Toy& operator<<(std::string const &);
protected:
    std::string _name;
    Picture _pic;
    ToyType _type;
};

std::ostream& operator<<(std::ostream&,Toy const &);

#endif //EX00_TOY_H

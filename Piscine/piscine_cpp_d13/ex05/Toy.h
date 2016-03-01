//
// Created by lina_a on 18/01/16.
//

#ifndef EX00_TOY_H
#define EX00_TOY_H

#include <iostream>
#include <string>
#include "Picture.h"

class Toy
{
public:
    class Error
    {
        public:
            enum ErrorType
            {
                UNKNOWN,
                PICTURE,
                SPEAK
            };
        public:
            Error(ErrorType err = UNKNOWN);
            std::string what() const ;
            std::string where()const ;
            public:
                Error::ErrorType type;
    };

    //Appartient a Toy directement
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
    virtual bool speak_es(std::string const &sp);
    Error getLastError();
protected:
    std::string _name;
    Picture _pic;
    ToyType _type;
    Error::ErrorType _errtype;
};

std::ostream& operator<<(std::ostream&,Toy const &);

#endif //EX00_TOY_H

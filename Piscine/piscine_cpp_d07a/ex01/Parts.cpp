/*
** Parts.cpp /home/lina_a/Projects/piscine_cpp_d07a
** 
** Created by lina_a on 12/01/16.
**
*/

#include <iostream>
#include "Parts.h"

Arms::Arms(std::string serial, bool functionnal): _serial(serial), _functionnal(functionnal)
{
}

Arms::~Arms() {

}

Legs::Legs(std::string serial, bool functionnal): _serial(serial), _functionnal(functionnal)
{
}

Legs::~Legs() {

}

Head::Head(std::string serial, bool functionnal): _serial(serial), _functionnal(functionnal)
{
}

bool Arms::isFuncionnal() {
    if (_functionnal == true)
        return true;
    else
        return false;
}

bool Legs::isFunctionnal() {
    if (_functionnal == true)
        return true;
    else
        return false;
}

bool Head::isFunctionnal() {
    if (_functionnal == true)
        return true;
    else
        return false;
}

std::string Arms::serial() {
    return _serial;
}

std::string Legs::serial() {
    return _serial;
}
std::string Head::serial() {
    return _serial;
}

void Arms::information() {
    if (_functionnal == true)
        std::cout << "\t[Parts] " << "Arms " << _serial << " status : OK" << std::endl;
    else
        std::cout << "\t[Parts] " << "Arms " << _serial << " status KO" << std::endl;
}

void Legs::information() {
    if (_functionnal == true)
        std::cout << "\t[Parts] " << "Arms " << _serial << " status : OK" << std::endl;
    else
        std::cout << "\t[Parts] " << "Arms " << _serial << " status KO" << std::endl;
}

void Head::information() {
    if (_functionnal == true)
        std::cout << "\t[Parts] " << "Arms " << _serial << " status : OK" << std::endl;
    else
        std::cout << "\t[Parts] " << "Arms " << _serial << " status KO" << std::endl;
}

Head::~Head() {

}
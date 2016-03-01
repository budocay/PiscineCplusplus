/*
** Skat.cpp /home/lina_a/Projects/piscine_cpp_d07a
** 
** Created by lina_a on 12/01/16.
**
*/

#include <iostream>
#include "Skat.h"

Skat::Skat(const std::string &name, int stimPaks) : _name(name), _stimPacks(stimPaks)
{
}

Skat::Skat()
{
    _name = "Bob";
    _stimPacks = 15;
}

Skat::~Skat() {

}

const std::string & Skat::name() {
    return _name;
}


int& Skat::stimPaks() {
    return _stimPacks;
}

void Skat::shareStimPaks(int number, int& stocks) {

    if (number > _stimPacks)
        std::cout << "Don't be greedy" << std::endl;
    else{
        while (number > 0)
        {
            stocks++;
            number--;
            _stimPacks--;
        }
        std::cout << "Keep the change" << std::endl;
    }
}

void Skat::addStimPaks(unsigned int number) {
    if (number == 0)
        std::cout << "Hey boya, did you forget something ?" << std::endl;
    else
        _stimPacks += static_cast<int>(number);
}

void Skat::useStimPaks() {
    if (_stimPacks > 0)
    {
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
        _stimPacks--;
    }
    else
        std::cout << "Mediiiiiic" << std::endl;
}

void Skat::status(){
    std::cout << "Soldier " << _name << " reporting " << _stimPacks << " stimpaks remaining sir !" << std::endl;
}
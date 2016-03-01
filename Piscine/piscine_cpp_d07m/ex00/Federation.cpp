/*
** Federation.cpp /home/lina_a/Projects/piscine_cpp_d07m
** 
** Created by lina_a on 12/01/16.
**
*/

#include <iostream>
#include "Federation.hh"

Federation::Starfleet::Ship::Ship(int const length, int const width, std::string const name, short maxWarp) : _length(length), _width(width), _name(name), _maxWarp(maxWarp)
{
    std::cout << "The ship USS " << _name << " has been finished. It is " << _length << " m in length and " << _width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << _maxWarp << "!" <<std::endl;
}

Federation::Starfleet::Ship::~Ship()
{

}

Federation::Ship::Ship(int const length, int const width, std::string const name) : _length(length), _width(width), _name(name)
{
    std::cout << "The independant ship " << _name << " just finished its construction. It is " << _length << " m in length and " << _width << " m in width." << std::endl;
}

Federation::Ship::~Ship()
{
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    coreSet = core;
    std::cout << "USS " << _name << ": The core is set." << std::endl;
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    coreSet = core;
    std::cout << _name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore() const {
    if (coreSet->checkReactor()->isStable() == true)
        std::cout << _name << ": The core is " << "stable" << " at the time." << std::endl;
    else
        std::cout << _name << ": The core is " << "unstable" << " at the time." << std::endl;
}

void Federation::Starfleet::Ship::checkCore() const {
    if (coreSet->checkReactor()->isStable() == true)
        std::cout << "USS " << _name << ": The core is " << "stable" << " at the time." << std::endl;
    else

        std::cout << "USS " << _name << ": The core is " << "unstable" << " at the time." << std::endl;
}
/*
** Borg.cpp /home/lina_a/Projects/ex01
** 
** Created by lina_a on 12/01/16.
**
*/

#include <iostream>
#include "Borg.hh"

Borg::Ship::Ship() : _side(300), _maxWarp(9)
{
    std::cout << "We are the Borgs. LOwer your shields and surrender yourselves unconditionally."<<std::endl;
    std::cout << "Your biological characteristics and technologies will be assimilated" << std::endl;
    std::cout << "Resistance is futile" << std::endl;
}

void Borg::Ship::setupCore(WarpSystem::Core *core) {
    coreSet = core;
}

Borg::Ship::~Ship() { }

void Borg::Ship::checkCore() const {
    if (coreSet->checkReactor()->isStable() == true)
        std::cout << "Everything is in order." << std::endl;
    else
        std::cout << "Critical failure imminent." << std::endl;
}
/*
** Warpsystem.cpp /home/lina_a/Projects/piscine_cpp_d07m
** 
** Created by lina_a on 12/01/16.
**
*/

#include <iostream>
#include "Warpsystem.hh"

WarpSystem::QuantumReactor::QuantumReactor()
{
    _stability = true;
}

void WarpSystem::QuantumReactor::setStability(bool setStabilties)
{
    _stability = setStabilties;
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor()
{
    return _coreReactor;
}

WarpSystem::Core::Core(QuantumReactor *reactor) : _coreReactor(reactor)
{
}

bool WarpSystem::QuantumReactor::isStable()  {
    if (_stability == false)
        return false;
    else
        return true;
}

WarpSystem::Core::~Core()
{
}

WarpSystem::QuantumReactor::~QuantumReactor() { }

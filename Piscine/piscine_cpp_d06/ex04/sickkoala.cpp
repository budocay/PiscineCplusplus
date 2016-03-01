/*
** sickkoala.cpp /home/lina_a/Projects/ex02
** 
** Created by lina_a on 11/01/16.
**
*/

#include <algorithm>
#include <iostream>
#include "sickkoala.h"

SickKoala::~SickKoala()
{
    std::cout << "Mr." << name << ": Kreooogg !! Je suis gueriiii !" << std::endl;
}

SickKoala::SickKoala(std::string name) : name(name)
{
}

bool SickKoala::takeDrug(std::string name)
{
    if (name == "Buronzand")
    {
        std::cout << "Mr." << name << ": Et la fatigue a fait son temps !" << std::endl;
        return true;
    }
    if (name == "MARS")
    {
        std::cout << "Mr." << name << ": Mars, et ca kreog !" << std::endl;
        return true;
    }
    for (unsigned int i = 0; i != name.size(); i++)
        name[i] = std::tolower(name[i]);
    if (name == "mars")
    {
        std::cout << "Mr." << name << ": Mars, et ca kreog !" << std::endl;
        return true;
    }
    else
    {

        for (unsigned int i = 0; i != name.size(); i++)
        {
            name[i] = std::tolower(name[i]);
        }
        std::cout << "Mr." << name << ": Goerkreog !" << std::endl;
        return false;
    }
}

void SickKoala::overDrive(std::string sentence)
{
    size_t  index = 0;

    while (true)
    {
        index =  sentence.find("Kreog");
        if (index == std::string::npos)
            break;
        sentence.replace(index, 5, "1337");
        index++;
    }
    std::cout << "Mr." << name << ": " << sentence << std::endl;
}

void SickKoala::poke() const
{
    std::cout << "Mr." << name << ": Gooeeeeerrk !! :'(" << std::endl;
}

std::string SickKoala::getName() const
{
    return name;
}
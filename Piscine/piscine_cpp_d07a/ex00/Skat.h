/*
** Skat.h /home/lina_a/Projects/piscine_cpp_d07a
** 
** Created by lina_a on 12/01/16.
**
*/

#ifndef PISCINE_CPP_D07A_SKAT_H
#define PISCINE_CPP_D07A_SKAT_H

#include <iostream>

class Skat{

public:
    Skat(std::string const& name, int stimPaks);
    Skat();
    ~Skat();

public:
    int& stimPaks();
    const  std::string& name();

public:
    void shareStimPaks(int number, int& stocks);
    void addStimPaks(unsigned int number);
    void useStimPaks();

public:
    void status();

private:
    std::string _name;
    int _stimPacks;
};

#endif //PISCINE_CPP_D07A_SKAT_H

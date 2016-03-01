//
// Created by lina_a on 20/01/16.
//

#ifndef EX04_EX04_HPP
#define EX04_EX04_HPP

#include <iostream>
#include <string>

template <typename T>
bool equal(const T &farg, const T &sarg);

template <class T>
class Tester
{
public:
    bool equal(const T &farg, const T &sarg) const ;
};


#endif //EX04_EX04_HPP

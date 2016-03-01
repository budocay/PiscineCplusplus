//
// Created by lina_a on 20/01/16.
//

#ifndef EX03_EX03_HPP
#define EX03_EX03_HPP

#include <iostream>
#include <string>

template <typename T>
void foreach(T *tab, void (&print)(T const &), int size)
{
    int i = 0;
    while(i < size) {
        print(tab[i]);
        i++;
    }
}
template <typename T>
void print(const T& elem)
{
    std::cout << elem << std::endl;
}

#endif //EX03_EX03_HPP

//
// Created by lina_a on 20/01/16.
//

#ifndef EX02_EX02_HPP
#define EX02_EX02_HPP

#include <iostream>
#include <string>

template <typename T>
T min(T const &first, T const &second)
{
    std::cout << "template min" << std::endl;
    if (first == second)
        return first;
    else if (first > second)
        return second;
    else
        return first;
}


template <typename T>
T templateMin(T const *a, int b)
{
    T res = a[0];
    int i = 1;
    while (i < b)
    {
        res = min<T>(a[i], res);
        i++;
    }
    return res;
}

int min(int a, int b)
{
    std::cout << "non-template min" << std::endl;
    if (a == b)
        return a;
    else if (a > b)
        return b;
    else
        return a;
}


int nonTemplateMin(int const *tab, int size)
{
    int res = tab[0];
    int i = 1;
    while (i < size)
    {
        res = min(tab[i], res);
        i++;
    }
    return res;
}


#endif //EX02_EX02_HPP

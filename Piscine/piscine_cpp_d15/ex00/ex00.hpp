//
// Created by lina_a on 20/01/16.
//

#ifndef EX00_EX00_HPP
#define EX00_EX00_HPP

#include <iostream>
#include <string>
template <typename T>
void swap(T &a, T &b){
    T c;
    c = a;
    a = b;
    b = c;
}

template <typename C>
C min(C const &first, C const &second)
{
    if (first == second)
        return second;
    else if (first > second)
        return second;
    else
        return first;
}

template <typename  M>
M max(M const &first, M const &second)
{
    if (first == second)
        return second;
    else if (second > first)
        return second;
    else
        return first;
}

template <typename A>
A add(A const &x, A const &y)
{
    return x + y;
}

#endif //EX00_EX00_HPP

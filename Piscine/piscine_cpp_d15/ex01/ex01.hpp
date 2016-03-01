//
// Created by lina_a on 20/01/16.
//

#ifndef EX01_EX01_HPP
#define EX01_EX01_HPP

#include <iostream>
#include <string>
#include <cstring>

typedef const char* Fire;

template <typename H>
int compare(H const &first, H const &second)
{
    if (first == second)
        return 0;
    else if (first < second)
        return -1;
    else
        return 1;
}

template <>
int compare<Fire>(const Fire &first, const Fire &second)
{
    int res = strcmp(first, second);
    if (res < 0)
        return -1;
    if (res > 0)
        return 1;
    else
        return 0;
}

#endif //EX01_EX01_HPP

//
// Created by lina_a on 20/01/16.
//

#include "ex04.hpp"

template <typename T>
bool equal(const T &farg, const T &sarg)
{
    return farg == sarg;
}

template <typename T>
bool Tester<T>::equal(const T &farg, const T &sarg) const {
    return farg == sarg;
}

/*
 *  prototype template equal simple
 */
template bool equal<int>(const int &, const int &);
template bool equal<float>(const float &, const float &);
template bool equal<double>(const double &, const double &);
template bool equal<std::string>(const std::string &, const std::string &);

/*
 * Prototype fonction membre templater
 */

template bool Tester<int>::equal(const int &farg, const int &sarg) const;
template bool Tester<float>::equal(const float &farg, const float &sarg) const;
template bool Tester<double>::equal(const double &farg, const double &sarg) const;
template bool Tester<std::string>::equal(const std::string &farg, const std::string &sarg) const;
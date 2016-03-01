//
// find.hpp for find in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d17/ex00
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Fri Jan 22 09:34:53 2016 lina_a
// Last update Fri Jan 22 09:34:53 2016 lina_a
//

#ifndef FIND_HPP_
# define FIND_HPP_

#include <algorithm>
#include <iostream>
#include <string>

template <typename T>
typename T::iterator do_find(T & p, int nbToFind)
{
  return std::find(p.begin(), p.end(), nbToFind);
}

#endif //FIND_HPP

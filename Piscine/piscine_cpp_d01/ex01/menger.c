/*
** menger.c for menge in /home/lina_a/rendu/B3/piscine_cpp_d01/ex01/src
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Wed Jan  6 18:01:34 2016 lina_a
** Last update Wed Jan  6 18:01:34 2016 lina_a
*/

#include <stdio.h>

void    algo_menger(int size, int depth, int x, int y)
{
  if (depth == 0)
    return;
  printf("%03d %03d %03d\n", size / 3, x + (size / 3), y + (size / 3));
  for (int i = 0; i != 3; i++)
    for(int j = 0; j != 3; j++)
      {
        if (i == 1 && j == 1)
          continue;
        algo_menger((size / 3),  depth - 1, i * (size / 3), j * (size / 3));
      }
  return;
}

int     menger(int size_square, int depth)
{
  int   x = 0;
  int   y = 0;

  if (depth > size_square)
    {
      return (0);
    }
  if (depth <= 0)
    {
      return (0);
    }
  if (size_square % 3 != 0)
    {
      return (0);
    }
  algo_menger(size_square, depth, x, y);
  return (0);
}

/*
** mul_div.c for mul_div in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d02m/ex00
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Thu Jan  7 09:27:16 2016 lina_a
** Last update Thu Jan  7 09:27:16 2016 lina_a
*/

#include <stdio.h>

void	add_mul_4param(int first, int second, int *add, int *mul)
{
  *add = first + second;
  *mul = first * second;
}

void	add_mul_2param(int *first, int *second)
{
  int	sec_var = *second;
  *second = *first * *second;
  *first = sec_var + * first;
}

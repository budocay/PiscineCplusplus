/*
** div.c for div in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d02m/ex04
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Thu Jan  7 11:44:17 2016 lina_a
** Last update Thu Jan  7 11:44:17 2016 lina_a
*/

#include <stdio.h>
#include "castmania.h"

int	integer_div(int a, int b)
{
  if (b == 0)
    return (0);
  else
    return (a / b);
  return (0);
}

float	decimale_div(int a, int b)
{
  if (b == 0)
    return (0);
  else
    return ((float) a / b);
  return (0);
}

void	integer(t_div *operation)
{
  ((t_integer_op  *)operation->div_op)->res =
    integer_div(((t_integer_op *) operation->div_op)->a, ((t_integer_op *)operation->div_op)->b);
}

void	decimale(t_div *operation)
{
  ((t_decimale_op  *)operation->div_op)->res =
    integer_div(((t_decimale_op *)operation->div_op)->a, ((t_decimale_op *)operation->div_op)->b);
}

void	exec_div(t_div *operation)
{
  (void)operation;
  void (*operand[2])(t_div*) = {integer, decimale};
    (void)operand;
}

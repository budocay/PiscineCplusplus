/*
** main.c for main in /home/lina_a/rendu/B3/piscine_cpp_d01/ex01/src
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Wed Jan  6 14:01:28 2016 lina_a
** Last update Wed Jan  6 14:01:28 2016 lina_a
*/

#include <math.h>
#include <stdio.h>

void menger(int size_square, int depth);

int     my_getnbr(char *str)
{
  int   nb;
  int   i;
  int   sign;

  if (str == NULL)
    return (0);
  i = 0;
  sign = 0;
  nb = 0;
  while (str[i] && (str[i] == '-' || str[i] == '+'))
    if (str[i] == '-')
      {
	sign++;
	i++;
      }
  while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
      nb = (nb * 10) + (str[i] - 48);
      i++;
    }
  return (((sign % 2) == 1) ? ((nb) * (-1)) : (nb));
}

int	main(int ac, char **av)
{
  if (ac != 3)
    {
      dprintf(2, "Invaid Arguments\n");
      return (0);
    }
  menger(my_getnbr(av[1]), my_getnbr(av[2]));
  return (0);
}

/*
** tab_to_2dtab.c for tabv in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d02m/ex02
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Thu Jan  7 10:14:54 2016 lina_a
** Last update Thu Jan  7 10:14:54 2016 lina_a
*/

#include <stdlib.h>
#include <stdio.h>

void	tab_to_2dtab(int *tab, int length, int width, int ***res)
{
  int	i;
  int	j;

  if (((*res) = malloc(sizeof(int**) * length)) == NULL)
    return;
  for (i = 0; i < length; i++)
    {
      if (((*res)[i] = malloc(sizeof(***res) * width)) == NULL)
	return;
      for (j = 0; j < width; j++)
	(*res)[i][j] = tab[i * width + j];
    }
}

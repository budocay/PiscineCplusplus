/*
** mem_ptr.c for mem_ptr in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d02m/ex01
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Thu Jan  7 09:47:20 2016 lina_a
** Last update Thu Jan  7 09:47:20 2016 lina_a
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mem_ptr.h"

void	add_str(char *str1, char *str2, char **res)
{
  if (str1 == NULL || str2 == NULL)
    return;
  if ((*res = malloc(sizeof(char) + strlen(str1) + strlen(str2))) == NULL)
    return;
  if ((strcpy(*res, str1)) == NULL)
    return;
  if ((strcat(*res, str2)) == NULL)
    return;
}

void	add_str_struct(t_str_op* str_op)
{
  add_str(str_op->str1, str_op->str2, &(str_op->res));
}

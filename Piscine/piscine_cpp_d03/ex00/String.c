/*
** String.c for string in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d03/ex00
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Fri Jan  8 09:14:45 2016 lina_a
** Last update Fri Jan  8 09:14:45 2016 lina_a
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "String.h"

void    StringInit(String *this, char const *s)
{
  char	*ret_dup = NULL;

  if (this != NULL)
    {
      if (s == NULL)
	this->str = NULL;
      else if ((ret_dup = strdup(s)) == NULL)
	{
	  dprintf(2, "%m\n");
	  return;
	}
      this->str = ret_dup;
      this->StringDestroy = &StringDestroy;
    }
}

void    StringDestroy(String *this)
{
  free(this->str);
}

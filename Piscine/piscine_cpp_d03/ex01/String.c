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

static void	assign_s(String *this, String const *str)
{
    char *s = NULL;

    if (this == NULL || str == NULL || this->str == NULL)
      return;
    if ((s = strdup(this->str)) == NULL)
      return ;
    if (this->str != NULL)
      free(this->str);
    this->str = s;
    return ;
}

static void	assign_c(String *this, char const *str)
{
    char *assign_my_var = NULL;

    if (this == NULL || str == NULL || this->str == NULL)
      return;
    if ((assign_my_var = strdup(str)) == NULL)
      return;
    if (this->str != NULL)
        free(this->str);
    this->str = assign_my_var;
}

void    StringDestroy(String *this)
{
  free(this->str);
}

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
      this->assign_s = &assign_s;
      this->assign_c = &assign_c;
    }
}

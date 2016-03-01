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

static	char	at(String *this, size_t pos)
{
  int	size;

  if (this->str == NULL || this == NULL)
    return (-1);
    size = strlen(this->str);
  if ((int)pos >= 0 && (int)pos < size)
    return (this->str[(int)pos]);
  else
    return (-1);
}

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

static void	append_s(String *this, String const *ap)
{
  char	*ctc, *ctc2 = NULL;

  if (this == NULL || ap == NULL || this->str == NULL)
    return;
  if (this->str == NULL)
    assign_s(this, ap);
  else if (ap->str == NULL)
    return;
  else
    {
      if ((ctc = malloc(sizeof(char) * (strlen(this->str) + strlen(ap->str) + 1))) == NULL)
	return;
      ctc = strcpy(ctc, this->str);
      ctc2 = strdup(ap->str);
      free(this->str);
      this->str = strcat(ctc, ctc2);
      free(ctc);
    }
}

static void	append_c(String *this, char const *ap)
{
  char	*ptr, *ptr2 = NULL;

  if (this == NULL || ap == NULL || this->str == NULL)
    return;
  if (this->str == NULL)
    assign_c(this, ap);
  else
    {
      if ((ptr = malloc(sizeof(char) * (strlen(this->str) + strlen(ap) + 1))) == NULL)
	return;
      ptr = strcpy(ptr, this->str);
      ptr2 = strdup(ap);
      free(this->str);
      this->str = strcat(ptr2, ptr);
      free(ptr);
    }
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
      this->append_c = &append_c;
      this->append_s = &append_s;
      this->at = &at;
    }
}

void    StringDestroy(String *this)
{
  free(this->str);
}

int	main()
{
  String toto;

  StringInit(&toto, NULL);
  toto.at(&toto, 0);
  StringDestroy(&toto);
}

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

void	insert_c(String *this, size_t pos, char const *str)
{
  if (this == NULL || this->str == NULL || str == NULL)
    return;

  return;
}

vodi	insert_s(String *this, size_t pos, String const *str)
{
  if (this == NULL || this->str == NULL || str == NULL)
    return;
  return;
}

int	find_c(String *this, char const *str, size_t pos)
{
  unsigned int	c;
  unsigned int	len;
  int	ct;

  if (this == NULL || str == NULL || pos > strlen(this->str) || str == NULL)
    return -1;
  c = 0;
  len = strlen(this->str) - pos;
  ct = 1;
  while (c != len && ct != 0)
    {
      ct = strncmp(this->str + c + pos, str, strlen(str));
      c++;
    }
  if (ct == 0)
    return (c + pos -1);
  else
    return (-1);
}

int	find_s(String *this, const String *str, size_t pos)
{
  unsigned int	c;
  unsigned int	len;
  int	ct;

  if (this == NULL || str == NULL || pos > strlen(this->str) || str->str == NULL)
    return -1;
  c = 0;
  len = strlen(this->str) - pos;
  ct = 1;
  while (c != len && ct != 0)
    {
      ct = strncmp(this->str + c + pos, str->str, strlen(str->str));
      c++;
    }
  if (ct == 0)
    return (c + pos -1);
  else
    return (-1);
}

int	empty(String *this)
{
  if (this == NULL || this->str == NULL)
    return 1;
  else
    return (-1);
}

char const	*c_str(String *this)
{
  if (this == NULL && this->str == NULL)
    return NULL;
  else
    return (char const *)this->str;
}

size_t	copy(String *this, char *s, size_t n, size_t pos)
{
  if (this == NULL && pos >= strlen(this->str))
    return (0);
  else
    {
      strncpy(s, (this->str + (int)pos), (int)n);
      return (strlen(this->str - pos));
    }
  return (0);
}

int	compare_s(String *this, const String *str)
{
  return (strcmp(this->str, str->str));
}

int	compare_c(String *this, char const* str)
{
  return (strcmp(this->str, str));
}

int	size(String *this)
{
  if (this == NULL || this->str == NULL)
    return -1;
  else
    return (strlen(this->str));
}

void	clear(String *this)
{
  if (this != NULL && this->str != NULL)
    {
      free(this->str);
      this->str = NULL;
    }
}

char	at(String *this, size_t pos)
{
  int	size = strlen(this->str);

  if ((int)pos >= 0 && (int)pos < size)
    return (this->str[(int)pos]);
  else
    return (-1);
}

static void	assign_s(String *this, String const *str)
{
    char *s = NULL;

    if (this == NULL || str == NULL)
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

    if (this == NULL || str == NULL)
        if ((assign_my_var = strdup(str)) == NULL)
            return;
    if (this->str != NULL)
        free(this->str);
    this->str = assign_my_var;
}

static void	append_s(String *this, String const *ap)
{
  char	*ctc, *ctc2 = NULL;

  if (this == NULL || ap == NULL)
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

  if (this == NULL || ap == NULL)
    return;
  else if (this->str == NULL)
    assign_c(this, ap);
  else
    {
      if ((ptr = malloc(sizeof(char) * (strlen(this->str) + strlen(ap) + 1))) == NULL)
	return;
      ptr = strcpy(ptr, this->str);
      ptr2 = strdup(ap);
      if (this->str != NULL)
	free(this->str);
      this->str = strcat(ptr, ptr2);
      if (ptr2 != NULL)
	free(ptr2);
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
      this->size = &size;
      this->compare_s = &compare_s;
      this->compare_c = &compare_c;
      this->copy = &copy;
      this->c_str = &c_str;
      this->empty = &empty;
      this->find_c = &find_c;
      this->find_s = &find_s;
      this->insert_c = &insert_c;
      this->insert_s = &insert_s;
    }
}

void    StringDestroy(String *this)
{
  if (this->str == NULL || this == NULL)
    return;
  else
    {
      free(this->str);
      this->str = NULL;
    }
}

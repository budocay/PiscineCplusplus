/*
** String.h for string in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d03/ex00
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Fri Jan  8 09:49:59 2016 lina_a
** Last update Fri Jan  8 09:49:59 2016 lina_a
*/

#ifndef STRING_H_
#define STRING_H_

typedef struct String
{
  char *str;
  void (*StringDestroy)(struct String *);
}String;

void    StringInit(String *this, char const *s);
void	StringDestroy(String *this);

#endif /* STRING_H_! */

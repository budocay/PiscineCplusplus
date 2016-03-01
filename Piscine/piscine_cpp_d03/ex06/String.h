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
  void (*append_s)(struct  String *this, struct  String const *ap);
  void (*append_c)(struct  String *this, char const *ap);
  void (*assign_s)(struct  String *this, struct String const *str);
  void (*assign_c)(struct  String *this, char const *str);
  void (*StringDestroy)(struct  String *this);
  char (*at)(struct String *this, size_t pos);
  void (*clear)(struct String *this);
  int  (*size)(struct String *this);
  int (*compare_s)(struct String *this, const struct String *str);
  int (*compare_c)(struct String *this, char const *str);
}String;

void    StringInit(String *this, char const *s);
void	StringDestroy(String *this);
#endif /* STRING_H_! */

/*
** func_ptr.c for func_ptr in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d02m/ex03
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Thu Jan  7 10:52:32 2016 lina_a
** Last update Thu Jan  7 10:52:32 2016 lina_a
*/

#include <stdio.h>
#include <string.h>
#include "func_ptr.h"

void	print_normal(char *str)
{
  printf("%s\n", str);
}

void	print_reverse(char *str)
{
  int	i = strlen(str) - 1;

  while (str[i] != '\0')
    {
      printf("%c", str[i]);
      i--;
    }
  putchar('\n');
}

void	print_upper(char *str)
{
  int	i = 0;

  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	printf("%c", str[i] - 32);
      else
	printf("%c", str[i]);
      i++;
    }
  putchar('\n');
}

void	print_42(char *str)
{
  (void)str;
  printf("42\n");
}

void	do_action(t_action action, char *str)
{
  void(*fct_disp[4])(char*) = {print_normal, print_reverse, print_upper,
			       print_42};
  fct_disp[action](str);
}

int	main()
{
  char	*str = "? SGOERK EHT FO ESNEFED YALP UOY OD";

  do_action(PRINT_REVERSE, str);
}

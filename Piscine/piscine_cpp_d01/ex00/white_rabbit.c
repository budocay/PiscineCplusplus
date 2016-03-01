/*
** white_rabbit.c for white_rabbit in /home/lina_a/rendu/B3/piscine_cpp_d01/ex00
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Wed Jan  6 09:07:33 2016 lina_a
** Last update Wed Jan  6 09:07:33 2016 lina_a
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	follow_the_white_rabbit(void)
{
  long int r = 0;
  long int res_rand = 0;

  while (42)
    {
      r = (random() % 37) + 1;
      res_rand = res_rand + r;
      switch (r)
	{
	case 13:
	case 34 ... 36:
	  printf("droite\n");
	  break;
	case 10:
	case 15:
	case 23:
	  printf("devant\n");
	  break;
	case 4 ... 6:
	case 17:
	case 28:
	  printf("gauche\n");
	  break;
	case 26:
	case 8:
	case 16:
	case 24:
	case 32:
	  printf("derriere\n");
	  break;
	case 37:
	case 1:
	case 397:
	  printf("LAPIN !!!\n");
	  return (res_rand);
	  break;
	default:
	  if (r % 11 != 0)
	    printf("droite\n");
	  if (r >= 18 && r <= 21 )
	      printf("gauche\n");
	  break;
	}
      if (res_rand == 48)
	  printf("derriere\n");
      if (res_rand > 397)
	{
	  printf("Lapin !!!\n");
	  return (res_rand);
	}
    }
  return (res_rand);
}

/*
** drawing.c for drawing in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d01/ex03
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Thu Jan  7 08:25:20 2016 lina_a
** Last update Thu Jan  7 08:25:20 2016 lina_a
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "drawing.h"
#include "bitmap.h"
#include "drawing.h"

void	draw_square(uint32_t **img, t_point *orig, size_t size, uint32_t color)
{

}

int	main(void)
{
  t_bmp_header header;
  t_bmp_info_header info;
  unsigned int *buffer;
  unsigned int **img;
  t_point p = {0, 0};
  size_t size = 64;
  int d;

  buffer = malloc(size * size * sizeof(*buffer));
  img = malloc(size * sizeof(*img));
  memset(buffer, 0, size * size * sizeof(*buffer));
  for (size_t i = 0; i < size; ++i)
    img[i] = buffer + i * size;
  make_bmp_header(&header, size);
  make_bmp_info_header(&info, size);
  draw_square(img, &p, size, 0x0000FFFF);
  p.x = 10;
  p.y = 10;
  draw_square(img, &p, 22, 0x00FF0000);
 d = open("square.bmp", O_CREAT | O_TRUNC | O_WRONLY, 0644);
 write(d, &header, sizeof(header));
 write(d, &info, sizeof(info));
 write(d, buffer, size * size * sizeof(*buffer));
 close(d);
 return EXIT_SUCCESS;
}

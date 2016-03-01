/*
** bitmap.c for bitmap in /home/lina_a/rendu/B3/piscine_cpp_d01/ex02
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Wed Jan  6 18:32:38 2016 lina_a
** Last update Wed Jan  6 18:32:38 2016 lina_a
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "bitmap.h"

uint16_t	swap_uint16(uint16_t val)
{
  return (val << 8) | (val >> 8);
}

void	make_bmp_header(t_bmp_header *header, size_t size)
{
  header->magic = swap_uint16(0x424D);
  header->size = sizeof(t_bmp_header) + sizeof(t_bmp_info_header) +
    (size * size * 4);
  header->_app1 = 0;
  header->_app2 = 0;
  header->offset = sizeof(t_bmp_header) + sizeof(t_bmp_info_header);
}

void	make_bmp_info_header(t_bmp_info_header *header, size_t size)
{
  header->size = sizeof(t_bmp_info_header);
  header->width = size;
  header->height = size;
  header->planes = 1;
  header->bpp = 32;
  header->compression = 0;
  header->raw_data_size = size * size * 4;
  header->h_resolution = 0;
  header->v_resolution = 0;
  header->palette_size = 0;
  header->important_color = 0;
}

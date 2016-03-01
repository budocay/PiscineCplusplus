/*
** bitmap.h for bitmap in /home/lina_a/rendu/B3/piscine_cpp_d01/ex02
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Wed Jan  6 18:28:41 2016 lina_a
** Last update Wed Jan  6 18:28:41 2016 lina_a
*/

#ifndef BITMAP_H_
# define BITMAP_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

typedef struct __attribute__((packed)) t_bmp_header
{
  uint16_t magic;
  uint32_t size;
  uint16_t _app1;
  uint16_t _app2;
  int32_t offset;
}t_bmp_header;

typedef struct __attribute__((packed)) t_bmp_info_header
{
  uint32_t	size;
  int32_t	width;
  int32_t	height;
  uint16_t	planes;
  uint16_t	bpp;
  uint32_t	compression;
  uint32_t	raw_data_size;
  uint32_t	h_resolution;
  uint32_t	v_resolution;
  uint32_t	palette_size;
  uint32_t	important_color;
}t_bmp_info_header;

#endif /* BITMAP_H_!*/

/*
** vertex.c for vertex in /home/lina_a/rendu/B3/Piscine/cpp_SKL/ex_02
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Sat Jan  9 10:32:11 2016 lina_a
** Last update Sat Jan  9 10:32:11 2016 lina_a
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "vertex.h"
#include "raise.h"
#include "new.h"

#define MAX_STR 50

typedef struct
{
  Class base;
  int x, y, z;
  char *__str__;
} VertexClass;

static void Vertex_ctor(Object *self, va_list *args);
static void Vertex_dtor(Object *self);
static const char *Vertex_str(Object *self);
static int checkClass(Object *self);


static VertexClass _description = {
        { sizeof(VertexClass),
          "Vertex",
          &Vertex_ctor,
          &Vertex_dtor,
          &Vertex_str },
        0, 0, 0, NULL
};

static int checkClass(Object *self)
{
  if (self == NULL)
  {
    raise("Invalid null pointer parameter");
    return (0);
  }
  else if (strcmp(((VertexClass*)self)->base.__name__, _description.base.__name__))
  {
    raise("Invalid class parameter");
    return (0);
  }
  return (1);
}

Class* Vertex = (Class*) &_description;

static void Vertex_ctor(Object *self, va_list *args)
{
  if (!checkClass(self))
    return;
  if (args == NULL)
    {
      raise("Invalid NULL pointer for va_list param");
      return;
    }
  ((VertexClass*)self)->x = va_arg(*args, int);
  ((VertexClass*)self)->y = va_arg(*args, int);
  ((VertexClass*)self)->z = va_arg(*args, int);
  if ((((VertexClass*)self)->__str__ = malloc(MAX_STR)) == NULL)
    {
      raise("Impossible to allocate memory for __str__ field");
      return;
    }
  memset(((VertexClass*)self)->__str__, '\0', MAX_STR);
  if (snprintf(((VertexClass*)self)->__str__, MAX_STR, "<Vertex (%d, %d, %d)>",
	       ((VertexClass*)self)->x,  ((VertexClass*)self)->y, ((VertexClass*)self)->z) < 0)
    {
      raise("Unable to generate string form");
      return;
    }
}

static void Vertex_dtor(Object *self)
{
    if (!checkClass(self))
        return;
    if (((VertexClass*)self)->__str__ != NULL)
        free(((VertexClass*)self)->__str__);
}

static const char *Vertex_str(Object *self)
{
    if (!checkClass(self))
        return NULL;
  return ((VertexClass*)self)->__str__;
}

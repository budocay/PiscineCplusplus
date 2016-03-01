/*
** new for cpp_SKL in ${PWD}
**
** Made by pirou_g
** Login   <pirou_g@epitech.net>
**
** Started on     09/01/16 09:08
** Last update Sat Jan  9 09:46:32 2016 pirou_g
*/

#include <stdlib.h>
#include <string.h>
#include "new.h"
#include "raise.h"

void *new(Class *class)
{
    void *obj;

    if (class == NULL)
      {
	raise("Invalid class parameter");
        return (NULL);
      }
    if ((obj = malloc(class->__size__)) == NULL)
      {
	raise("Unable to allocate memory : No more left memory or random malloc ?");
	return (NULL);
      }
    memcpy(obj, class, class->__size__);
    if (((Class *)obj)->__init__ != NULL)
        ((Class *)obj)->__init__(obj);
    return (obj);
}

void delete(Object *ptr)
{
    if (ptr == NULL)
      {
	raise("Invalid NULL pointer parameter");
        return;
      }
    if (((Class *)ptr)->__del__ != NULL)
        ((Class *)ptr)->__del__(ptr);
    free(ptr);
}

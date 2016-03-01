/*
** new for cpp_SKL in ${PWD}
**
** Made by pirou_g
** Login   <pirou_g@epitech.net>
**
** Started on     09/01/16 09:08
** Last update on 09/01/16 09:08
*/

#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "new.h"
#include "raise.h"

Object *va_new(Class *class, va_list *ap)
{
    Object *obj;

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
        ((Class *)obj)->__init__(obj, ap);
    return (obj);
}

Object *new(Class *class, ...)
{
    Object *obj;
    va_list ap;

    va_start(ap, class);
    obj = va_new(class, &ap);
    va_end(ap);
    return (obj);
}

void delete(Object *ptr)
{
    if (ptr == NULL)
        return;
    if (((Class *)ptr)->__del__ != NULL)
        ((Class *)ptr)->__del__(ptr);
    free(ptr);
}

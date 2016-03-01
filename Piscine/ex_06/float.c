/*
** float for cpp_SKL
**
** Made by pirou_g
** Login   <pirou_g@epitech.net>
**
** Started on     09/01/16 14:13
** Last update Sat Jan  9 17:06:20 2016 Adrien Schmouker
*/

#include "raise.h"
#include <stdio.h>
#include <string.h>
#include "float.h"
#include "new.h"

typedef struct
{
  Class base;
  float f;
  char	__str__[51];
} FloatClass;


static void Float_ctor(Object*, va_list *);
static void Float_dtor(Object*);
static const char *Float_str(Object *);
static Object *Float_add(const Object *, const Object *);
static Object *Float_sub(const Object *, const Object *);
static Object *Float_mul(const Object *, const Object *);
static Object *Float_div(const Object *, const Object *);
static bool Float_eq(const Object *, const Object *);
static bool Float_gt(const Object *, const Object *);
static bool Float_lt(const Object *, const Object *);

static FloatClass _description = {
        { 
	  sizeof(FloatClass),
          "Float",
          &Float_ctor,
          &Float_dtor,
          &Float_str,
          &Float_add,
          &Float_sub,
          &Float_mul,
          &Float_div,
          &Float_eq,
          &Float_gt,
          &Float_lt
	},
        0.0, {'\0'}
};

Class* Float = (Class*) &_description;

static int checkClass(const Object *self)
{
    if (self == NULL)
    {
        raise("Invalid null Pointer parameter");
        return (0);
    }
    else if (strcmp(((FloatClass *)self)->base.__name__, _description.base.__name__))
    {
        raise("Invalid class parameter");
        return (0);
    }
    return (1);
}

static bool Float_eq(const Object *self, const Object *other)
{
    if (!checkClass(self) || !checkClass(other))
    {
        raise ("Unable to compare these two objects");
        return (false);
    }
    return ((((FloatClass *)self)->f == ((FloatClass *)other)->f) ? true : false);
}

static bool Float_lt(const Object *self, const Object *other)
{
    if (!checkClass(self) || !checkClass(other))
    {
        raise ("Unable to compare these two objects");
        return (false);
    }
    return ((((FloatClass *)self)->f < ((FloatClass *)other)->f) ? true : false);
}

static bool Float_gt(const Object *self, const Object *other)
{
    if (!checkClass(self) || !checkClass(other))
    {
        raise ("Unable to compare these two objects");
        return (false);
    }
    return ((((FloatClass *)self)->f > ((FloatClass *)other)->f) ? true : false);
}

static Object *Float_add(const Object *self, const Object *other)
{
    FloatClass *c;

    if (!checkClass(self) || !checkClass(other) ||
        (c = new(Float, ((FloatClass *)self)->f + ((FloatClass *)other)->f)) == NULL)
    {
        raise("Unable to add these two objects");
        return (NULL);
    }
    return (c);
}

static Object *Float_sub(const Object *self, const Object *other)
{
    FloatClass *c;

    if (!checkClass(self) || !checkClass(other) ||
        (c = new(Float, ((FloatClass *)self)->f - ((FloatClass *)other)->f)) == NULL)
    {
        raise("Unable to substract these two objects");
        return (NULL);
    }
    return (c);
}

static Object *Float_mul(const Object *self, const Object *other)
{
    FloatClass *c;

    if (!checkClass(self) || !checkClass(other) ||
        (c = new(Float, ((FloatClass *)self)->f * ((FloatClass *)other)->f)) == NULL)
    {
        raise("Unable to multiply these two objects");
        return (NULL);
    }
    return (c);
}

static Object *Float_div(const Object *self, const Object *other)
{
    FloatClass *c;

    if (!checkClass(self) || !checkClass(other) ||
        (c = new(Float, ((FloatClass *)self)->f / ((FloatClass *)other)->f)) == NULL)
    {
        raise("Unable to divide these two objects");
        return (NULL);
    }
    if (((FloatClass *)other)->f == 0.0)
      {
	raise("Cannot divide by zero");
	return (NULL);
      }
    return (c);
}

static const char *Float_str(Object *self)
{
    if (!checkClass(self))
        return (NULL);
    return (((FloatClass *)self)->__str__);
}

static void Float_ctor(Object* self, va_list *args)
{
    if (!checkClass(self))
        return;
    if (args == NULL)
    {
        raise("Invalid NULL Pointer for va_list parameter");
        return;
    }
    ((FloatClass *)self)->f = (float)va_arg(*args, double);
    snprintf(((FloatClass *)self)->__str__, 50, "%f", ((FloatClass *)self)->f);
}

static void Float_dtor(Object* self)
{
    if (!checkClass(self))
        return;
}

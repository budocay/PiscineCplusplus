/*
** int.c for  in /home/querat_g/piscine/cpp_SKL/ex_04
** 
** Made by querat_g
** Login   <querat_g@epitech.net>
** 
** Started on  Sat Jan  9 14:05:16 2016 querat_g
** Last update Sat Jan  9 16:17:58 2016 querat_g
*/

#include <stdio.h>
#include <string.h>
#include "raise.h"
#include "object.h"
#include "int.h"
#include "bool.h"
#include "new.h"

#define MAX_STR_LENGTH 35
#define FORMAT_STR "%d"

typedef struct
{
    Class	base;
    int		Int;
    char	__str__[MAX_STR_LENGTH];
} IntClass;

static const char	*Int_str(Object *);
static void		Int_ctor(Object*, va_list *);
static void		Int_dtor(Object*);
static Object		*Int_add(const Object *, const Object *);
static Object		*Int_sub(const Object *, const Object *);
static Object		*Int_mul(const Object *, const Object *);
static Object		*Int_div(const Object *, const Object *);
static bool		Int_eq(const Object *, const Object *);
static bool		Int_gt(const Object *, const Object *);
static bool		Int_lt(const Object *, const Object *);

static IntClass _description = 
  {
        { 
	  sizeof(IntClass), 
	  "Int",
	  &Int_ctor, 
	  &Int_dtor, 
	  &Int_str, 
	  &Int_add, 
	  &Int_sub, 
	  &Int_mul, 
	  &Int_div, 
	  &Int_eq, 
	  &Int_gt, 
	  &Int_lt
	},
	0, {'\0'}
};

Class* Int = (Class*) &_description;

static int checkClass(const Object *self)
{
    if (self == NULL)
    {
        raise("Invalid null pointer parameter");
        return (0);
    }
    else if (strcmp(((IntClass *)self)->base.__name__, _description.base.__name__))
    {
        raise("Invalid class parameter");
        return (0);
    }
    return (1);
}

static Object		*Int_mul(const Object *self, const Object *other)
{
    IntClass *myInt;
    
    if (!checkClass(self) || !checkClass(other) ||
      (myInt = new(Int, ((IntClass *)self)->Int *
		   ((IntClass *)other)->Int)) == NULL)
    {
      raise("Unable to multiply these two objects");
      return (NULL);
    }
  return (myInt);
}

static Object		*Int_div(const Object *self, const Object *other)
{
  IntClass *myInt;
  
  if (!checkClass(self) || !checkClass(other))
    {  
      raise("Unable to divide these two objects");
      return (NULL);
    }
  if (((IntClass*)other)->Int == 0)
    {
      raise("Division by 0");
      return (NULL);
    }
  myInt = new(Int, ((IntClass *)self)->Int / ((IntClass *)other)->Int);
  return (myInt);
}

static bool		Int_eq(const Object *self, const Object *other)
{
  if (!checkClass(self) || !checkClass(other))
    {
      raise("Unable to compare these two objects");
      return (false);
    }
  return ((((IntClass*)self)->Int == ((IntClass*)other)->Int) ? true : false);
}

static bool		Int_gt(const Object *self, const Object *other)
{
    if (!checkClass(self) || !checkClass(other))
    {
      raise("Unable to compare these two objects");
      return (false);
    }
  return ((((IntClass*)self)->Int > ((IntClass*)other)->Int) ? true : false);
}

static bool		Int_lt(const Object *self, const Object *other)
{
    if (!checkClass(self) || !checkClass(other))
    {
      raise("Unable to compare these two objects");
      return (false);
    }
  return ((((IntClass*)self)->Int < ((IntClass*)other)->Int) ? true : false);
}

static Object *Int_add(const Object *self, const Object *other)
{
    IntClass *point;

    if (!checkClass(self) || !checkClass(other) ||
        (point = new(Int, ((IntClass *)self)->Int + 
		     ((IntClass *)other)->Int)) == NULL)
    {
      raise("Unable to add these two objects");
      return (NULL);
    }
    return (point);
}

static Object *Int_sub(const Object *self, const Object *other)
{
    IntClass *point;

    if (!checkClass(self) || !checkClass(other) ||
        (point = new(Int, ((IntClass *)self)->Int -
		     ((IntClass *)other)->Int)) == NULL)
    {
        raise("Unable to add these two objects");
        return (NULL);
    }
    return (point);
}

static const char *Int_str(Object *self)
{
    if (!checkClass(self))
        return (NULL);
    return (((IntClass *)self)->__str__);
}

static void Int_ctor(Object* self, va_list *args)
{
    if (!checkClass(self))
        return;
    if (args == NULL)
    {
        raise("Invalid NULL pointer for va_list parameter");
        return;
    }
    ((IntClass *)self)->Int = va_arg(*args, int);
    if (snprintf(((IntClass *)self)->__str__, MAX_STR_LENGTH, FORMAT_STR,
                 ((IntClass *)self)->Int) < 0)
    {
        raise("Unable to generate Int form");
        return;
    }
}

static void Int_dtor(Object* self)
{
    if (!checkClass(self))
        return;
}

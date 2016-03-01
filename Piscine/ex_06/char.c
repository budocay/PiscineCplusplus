/*
** char for cpp_SKL
**
** Made by pirou_g
** Login   <pirou_g@epitech.net>
**
** Started on     09/01/16 14:13
** Last update on 09/01/16 14:13
*/

#include "raise.h"
#include <stdio.h>
#include <string.h>
#include "char.h"
#include "new.h"

typedef struct
{
    Class base;
    char c[2];
} CharClass;

static const char *Char_str(Object *);
static void Char_ctor(Object*, va_list *);
static void Char_dtor(Object*);
static Object *Char_add(const Object *, const Object *);
static Object *Char_sub(const Object *, const Object *);
static Object *Char_mul(const Object *, const Object *);
static Object *Char_div(const Object *, const Object *);
static bool Char_eq(const Object *, const Object *);
static bool Char_gt(const Object *, const Object *);
static bool Char_lt(const Object *, const Object *);

static CharClass _description = {
        { sizeof(CharClass),
          "Char",
          &Char_ctor,
          &Char_dtor,
          &Char_str,
          &Char_add,
          &Char_sub,
          &Char_mul,
          &Char_div,
          &Char_eq,
          &Char_gt,
          &Char_lt },
        {0, '\0'}
};

Class* Char = (Class*) &_description;

static int checkClass(const Object *self)
{
    if (self == NULL)
    {
        raise("Invalid null Pointer parameter");
        return (0);
    }
    else if (strcmp(((CharClass *)self)->base.__name__, _description.base.__name__))
    {
        raise("Invalid class parameter");
        return (0);
    }
    return (1);
}

static bool Char_eq(const Object *self, const Object *other)
{
    if (!checkClass(self) || !checkClass(other))
    {
        raise ("Unable to compare these two objects");
        return (false);
    }
    return ((((CharClass *)self)->c[0] == ((CharClass *)other)->c[0]) ? true : false);
}

static bool Char_lt(const Object *self, const Object *other)
{
    if (!checkClass(self) || !checkClass(other))
    {
        raise ("Unable to compare these two objects");
        return (false);
    }
    return ((((CharClass *)self)->c[0] < ((CharClass *)other)->c[0]) ? true : false);
}

static bool Char_gt(const Object *self, const Object *other)
{
    if (!checkClass(self) || !checkClass(other))
    {
        raise ("Unable to compare these two objects");
        return (false);
    }
    return ((((CharClass *)self)->c[0] > ((CharClass *)other)->c[0]) ? true : false);
}

static Object *Char_add(const Object *self, const Object *other)
{
    CharClass *c;

    if (!checkClass(self) || !checkClass(other) ||
        (c = new(Char, ((CharClass *)self)->c[0] + ((CharClass *)other)->c[0])) == NULL)
    {
        raise("Unable to add these two objects");
        return (NULL);
    }
    return (c);
}

static Object *Char_sub(const Object *self, const Object *other)
{
    CharClass *c;

    if (!checkClass(self) || !checkClass(other) ||
        (c = new(Char, ((CharClass *)self)->c[0] - ((CharClass *)other)->c[0])) == NULL)
    {
        raise("Unable to sub these two objects");
        return (NULL);
    }
    return (c);
}

static Object *Char_mul(const Object *self, const Object *other)
{
    CharClass *c;

    if (!checkClass(self) || !checkClass(other) ||
        (c = new(Char, ((CharClass *)self)->c[0] * ((CharClass *)other)->c[0])) == NULL)
    {
        raise("Unable to mul these two objects");
        return (NULL);
    }
    return (c);
}

static Object *Char_div(const Object *self, const Object *other)
{
    CharClass *c;

    if (!checkClass(self) || !checkClass(other) || !((CharClass *)other)->c[0] ||
        (c = new(Char, ((CharClass *)self)->c[0] / ((CharClass *)other)->c[0])) == NULL)
    {
        raise("Unable to div these two objects");
        return (NULL);
    }
    return (c);
}

static const char *Char_str(Object *self)
{
    if (!checkClass(self))
        return (NULL);
    return (((CharClass *)self)->c);
}

static void Char_ctor(Object* self, va_list *args)
{
    if (!checkClass(self))
        return;
    if (args == NULL)
    {
        raise("Invalid NULL Pointer for va_list parameter");
        return;
    }
    ((CharClass *)self)->c[0] = (char)va_arg(*args, int);
}

static void Char_dtor(Object* self)
{
    if (!checkClass(self))
        return;
}

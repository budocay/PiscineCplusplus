#include <stdio.h>
#include <string.h>
#include "point.h"
#include "raise.h"
#include "new.h"

#define MAX_STR_LENGTH 35
#define FORMAT_STR "<Point (%d, %d)>"

typedef struct
{
    Class base;
    int x, y;
    char *__str__;
} PointClass;

static const char *Point_str(Object *);
static void Point_ctor(Object*, va_list *);
static void Point_dtor(Object*);
static Object *Point_add(const Object *, const Object *);
static Object *Point_sub(const Object *, const Object *);

static PointClass _description = {
        { sizeof(PointClass), "Point", &Point_ctor, &Point_dtor, &Point_str, &Point_add, &Point_sub },
        0, 0, NULL
};

Class* Point = (Class*) &_description;

static int checkClass(const Object *self)
{
    if (self == NULL)
    {
        raise("Invalid null pointer parameter");
        return (0);
    }
    else if (strcmp(((PointClass *)self)->base.__name__, _description.base.__name__))
    {
        raise("Invalid class parameter");
        return (0);
    }
    return (1);
}

static Object *Point_add(const Object *self, const Object *other)
{
    PointClass *point;

    if (!checkClass(self) || !checkClass(other) ||
        (point = new(Point, ((PointClass *)self)->x + ((PointClass *)other)->x,
                      ((PointClass *)self)->y + ((PointClass *)other)->y)) == NULL)
    {
        raise("Unable to add these two objects");
        return (NULL);
    }
    return (point);
}

static Object *Point_sub(const Object *self, const Object *other)
{
    PointClass *point;

    if (!checkClass(self) || !checkClass(other) ||
        (point = new(Point, ((PointClass *)self)->x - ((PointClass *)other)->x,
                     ((PointClass *)self)->y - ((PointClass *)other)->y)) == NULL)
    {
        raise("Unable to add these two objects");
        return (NULL);
    }
    return (point);
}

static const char *Point_str(Object *self)
{
    if (!checkClass(self))
        return (NULL);
    return (((PointClass *)self)->__str__);
}

static void Point_ctor(Object* self, va_list *args)
{
    if (!checkClass(self))
        return;
    if (args == NULL)
    {
        raise("Invalid NULL pointer for va_list parameter");
        return;
    }
    ((PointClass *)self)->x = va_arg(*args, int);
    ((PointClass *)self)->y = va_arg(*args, int);
    if ((((PointClass *)self)->__str__ = malloc(MAX_STR_LENGTH)) == NULL)
    {
        raise("Impossible to allocate memory for __str__ field");
        return;
    }
    if (snprintf(((PointClass *)self)->__str__, MAX_STR_LENGTH, FORMAT_STR,
                 ((PointClass *)self)->x, ((PointClass *)self)->y) < 0)
    {
        raise("Unable to generate string form");
        return;
    }
}

static void Point_dtor(Object* self)
{
    if (!checkClass(self))
        return;
    if (((PointClass *)self)->__str__ != NULL)
        free(((PointClass *)self)->__str__);
}

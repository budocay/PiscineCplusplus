#include "raise.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include "array.h"
#include "new.h"
#include "iterator.h"

typedef struct
{
    Container base;
    Class* _type;
    size_t _size;
    Object** _tab;
} ArrayClass;

typedef struct {
    Iterator base;
    ArrayClass* _array;
    size_t _idx;
} ArrayIteratorClass;


void ArrayIterator_ctor(ArrayIteratorClass*, va_list*);
bool ArrayIterator_eq(ArrayIteratorClass*, ArrayIteratorClass*);
static int ArrayIterator_checkClass(const Object *);
static int Array_checkClass(const Object *);
bool ArrayIterator_eq(ArrayIteratorClass* self, ArrayIteratorClass* other);
bool ArrayIterator_gt(ArrayIteratorClass* self, ArrayIteratorClass* other);
bool ArrayIterator_lt(ArrayIteratorClass* self, ArrayIteratorClass* other);
void ArrayIterator_incr(ArrayIteratorClass* self);
Object* ArrayIterator_getval(ArrayIteratorClass* self);
void ArrayIterator_setval(ArrayIteratorClass* self, ...);
void Array_ctor(ArrayClass* self, va_list* args);
void Array_dtor(ArrayClass* self);
size_t Array_len(ArrayClass* self);
Iterator* Array_begin(ArrayClass* self);
Iterator* Array_end(ArrayClass* self);
Object* Array_getitem(ArrayClass* self, ...);
void Array_setitem(ArrayClass* self, ...);



static ArrayClass _descr = {
        { /* Container */
                { /* Class */
                        sizeof(ArrayClass), "Array",
                        (ctor_t) &Array_ctor, (dtor_t) &Array_dtor,
                        NULL, /*str */
                        NULL, NULL, NULL, NULL, /* add, sub, mul, div */
                        NULL, NULL, NULL, /* eq, gt, lt */
                },
                (len_t) &Array_len,
                (iter_t) &Array_begin,
                (iter_t) &Array_end,
                (getitem_t) &Array_getitem,
                (setitem_t) &Array_setitem,
        },
        NULL, 0, NULL
};

Class* Array = (Class*) &_descr;


static ArrayIteratorClass ArrayIteratorDescr = {
        {
                {
                        sizeof(ArrayIteratorClass), "ArrayIterator",
                        (ctor_t) &ArrayIterator_ctor,
                        NULL, /* dtor */
                        NULL, /* str */
                        NULL, NULL, NULL, NULL, /* add, sub, mul, div */
                        (binary_comparator_t) &ArrayIterator_eq,
                        (binary_comparator_t) &ArrayIterator_gt,
                        (binary_comparator_t) &ArrayIterator_lt,
                },
                (incr_t) &ArrayIterator_incr,
                (getval_t) &ArrayIterator_getval,
                (setval_t) &ArrayIterator_setval,
        },
        NULL,
        0
};

static Class* ArrayIterator = (Class*) &ArrayIteratorDescr;

static int ArrayIterator_checkClass(const Object *self)
{
    if (self == NULL)
    {
        raise("Invalid null pointer parameter");
        return (0);
    }
    else if (strcmp(((ArrayIteratorClass *)self)->base.base.__name__, ArrayIteratorDescr.base.base.__name__))
    {
        raise("Invalid class parameter");
        return (0);
    }
    return (1);
}

void ArrayIterator_ctor(ArrayIteratorClass* self, va_list* args)
{
    if (!ArrayIterator_checkClass(self) || args == NULL) {
        raise("Invalid constructor parameter");
        return;
    }
    self->_array = va_arg(args, void *);
    self->_idx = (size_t)va_arg(args, int);
}

bool ArrayIterator_eq(ArrayIteratorClass* self, ArrayIteratorClass* other)
{
    if (!ArrayIterator_checkClass(self) || !ArrayIterator_checkClass(other))
      {
        raise("Invalid parameters for comparison. Wrong classes or not allocated objects");
	return (false);
      }
    return ((self->_array == other->_array && self->_idx == other->_idx) ? true : false);
}

bool ArrayIterator_gt(ArrayIteratorClass* self, ArrayIteratorClass* other)
{
    if (!ArrayIterator_checkClass(self) || !ArrayIterator_checkClass(other) || self->_array != other->_array)
      {
        raise("Invalid parameters for comparison. Wrong classes or not allocated objects");
	return (false);
      }
    return ((self->_array > other->_array && self->_idx == other->_idx) ? true : false);
}

bool ArrayIterator_lt(ArrayIteratorClass* self, ArrayIteratorClass* other)
{
    if (!ArrayIterator_checkClass(self) || !ArrayIterator_checkClass(other) || self->_array != other->_array)
      {
	raise("Invalid parameters for comparison. Wrong classes or not allocated objects");
	return (false);
      }
    return ((self->_array < other->_array && self->_idx == other->_idx) ? true : false);
}

void ArrayIterator_incr(ArrayIteratorClass* self)
{
    if (!ArrayIterator_checkClass(self))
      {
	raise("Invalid parameter for incrementing iterator");
	return ;
      }
    if (self->_array == NULL)
      {
	raise("Non constructed array");
	return ;
      }
    if (self->_idx >= self->_array->_size)
      {
	raise("Try to iterate after the end of the array");
	return ;
      }
    ++self->_idx;
}

Object* ArrayIterator_getval(ArrayIteratorClass* self)
{
    if (!ArrayIterator_checkClass(self))
      {
	raise("Invalid object parameter");
	return ;
      }
    if (!self->_array)
      {
	raise("Not constructed array object");
	return ;
      }
    return (self->_array->_tab[self->_idx]);
}

void ArrayIterator_setval(ArrayIteratorClass* self, ...)
{
    va_list args;

    if (!ArrayIterator_checkClass(self))
      {
	raise("Invalid parameter");
	return ;
      }
    if (self->_array == NULL)
      {
	raise("Not constructed object");
	return ;
      }
    va_start(args, self);
    if (self->_array->_tab[self->_idx] != NULL)
        delete(self->_array->_tab[self->_idx]);
    self->_array->_tab[self->_idx] = va_new(self->_array->_type, &args);
    va_end(args);
}

static int Array_checkClass(const Object *self)
{
    if (self == NULL)
    {
        raise("Invalid null pointer parameter");
        return (0);
    }
    else if (strcmp(((ArrayClass *)self)->base.base.__name__, _descr.base.base.__name__))
    {
        raise("Invalid class parameter");
        return (0);
    }
    return (1);
}

void Array_ctor(ArrayClass* self, va_list* args)
{
    size_t  i;
    va_list copy;

    if (!Array_checkClass(self))
      {
	raise("Invalid constructor parameters");
	return ;
      }
    if (args == NULL)
      {
	raise("Invalid NULL pointer for va_list parameter");
	return ;
      }
    self->_size = (size_t)va_arg(*args, int);
    self->_type = (Class*)va_arg(*args, void*);
    if ((self->_tab = malloc(sizeof(Object *) * self->_size)) == NULL)
      {
	raise("Unable to allocate memory for Object");
	return ;
      }
    for(i = 0; i < self->_size; i++)
    {
        va_copy(copy, *args);
        self->_tab[i] = va_new(self->_type, &copy);
    }
}

void Array_dtor(ArrayClass* self)
{
    unsigned int i = 0;

    if (!Array_checkClass(self))
        return;
    while (i < self->_size)
    {
        if (self->_tab[i] != NULL)
            delete(self->_tab[i]);
        i++;
    }
}

size_t Array_len(ArrayClass* self)
{
    if (self == NULL)
        return (0);
    return self->_size;
}

Iterator* Array_begin(ArrayClass* self)
{
    Iterator *iterator;

    if (!Array_checkClass(self))
      {
	raise("Invalid parameter for generating iterator");
	return NULL;
      }
    if (self->_tab == NULL)
      {
	raise("Not constructed array");
	return NULL;
      }
    if ((iterator = new(ArrayIterator, self, 0)) == NULL)
      {
	raise("Unable to construct iterator");
	return NULL;
      }
    return (iterator);
}

Iterator* Array_end(ArrayClass* self)
{
    Iterator *iterator;

    if (!Array_checkClass(self))
      {
	raise("Invalid parameter for generating iterator");
	return NULL;
      }
    if (self->_tab == NULL)
      {
	raise("Not constructed array");
	return NULL;
      }
    if ((iterator = new(ArrayIterator, self, self->_size - 1)) == NULL)
      {
	raise("Unable to construct iterator");
	return NULL;
      }
    return (iterator);
}

Object* Array_getitem(ArrayClass* self, ...)
{
    va_list arg;
    size_t  i;

    if (!Array_checkClass(self) || self->_tab == NULL)
        return (NULL);
    va_start(arg, self);
    i = va_arg(arg, size_t);
    if (self->_size < i)
      {
	raise("Invalid index");
	return NULL;
      }
    va_end(arg);
    return (self->_tab[i]);
}

void Array_setitem(ArrayClass* self, ...)
{
    size_t i;
    va_list args;

    if (!Array_checkClass(self) || self->_tab == NULL)
      {
	raise("Invalid parameter");
	return ;
      }
    va_start(args, self);
    i = (size_t)va_arg(args, int);
    if (i >= self->_size)
      {
	raise("Invalid Index");
	return ;
      }
    self->_tab[i] = va_new(self->_type, &args);
    va_end(args);
}

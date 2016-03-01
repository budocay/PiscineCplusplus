/*
** list for cpp_SKL
**
** Made by pirou_g
** Login   <pirou_g@epitech.net>
**
** Started on     09/01/16 22:11
** Last update Sun Jan 10 00:18:02 2016 querat_g
*/

#include "raise.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include "list.h"
#include "new.h"
#include "iterator.h"
#include "container.h"

void ListIterator_ctor(ListIteratorClass*, va_list*);
bool ListIterator_eq(ListIteratorClass*, ListIteratorClass*);
static int ListIterator_checkClass(const Object *);
static int checkClass(const Object *);
bool ListIterator_eq(ListIteratorClass* self, ListIteratorClass* other);
bool ListIterator_gt(ListIteratorClass* self, ListIteratorClass* other);
bool ListIterator_lt(ListIteratorClass* self, ListIteratorClass* other);
void ListIterator_incr(ListIteratorClass* self);
Object* ListIterator_getval(ListIteratorClass* self);
void ListIterator_setval(ListIteratorClass* self, ...);
static void List_ctor(ClassList *, va_list *);
static void List_dtor(ClassList *);
static bool	List_eq(const Object*, const Object*);
static Object *List_add(ClassList *, ClassList *);
static size_t List_len(ClassList *);
static Iterator *List_begin(Container *);
static Iterator *List_end(Container *);
static Object *List_get(Container *, ...);
static void List_set(Container *, ...);
static bool List_push_back(ClassList *, ...);
static Object *List_pop_front(ClassList *);

static ClassList _descr = {
        {
                {
                        sizeof(ClassList),
                        "List",
                        (ctor_t) &List_ctor,
                        (dtor_t) &List_dtor,
                        NULL,
                        (binary_operator_t) &List_add,
                        NULL,
                        NULL,
                        NULL,
                        (binary_comparator_t) &List_eq,
                        NULL,
                        NULL
                },
                (len_t) &List_len,
                (iter_t) &List_begin,
                (iter_t) &List_end,
                (getitem_t) &List_get,
                (setitem_t) &List_set
        },
        (pushval_t) &List_push_back,
        (popval_t) &List_pop_front,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
};

static ListIteratorClass _idescr = {
        {
                {
                        sizeof(ListIteratorClass),
                        "ListIterator",
                        (ctor_t) &ListIterator_ctor,
                        NULL,
                        NULL,
                        NULL,
                        NULL,
                        NULL,
                        NULL,
                        (binary_comparator_t) &ListIterator_eq,
                        (binary_comparator_t) &ListIterator_gt,
                        (binary_comparator_t) &ListIterator_lt
                },
                (incr_t) &ListIterator_incr,
                (getval_t) &ListIterator_getval,
                (setval_t) &ListIterator_setval,
        },
        NULL
};

Class *List = (Class*) &_descr;
Class *ListIterator = (Class*) &_idescr;

static int ListIterator_checkClass(const Object *self)
{
    if (self == NULL)
    {
        raise("Invalid null pointer parameter");
        return (0);
    }
    else if (strcmp(((ListIteratorClass *)self)->base.base.__name__, _idescr.base.base.__name__))
    {
        raise("Invalid class parameter");
        return (0);
    }
    return (1);
}

void ListIterator_ctor(ListIteratorClass* self, va_list* args)
{
    if (!ListIterator_checkClass(self) || args == NULL) {
        raise("Invalid constructor parameter");
        return;
    }
    self->_list = va_arg(args, void *);
}

bool ListIterator_eq(ListIteratorClass* self, ListIteratorClass* other)
{
    if (!ListIterator_checkClass(self) || !ListIterator_checkClass(other))
    {
        raise("Invalid parameters for comparison. Wrong classes or not allocated objects");
        return (false);
    }
    return ((self->_list == other->_list) ? true : false);
}

bool ListIterator_gt(ListIteratorClass* self, ListIteratorClass* other)
{
    ClassList *cursor;

    if (!ListIterator_checkClass(self) || !ListIterator_checkClass(other))
    {
        raise("Invalid parameters for comparison. Wrong classes or not allocated objects");
        return (false);
    }
    for (cursor = self->_list->_first; cursor != self->_list; cursor = cursor->_next)
    {
        if (cursor == other->_list)
            return (true);
    }
    return (false);
}

bool ListIterator_lt(ListIteratorClass* self, ListIteratorClass* other)
{
    ClassList *cursor;

    if (!ListIterator_checkClass(self) || !ListIterator_checkClass(other))
    {
        raise("Invalid parameters for comparison. Wrong classes or not allocated objects");
        return (false);
    }
    for (cursor = self->_list->_next; cursor != NULL; cursor = cursor->_next)
    {
        if (cursor == other->_list)
            return (true);
    }
    return (false);
}

void ListIterator_incr(ListIteratorClass* self)
{
    if (!ListIterator_checkClass(self))
    {
        raise("Invalid parameter for incrementing iterator");
        return;
    }
    if (self->_list == NULL)
    {
        raise("Non constructed list");
        return;
    }
    if (self->_list->_next == NULL)
    {
        raise("Try to iterate after the end of the list");
        return;
    }
    self->_list = self->_list->_next;
}

Object* ListIterator_getval(ListIteratorClass* self)
{
    if (!ListIterator_checkClass(self))
    {
        raise("Invalid object parameter");
        return (NULL);
    }
    if (!self->_list)
    {
        raise("Not constructed array object");
        return (NULL);
    }
    return (self->_list->base.__getitem__((Container *)self->_list));
}

void ListIterator_setval(ListIteratorClass* self, ...)
{
    va_list args;

    if (!ListIterator_checkClass(self))
    {
        raise("Invalid parameter");
        return ;
    }
    if (self->_list == NULL)
    {
        raise("Not constructed object");
        return ;
    }
    va_start(args, self);
    if (self->_list->_item != NULL)
        delete(self->_list->_item);
    self->_list->_item = va_new(self->_list->_type, &args);
    va_end(args);
}

static int checkClass(const Object *self)
{
    if (self == NULL)
    {
        raise("Invalid null pointer parameter");
        return (0);
    }
    else if (strcmp(((ClassList *)self)->base.base.__name__, _descr.base.base.__name__))
    {
        raise("Invalid class parameter");
        return (0);
    }
    return (1);
}

static void List_ctor(ClassList *self, va_list *args)
{
    if (!checkClass(self))
    {
        raise("Wrong parameter in constructor of List");
        return;
    }
    if (args == NULL)
    {
        raise("Usage : Type Element");
        return;
    }
    self->_type = (Class*)va_arg(*args, void*);
    if ((self->_item = va_new(self->_type, args)) == NULL)
    {
        raise("Impossible to store the construction element");
        return;
    }
    self->_first = self;
    self->_last = self;
}

static void List_dtor(ClassList *self)
{
    ClassList *cursor, *tmp = NULL;

    if (!checkClass(self))
    {
        raise("Wrong parameter in destructor of List");
        return;
    }
    for (cursor = self; cursor != NULL; cursor = cursor->_next)
    {
        if (tmp != NULL && tmp != self->_first)
            free(tmp);
        tmp = cursor;
        if (cursor->_item != NULL)
            delete(cursor->_item);
    }
    if (tmp != self->_first)
        free(tmp);
}

static bool	List_eq(const Object* self, const Object* other)
{
  ClassList	*sCur;
  ClassList	*oCur;

  if (!checkClass(self) ||
      !checkClass(other))
    {
      raise("NULL pointer exception");
      return (false);
    }
  if ((!(sCur = ((ClassList*)self)->_first)) ||
      (!(oCur = ((ClassList*)other)->_first)))
    {
      if (sCur == oCur) /* deux listes NULL */
	return (true);
      return (false); /* une liste NULL */
    }
  while (sCur != NULL && oCur != NULL)
    {
      if (!eq(sCur, oCur))
	return (false);
      sCur = sCur->_next;
      oCur = oCur->_next;
    }
  if (sCur != NULL || oCur != NULL)
    return (false);

  return (true);
}

static Object *List_add(ClassList *self, ClassList *other)
{
   ClassList *list, *cursor, *cpy;

    if (!checkClass(self) || !checkClass(other) || (list = malloc(sizeof(*list))) == NULL) {
        raise("Impossible to concatenate these two parameters");
        return (NULL);
    }
    memcpy(list, self, sizeof(*list));
    cpy = list;
    for (cursor = self->_next; cursor != NULL; cursor = cursor->_next)
    {
        if ((list->_next = malloc(sizeof(*list))) == NULL)
        {
            raise("Impossible to allocate memory to concatenate these two list");
            return (NULL);
        }
        list = list->_next;
        memcpy(list, cursor, sizeof(*list));
    }
    for (cursor = other; cursor != NULL; cursor = cursor->_next)
    {
        if ((list->_next = malloc(sizeof(*list))) == NULL)
        {
            raise("Impossible to allocate memory to concatenate these two list");
            return (NULL);
        }
        list = list->_next;
        memcpy(list, cursor, sizeof(*list));
    }
    return (cpy);
}

static size_t List_len(ClassList *self)
{
    ClassList *cpy;
    size_t i = 0;

    if (!checkClass(self))
    {
        raise("Impossible to use this parameter");
        return (0);
    }
    for (cpy = self; cpy != NULL; cpy = cpy->_next)
        i++;
    return (i);
}

static Iterator *List_begin(Container *self)
{
    Iterator *iterator;

    if (!checkClass((ClassList *)self) || ((ClassList *)self)->_first == NULL)
    {
        raise("Impossible to use this parameter");
        return (0);
    }
    if ((iterator = new(ListIterator, ((ClassList *)self)->_first)) == NULL) {
        raise("Unable to generate iterator");
        return (NULL);
    }
    return (iterator);
}

static Iterator *List_end(Container *self)
{
    Iterator *iterator;

    if (!checkClass((ClassList *)self))
    {
        raise("Impossible to use this parameter");
        return (0);
    }
    if ((iterator = new(ListIterator, ((ClassList *)self)->_last)) == NULL)
    {
        raise("Unable to generate iterator");
        return (NULL);
    }
    return (iterator);
}

static Object *List_get(Container *self, ...)
{
    Object *item;
    Class *ref;

    if (!checkClass((ClassList *)self) || ((ClassList *)self)->_item == NULL)
    {
        raise("Impossible to use this parameter");
        return (NULL);
    }
    ref = (Class *)((ClassList *)self)->_item;
    if ((item = malloc(ref->__size__)) == NULL)
    {
        raise("Unable to allocate memory");
        return (NULL);
    }
    memcpy(item, ref, ref->__size__);
    return (item);
}

static void List_set(Container *self, ...)
{
    Object *item;
    va_list list;

    va_start(list, self);
    if (!checkClass((ClassList *)self) || ((ClassList *)self)->_type == NULL ||
            (item = va_new(((ClassList *)self)->_type, &list)) == NULL)
    {
        raise("Error durring set this element");
        va_end(list);
        return;
    }
    va_end(list);
    if (((ClassList *)self)->_item != NULL)
        delete(((ClassList *)self)->_item);
    ((ClassList *)self)->_item = item;
}

static bool List_push_back(ClassList *self, ...)
{
    Object *item;
    va_list list;
    ClassList *elem, *cursor;

    va_start(list, self);
    if (!checkClass(self) || self->_type == NULL || (item = va_new(self->_type, &list)) == NULL ||
            (elem = malloc(sizeof(*elem))) == NULL)
    {
        raise("Error during add this element");
        va_end(list);
        return (false);
    }
    va_end(list);
    memcpy(elem, self, sizeof(*elem));
    elem->_item = item;
    elem->_last = elem;
    self->_last->_next = elem;
    elem->_next = NULL;
    for (cursor = self; cursor != NULL; cursor = cursor->_next)
        cursor->_last = elem;
    return (true);
}

static Object *List_pop_front(ClassList *self)
{
    Object *tmp;

    if (!checkClass(self))
    {
        raise("Impossible to use this parameter");
        return (NULL);
    }
    if ((tmp = malloc(((Class *)self->_first->_item)->__size__)) == NULL)
    {
        raise("Unable to allocate memory for copy");
        return (NULL);
    }
    memcpy(tmp, self->_first->_item, ((Class *)self->_first->_item)->__size__);
    return (tmp);
}

/*
** list for cpp_SKL
**
** Made by pirou_g
** Login   <pirou_g@epitech.net>
**
** Started on     09/01/16 22:11
** Last update on 09/01/16 22:11
*/

#ifndef LIST_H
# define LIST_H

# include "container.h"

typedef struct List ClassList;
typedef struct ListIteratorClass ListIteratorClass;
typedef bool (*pushval_t)(ClassList *, ...);
typedef Object* (*popval_t)(ClassList *);

struct List
{
    Container base;
    pushval_t push_back;
    popval_t pop_front;
    Object *_type;
    Object *_item;
    struct List *_first;
    struct List *_next;
    struct List *_last;
};

struct ListIteratorClass
{
    Iterator base;
    ClassList *_list;
};

extern Class* List;

#endif /* LIST_H */

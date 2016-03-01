/*
** simple_btree.c for btree in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d02a/ex00
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Thu Jan  7 15:06:59 2016 lina_a
** Last update Thu Jan  7 15:06:59 2016 lina_a
*/

#include <stdio.h>
#include <stdlib.h>
#include "simple_list.h"

unsigned int	list_get_size(t_list list)
{
  int		elem = 0;

  while (list != NULL)
    {
      list = list->next;
      elem++;
    }
  return (elem);
}

t_bool	list_is_empty(t_list list)
{
  if (list == NULL)
    return TRUE;
  else
    return FALSE;
}

void	list_dump(t_list list)
{
  while (list != NULL)
    {
      printf("%f\n", list->value);
      list = list->next;
    }
}

t_bool		list_add_elem_at_front(t_list *front_ptr, double elem)
{
    t_list	elem_list;

    if ((elem_list = malloc(sizeof(*elem_list))) == NULL)
        return FALSE;
    elem_list->value = elem;
    if (*front_ptr == NULL)
    {
        *front_ptr = elem_list;
        (*front_ptr)->next = NULL;
    }
    else
    {
        elem_list->next = (*front_ptr);
        (*front_ptr) = elem_list;
    }
    return TRUE;
}

t_bool		list_add_elem_at_back(t_list *front_ptr, double elem)
{
    t_list	elem_list_end, cursor;

    if ((elem_list_end = malloc(sizeof(*elem_list_end))) == NULL)
        return FALSE;
    elem_list_end->value = elem;
    elem_list_end->next = NULL;
    if ((*front_ptr) == NULL)
        (*front_ptr) = elem_list_end;
    else
    {
        cursor = (*front_ptr);
        while (cursor->next != NULL)
            cursor = cursor->next;
        cursor->next = elem_list_end;
    }
    return TRUE;
}


t_bool      list_add_elem_at_position(t_list *front_ptr, double elem, unsigned int position)
{
    t_list	elem_to_pos, cpy;
    unsigned  int     i = 1;

    cpy = (*front_ptr);
    if ((elem_to_pos = malloc(sizeof(*elem_to_pos))) == NULL)
        return FALSE;
    if (position <= 0)
    {
        list_add_elem_at_front(front_ptr, elem);
    }
    elem_to_pos->value = elem;
    elem_to_pos->next = NULL;
    while (i <= position)
    {
        cpy = cpy->next;
        if (cpy == NULL)
            return FALSE;
        i++;
    }
    elem_to_pos->next = cpy->next;
    cpy->next = elem_to_pos;
    return TRUE;
}


double  list_get_elem_at_front(t_list list)
{
    t_list elem = list;

    if (elem == NULL)
        return 0;
    else
        return elem->value;
}


double  list_get_elem_at_position(t_list list, unsigned int position)
{
    t_list elem = list;
    unsigned int i = 1;
    if (elem == NULL)
        return 0;
    if (position == 0)
        list_get_elem_at_front(list);
    while (i <= position)
    {
        elem = elem->next;
        if (elem == NULL)
            return 0;
        i++;
    }
    return elem->value;
}

double list_get_elem_at_back(t_list list)
{
    t_list elem = list;
    t_list cursor;

    if (elem == NULL)
        return 0;
    while (elem->next != NULL)
        elem = elem->next;
    cursor = elem;
    return cursor->value;
}

t_bool      list_del_elem_at_front(t_list *front_ptr)
{
    t_list remove_elem_front = *front_ptr;

    if (remove_elem_front == NULL)
        return FALSE;
    *front_ptr = remove_elem_front->next;
    free(remove_elem_front);
    return TRUE;
}

t_bool      list_del_elem_at_back(t_list *front_ptr)
{
    t_list  cursor, tmp;

    cursor = (*front_ptr);
    if (cursor == NULL)
        return FALSE;
    while (cursor->next->next != NULL)
        cursor = cursor->next;
    tmp = cursor;
    free(cursor->next);
    tmp->next = NULL;
    return TRUE;
}

t_bool      list_del_elem_at_position(t_list *front_ptr, unsigned int position)
{
    t_list  elem_to_del_at_pos, tmp;
    unsigned int    i = 0;

    elem_to_del_at_pos = (*front_ptr);
    if (elem_to_del_at_pos == NULL)
        return FALSE;
    while (i < position)
    {
        elem_to_del_at_pos = elem_to_del_at_pos->next;
        i++;
    }
    tmp = elem_to_del_at_pos;
    elem_to_del_at_pos = elem_to_del_at_pos->next;
    tmp->next = elem_to_del_at_pos->next;
    free(elem_to_del_at_pos);
    return TRUE;
}

t_node      *list_get_first_node_with_value(t_list list, double value)
{
    t_list elem = list;

    if (elem == NULL)
        return NULL;
    while (elem != NULL)
    {
        if (elem->value == value)
            return elem;
        elem = elem->next;
    }
    return NULL;
}
/*
** add.c for add in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d02m/ex04
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Thu Jan  7 14:42:39 2016 lina_a
** Last update Thu Jan  7 14:42:39 2016 lina_a
*/

#include <stdio.h>
#include "castmania.h"

int	normal_add(int a, int b)
{
  return (a + b);
}

int	absolute_add(int a, int b)
{
  if (a < 0)
    a = a * -1;
  if (b < 0)
    b = b * -1;
  return (b + a);
}

void	normal(t_add *operation)
{
  ((t_integer_op)operation->add_op).res = nprepormal_add(((t_integer_op)operation->add_op).a, ((t_integer_op)operation->add_op).b);
}

void	absolute(t_add *operation)
{
  ((t_integer_op)operation->add_op).res = absolute_add(((t_integer_op)operation->add_op).a, ((t_integer_op)operation->add_op).b);
}
void	exec_add(t_add *operation)
{
    (void)operation;
  void (*addition[2])(t_add*) = {normal, absolute};
    (void)addition;
}

int main(void)
{
    int i = 5;
    float f = 42.5;
    t_instruction inst;
    t_add add;
    t_div div;
    t_integer_op int_op;

    printf("Affiche i : ");
    exec_instruction(PRINT_INT, &i);
    printf("Affiche f : ");
    exec_instruction(PRINT_FLOAT, &f);
    printf("\n");
    int_op.a = 10;
    int_op.b = 3;
    add.add_type = ABSOLUTE;
    add.add_op = int_op;
    inst.output_type = VERBOSE;
    inst.operation = &add;
    printf("10 + 3 = ");
   /* exec_instruction(ADD_OPERATION, &inst);
    printf("En effet 10 + 3 = %d\n\n", add.add_op.res);
    div.div_type = INTEGER;
    div.div_op = &int_op;
    inst.operation = &div;
    printf("10 / 3 = ");
    exec_instruction(DIV_OPERATION, &inst);
    printf("En effet 10 / 3 = %d\n\n", int_op.res);*/
    return (0);
}
/*
** Exo-1.c for exo in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d09/ex-1
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Thu Jan 14 09:07:42 2016 lina_a
** Last update Thu Jan 14 09:07:42 2016 lina_a
*/

#include <stdlib.h>
#include <stdio.h>
#include "Exo-1.h"


static void CthulhuInitializer(t_cthulhu* this)
{
    this->m_power = 42;
    this->name = "Cthulhu";
    printf("----\n");
    printf("%s %s\n", "Building",this->name);
}

static void KoalaInitializer(t_koala *this, char *_name, char _isALegend)
{

    NewCthulhu();
  this->m_parent.name = _name;
  this->m_isALegend = _isALegend;
  if (_isALegend == 0)
    this->m_parent.m_power = 0;
  else
    this->m_parent.m_power = 42;
  printf("%s %s\n", "Building", this->m_parent.name);
}

t_cthulhu *NewCthulhu()
{
    t_cthulhu *ctl;

    if ((ctl = malloc(sizeof(t_cthulhu))) == NULL)
        return NULL;
    CthulhuInitializer(ctl);
    return ctl;
}

t_koala *NewKoala(char *name, char _isALegend)
{
    t_koala *obj;

    if ((obj = malloc(sizeof(t_koala))) == NULL)
        return NULL;
    KoalaInitializer(obj, name, _isALegend);
    return obj;
}

void    PrintPower(t_cthulhu *this)
{
  printf("%s %d\n", "Power =>",this->m_power);
}

void    Attack(t_cthulhu *this)
{
    if (this->m_power >= 42)
    {
      printf("%s %s\n", this->name, "attacks and destroys the city");
        this->m_power = this->m_power - 42;
    }
    else {
      printf("%s %s\n", this->name, "can't attack, he doesn't have enough power");
        return;
    }
}

void    Sleeping(t_cthulhu *this)
{
  printf("%s %s\n", this->name, "sleeps");
    this->m_power = this->m_power + 42000;
}

void    Eat(t_koala *this)
{
  printf("%s %s\n", this->m_parent.name, "eats");
  this->m_parent.m_power = this->m_parent.m_power + 42;
}

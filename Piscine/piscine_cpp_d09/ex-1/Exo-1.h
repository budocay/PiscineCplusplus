/*
** Exo-1.h for header in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d09/ex-1
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Thu Jan 14 09:05:23 2016 lina_a
** Last update Thu Jan 14 09:05:23 2016 lina_a
*/

#ifndef EXO_H_
#define EXO_H_

typedef struct s_cthulhu
{
    int m_power;
    char *name;

    void (*PrintPower)(struct s_cthulhu *this);
    void (*Attack)(struct s_cthulhu *this);
    void (*Sleeping)(struct s_cthulhu *this);
    void (*CthulhuInitializer)(struct s_cthulhu *this);
}t_cthulhu;

typedef struct s_koala
{
    struct s_cthulhu m_parent;
    char m_isALegend;
    void (*Eat)(struct s_koala *this);
    void (*KoalaInitializer)(struct s_koala* this, char* _name, char _isALegend);
}t_koala;

struct s_cthulhu *NewCthulhu();

#endif
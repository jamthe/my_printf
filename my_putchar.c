/*
** my_putchar.c for my_putchar.c in /home/elbouh_j/bibli
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Wed Oct  8 22:07:31 2014 jamal elbouhali
** Last update Sat Nov 15 17:59:03 2014 jamal elbouhali
*/

#include "my.h"
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

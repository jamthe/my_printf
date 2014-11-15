/*
** my_putstr.c for my_putstr.c in /home/elbouh_j/bibli
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Wed Oct  8 22:18:48 2014 jamal elbouhali
** Last update Sat Nov 15 18:44:22 2014 jamal elbouhali
*/

#include "my.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

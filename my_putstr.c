/*
** my_putstr.c for my_putstr.c in /home/elbouh_j/bibli
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Wed Oct  8 22:18:48 2014 jamal elbouhali
** Last update Sat Nov 15 18:54:57 2014 jamal elbouhali
*/

#include "my.h"
#include <stdlib.h>

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
      return (1);
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

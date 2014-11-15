/*
** my_strlen.c for my_strlen.c in /home/elbouh_j/PSU_2014_my_printf
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sat Nov 15 15:59:41 2014 jamal elbouhali
** Last update Sat Nov 15 18:02:16 2014 jamal elbouhali
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      i = i + 1;
    }
  return (i);
}

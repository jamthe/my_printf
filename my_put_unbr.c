/*
** my_put_unbr.c for unsigned.c in /home/elbouh_j/PSU_2014_my_printf
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sat Nov 15 15:14:07 2014 jamal elbouhali
** Last update Sat Nov 15 17:39:27 2014 jamal elbouhali
*/

#include "my.h"

void	my_put_unbr(unsigned int nb)
{
  int	k;

  k = 1;
  while (nb / k > 9)
    {
      k = k * 10;
    }
  while (k > 0)
    {
      my_putchar((nb / k) % 10 + 48);
      k = k / 10;
    }
}

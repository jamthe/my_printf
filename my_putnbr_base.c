/*
** my_putnbr_base.c for my_base.c in /home/elbouh_j/PSU_2014_my_printf
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sat Nov 15 14:42:14 2014 jamal elbouhali
** Last update Sun Nov 16 20:23:07 2014 jamal elbouhali
*/

#include "my.h"

void		my_putnbr_base(unsigned int nb, char *base)
{
  unsigned int	i;
  int		result;
  int		div;

  div = 1;
  i = my_strlen(base);
  while ((nb / div) >= i)
    div = div * i;
  while (div > 0)
    {
      result = (nb / div) % i;
      my_putchar(base[result]);
      div = div / i;
    }
}

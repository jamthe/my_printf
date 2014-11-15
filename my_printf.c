/*
** my_printf.c for my_printf.c in /home/elbouh_j/PSU_2014_my_printf
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sat Nov 15 16:45:22 2014 jamal elbouhali
** Last update Sat Nov 15 18:55:16 2014 jamal elbouhali
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

void	ch(char *format, int i, va_list ap)
{
  int		j;
  t_list	tab[10];

  j = 0;
  flag(tab);
   while (format[i])
    {
      if (format[i] == '%')
	{
	  i = i + 1;
	  while (j != 10)
	    {
	      if (format[i] == tab[j].c)
		tab[j].dj(ap);
	      j = j + 1;
	    }
	  i = i + 1;
	}
      else
	my_putchar(format[i]);
      i = i + 1;
    }
}

void	my_printf(char *format, ...)
{
  va_list	ap;
  int		i;

  va_start(ap, format);
  i = 0;
  ch(format, i, ap);
  va_end(ap);
}


int	flag(t_list *tab)
{
  tab[0].c = 'c';
  tab[1].c = 's';
  tab[2].c = 'd';
  tab[3].c = 'i';
  tab[4].c = 'o';
  tab[5].c = 'b';
  tab[6].c = '%';
  tab[7].c = 'x';
  tab[8].c = 'X';
  tab[9].c = 'u';
  tab[0].dj = cha;
  tab[1].dj = str;
  tab[2].dj = nbr;
  tab[3].dj = nbr;
  tab[4].dj = oct;
  tab[5].dj = ubin;
  tab[6].dj = per;
  tab[7].dj = hex;
  tab[8].dj = hex2;
  tab[9].dj = unbr;
  return (0);
}

/*
** fonc.c for fonc.c in /home/elbouh_j/PSU_2014_my_printf
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Fri Nov 14 17:04:12 2014 jamal elbouhali
** Last update Sat Nov 15 18:36:50 2014 jamal elbouhali
*/

#include "my.h"
#include <stdarg.h>

int	cha(va_list ap)
{
  my_putchar(va_arg(ap, int));
  return (0);
}

int	str(va_list ap)
{
  my_putstr(va_arg(ap, char*));
  return (0);
}

int	nbr(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
  return (0);
}

int	unbr(va_list ap)
{
  my_put_unbr(va_arg(ap, unsigned int));
  return (0);
}

int	per(va_list ap)
{
  (void)ap;
  my_putchar('%');
  return (0);
}

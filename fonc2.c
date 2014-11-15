/*
** fonc2.c for fonc2.c in /home/elbouh_j/PSU_2014_my_printf
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sat Nov 15 15:35:02 2014 jamal elbouhali
** Last update Sat Nov 15 18:09:09 2014 jamal elbouhali
*/

#include "my.h"
#include <stdarg.h>

int	oct(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "01234567");
  return (0);
}

int	ubin(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "01");
  return (0);
}

int	hex(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
  return (0);
}

int	hex2(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
  return (0);
}

/*
** my.h for my.h in /home/elbouh_j/PSU_2014_my_printf
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Fri Nov 14 17:35:13 2014 jamal elbouhali
** Last update Sat Nov 15 18:49:43 2014 jamal elbouhali
*/

#ifndef MY_H_
# define MY_H_
#include <stdarg.h>

typedef struct s_list
{
  unsigned char	c;
  int	(*dj)(va_list);
}	t_list;

int	cha(va_list ap);
int	str(va_list ap);
int	nbr(va_list ap);
int	unbr(va_list ap);
int	per(va_list ap);
int	oct(va_list ap);
int	ubin(va_list ap);
int	hex(va_list ap);
int	hex2(va_list ap);
void	ch(char *format, int i, va_list ap);
int	flag(t_list *tab);
void	my_putchar(char c);
int	my_putstr(char *str);
void	my_put_nbr(int nb);
void	my_put_unbr(unsigned int nb);
void	my_putnbr_base(unsigned int nb, char *base);
int	my_strlen(char *str);

#endif /* !MY_H_ */

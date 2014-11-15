##
## Makefile for Makefile in /home/elbouh_j/Piscine_C_J11/lib/my
## 
## Made by jamal elbouhali
## Login   <elbouh_j@epitech.net>
## 
## Started on  Mon Oct 20 14:13:07 2014 jamal elbouhali
## Last update Sat Nov 15 17:56:59 2014 jamal elbouhali
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I.

NAME	= libmy.a

SRCS	= my_putchar.c \
	  my_putstr.c \
	  my_put_nbr.c \
	  my_put_unbr.c \
	  my_putnbr_base.c \
	  my_strlen.c \
	  my_printf.c \
	  fonc.c \
	  fonc2.c 

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 ar rc $(NAME) $(OBJS)
	 ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

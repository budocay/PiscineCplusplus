##
## Makefile for akefile in /home/lina_a/Generique_Projetc
## 
## Made by lina_a
## Login   <lina_a@epitech.net>
## 
## Started on  Sat Oct 24 20:32:56 2015 lina_a
## Last update Sat Oct 24 20:32:56 2015 lina_a
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wall -Wextra -Werror -std=gnu99
LDFLAGS = -lm

SRCS	= main.c \
	  menger.c

OBJS	= $(SRCS:.c=.o)

NAME	=  menger

all: $(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean flclean re

NAME		= cthulhu

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g

LDFLAGS		=

SRCS		= main.c Exo-1.c

OBJS		= $(SRCS:.c=.o)

TMPS		= $(SRCS:.c=.c~) Makefile~

RM		= rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS) $(TMPS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

NAME		= test

CXX		= clang++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++03 -g

LDFLAGS		=

SRCS		= main.cpp TacticalMarine.cpp AssaultTerminator.cpp Squad.cpp

OBJS		= $(SRCS:.cpp=.o)

TMPS		= $(SRCS:.cpp=.cpp~) Makefile~

RM		= rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CXX) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS) $(TMPS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

NAME		= test

CXX		= g++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++03 -g

LDFLAGS		=

SRCS		= main.cpp AEnemy.cpp AWeapon.cpp Character.cpp PlasmaRifle.cpp PowerFist.cpp RadScorpion.cpp SuperMutant.cpp

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

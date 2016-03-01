##
## Makefile for make in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d06/ex00
## 
## Made by lina_a
## Login   <lina_a@epitech.net>
## 
## Started on  Mon Jan 11 09:48:07 2016 lina_a
## Last update Mon Jan 11 09:48:07 2016 lina_a
##

RM	= rm -f

NAME	= my_cat

CXX	 = g++

CXXFLAGS = -Wall -Wextra -Werror

SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):	$(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re

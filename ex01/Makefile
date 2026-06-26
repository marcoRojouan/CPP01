# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/24 15:56:01 by mrojouan          #+#    #+#              #
#    Updated: 2026/06/24 16:35:45 by mrojouan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= zombieHorde

CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS			= main.cpp \
				  Zombie.cpp \
				  zombieHorde.cpp

OBJS			= $(SRCS:.cpp=.o)

RM				= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

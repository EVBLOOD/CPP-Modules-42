# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 22:27:51 by sakllam           #+#    #+#              #
#    Updated: 2022/06/30 22:28:25 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cc

SRC =	Bureaucrat.cpp main.cpp
INC = Bureaucrat.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -Wshadow

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
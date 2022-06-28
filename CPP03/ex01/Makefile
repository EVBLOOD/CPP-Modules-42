# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 12:21:18 by sakllam           #+#    #+#              #
#    Updated: 2022/06/28 20:09:10 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

SRC =	ClapTrap.cpp ScavTrap.cpp main.cpp

INC = ClapTrap.hpp ScavTrap.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
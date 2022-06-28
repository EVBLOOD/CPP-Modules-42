# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 18:49:04 by sakllam           #+#    #+#              #
#    Updated: 2022/06/28 20:02:08 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

SRC =	ClapTrap.cpp    DiamondTrap.cpp FragTrap.cpp    ScavTrap.cpp	main.cpp

INC = ClapTrap.hpp    DiamondTrap.hpp FragTrap.hpp    ScavTrap.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
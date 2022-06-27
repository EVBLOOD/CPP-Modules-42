# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 10:42:25 by sakllam           #+#    #+#              #
#    Updated: 2022/06/27 10:43:12 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Humans

SRC =	HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

INC = HumanA.hpp HumanB.hpp Weapon.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
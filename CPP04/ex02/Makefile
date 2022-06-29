# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 21:10:45 by sakllam           #+#    #+#              #
#    Updated: 2022/06/29 12:54:30 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

SRC =	Animal.cpp Cat.cpp    Dog.cpp    main.cpp
INC = Animal.hpp Cat.hpp    Dog.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
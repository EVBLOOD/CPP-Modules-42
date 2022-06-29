# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 21:10:45 by sakllam           #+#    #+#              #
#    Updated: 2022/06/29 11:50:45 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog
SRC =	Animal.cpp Brain.cpp  Cat.cpp    Dog.cpp    main.cpp
INC = Animal.hpp Brain.hpp  Cat.hpp Dog.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
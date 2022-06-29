# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 21:10:45 by sakllam           #+#    #+#              #
#    Updated: 2022/06/29 18:02:11 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cc

SRC =	AMateria.cpp      Character.cpp     Cure.cpp          Ice.cpp           MateriaSource.cpp main.cpp
INC = Character.hpp      ICharacter.hpp     Ice.hpp AMateria.hpp       Cure.hpp           IMateriaSource.hpp MateriaSource.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
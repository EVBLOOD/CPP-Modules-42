# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 21:10:45 by sakllam           #+#    #+#              #
#    Updated: 2022/06/28 22:32:42 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

SRC =	Animal.cpp Cat.cpp    Dog.cpp    main.cpp
INC = Animal.hpp Cat.hpp    Dog.hpp

WRONGNAME = WrongAnimal

WRONGSRC =	WrongAnimal.cpp WrongCat.cpp    Wrongmain.cpp
WRONGINC = WrongAnimal.hpp WrongCat.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

wrong: $(WRONGNAME)

$(WRONGNAME): $(WRONGSRC) $(WRONGINC)
	c++ $(FLAGS) $(WRONGSRC) -o $(WRONGNAME)
$(NAME): $(SRC) $(INC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME) $(WRONGNAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
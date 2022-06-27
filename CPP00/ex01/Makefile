# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 21:47:47 by sakllam           #+#    #+#              #
#    Updated: 2022/06/27 10:23:12 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC =	Contact.cpp  main.cpp  PhoneBook.cpp

INC = Contact.hpp  PhoneBook.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
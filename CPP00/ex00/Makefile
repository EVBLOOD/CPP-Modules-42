# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 21:47:47 by sakllam           #+#    #+#              #
#    Updated: 2022/06/25 21:58:47 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC =	megaphone.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME):
	c++ $(FLAGS) $(SRC) -o $(NAME)
clean:
	rm -rf $(NAME)
fclean: clean
	clean
re: fclean all

.PHONY: all clean fclean re
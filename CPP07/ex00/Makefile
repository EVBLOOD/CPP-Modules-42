# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 10:12:04 by sakllam           #+#    #+#              #
#    Updated: 2022/07/02 10:12:56 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cpp

SRC =	 main.cpp

INC = whatever.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 19:37:27 by sakllam           #+#    #+#              #
#    Updated: 2022/06/30 19:37:59 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cc

SRC =	Bureaucrat.cpp Form.cpp       main.cpp
INC = Bureaucrat.hpp Form.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -Wshadow

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
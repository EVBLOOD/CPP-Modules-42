# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 22:23:13 by sakllam           #+#    #+#              #
#    Updated: 2022/07/01 22:23:38 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cpp

SRC =	A.cpp    B.cpp    Base.cpp C.cpp    main.cpp

INC = A.hpp       B.hpp       Base.hpp    C.hpp       Playing.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 18:20:27 by sakllam           #+#    #+#              #
#    Updated: 2022/06/30 18:20:56 by sakllam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cc

SRC =	Bureaucrat.cpp             Form.cpp                   PresidentialPardonForm.cpp RobotomyRequestForm.cpp    ShrubberyCreationForm.cpp  main.cpp
INC = Bureaucrat.hpp             Form.hpp                   PresidentialPardonForm.hpp RobotomyRequestForm.hpp    ShrubberyCreationForm.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
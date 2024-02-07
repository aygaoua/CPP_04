# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 11:38:53 by azgaoua           #+#    #+#              #
#    Updated: 2024/02/07 15:32:01 by azgaoua          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = run_ex01

OBJS =  Animal.o WrongAnimal.o Dog.o Cat.o WrongCat.o main.o Brain.o

FILES = Animal.cpp WrongAnimal.cpp Dog.cpp Cat.cpp WrongCat.cpp main.cpp Brain.cpp

CXX = c++

RM = rm -rf

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all :  $(NAME)

%.o: %.cpp Dog.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) :  $(OBJS) $(FILES)
	@echo "------>making the ex01<------"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "--------->ex01 Done<---------"

clean:
	@echo " remove $(OBJS)"
	@$(RM) $(OBJS)

fclean:  clean
	@echo " clean --> $(NAME)"
	@$(RM) $(NAME)

re: fclean all
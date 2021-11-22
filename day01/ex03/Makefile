# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 18:08:49 by hgrissen          #+#    #+#              #
#    Updated: 2021/11/21 19:02:57 by hgrissen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Voilence

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CC = clang++  -std=c++98

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : clean all
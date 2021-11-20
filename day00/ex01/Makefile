# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 11:08:00 by hgrissen          #+#    #+#              #
#    Updated: 2021/11/20 21:43:08 by hgrissen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AWESOME_PHONEBOOK

SRC = main.cpp Phonebook.cpp

CC = clang++

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : clean all

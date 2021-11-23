# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 21:09:17 by hgrissen          #+#    #+#              #
#    Updated: 2021/11/23 21:18:11 by hgrissen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = KarenFilter

SRC = main.cpp Karen.cpp

CC = clang++  -std=c++98

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : clean all
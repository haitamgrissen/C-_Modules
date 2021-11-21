# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 11:07:52 by hgrissen          #+#    #+#              #
#    Updated: 2021/11/21 01:19:30 by hgrissen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #




NAME = megaphone

SRC = megaphone.cpp

CC = clang++  -std=c++98

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)
	
fclean : clean

re : clean all


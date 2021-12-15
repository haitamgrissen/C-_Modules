NAME = ala

SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp

CC = clang++  -std=c++98

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)
	
fclean : clean

re : clean all


NAME = Evolution

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp


CC = clang++  -std=c++98

FLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME) $(WRNGNAME)

fclean : clean

re : clean all


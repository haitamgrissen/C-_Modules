
NAME = Evolution

WRNGNAME = EvolutionWrong

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp

WRNGSRC = WrongMain.cpp WrongAnimal.cpp WrongCat.cpp

CC = clang++  -std=c++98

FLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

Wrong : $(WRNGNAME)

$(WRNGNAME) : $(WRNGSRC)
	$(CC) $(FLAGS) $(WRNGSRC) -o $(WRNGNAME)

clean :
	rm -rf $(NAME) $(WRNGNAME)

fclean : clean

re : clean all

Wre : clean Wrong
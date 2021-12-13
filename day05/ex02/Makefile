
NAME = ala

SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp      RobotomyRequestForm.cpp         ShrubberyCreationForm.cpp 


CC = clang++  -std=c++98

FLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME) $(WRNGNAME)

fclean : clean

re : clean all


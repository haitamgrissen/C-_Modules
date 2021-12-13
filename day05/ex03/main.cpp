#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern intern;

	try
	{
		Form *presi =intern.makeForm("shahadat soukna", "Jardat lmakhzen");
		std::cout << *presi << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
std::cout << "-------------" << std::endl;
	try
	{
		Form *presi =intern.makeForm("Shrubbery Creation", "Jardat lmakhzen");
		std::cout << presi->getName() + " for " + presi->getTarget() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
std::cout << "-------------" << std::endl;
	try
	{
		Form *presi =intern.makeForm("Robotomy Request", "Omar");
		std::cout << presi->getName() + " for " + presi->getTarget() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
std::cout << "-------------" << std::endl;
	try
	{
		Form *presi =intern.makeForm("Presidential Pardon", "Daniel");
		std::cout << presi->getName() + " for " + presi->getTarget() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}



	
	return 0;
}
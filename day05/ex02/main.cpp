#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"



int main(void)
{
	Form* merdoukha = new ShrubberyCreationForm("jardet merdoukha");

	Form* shrub = new ShrubberyCreationForm("jardat lmakhzen");
	Form* robot= new RobotomyRequestForm("apex");
	Form* presi = new PresidentialPardonForm("daniel");

	Bureaucrat 	chad("chad omar", 1);
	Bureaucrat	virgin("virgin omar", 140);



	try
	{
		merdoukha->beSigned(virgin);
		robot->beSigned(virgin);
		presi->beSigned(virgin);


		
		virgin.executeForm(*robot);
		virgin.executeForm(*presi);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------" << std::endl;
	std::cout << "------------" << std::endl;

	try
	{
		shrub->beSigned(chad);
		robot->beSigned(chad);
		presi->beSigned(chad);


		chad.executeForm(*merdoukha);
		chad.executeForm(*shrub);
		chad.executeForm(*robot);
		chad.executeForm(*presi);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	
	return 0;
}
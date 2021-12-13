#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Form		bdsm("bdsm Contract", 150, 1);
	Form		NDA("N.D.A", 1, 1);
	Bureaucrat	Chad("chad omar", 1);
	Bureaucrat	Normal("normal omar", 150);



	std::cout << bdsm << std::endl;
	std::cout << NDA << std::endl;
	std::cout << "------------------------" << std::endl;
	try
	{
		NDA.beSigned(Normal);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------" << std::endl;
	try
	{
		bdsm.beSigned(Chad);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------" << std::endl;

	std::cout << bdsm << std::endl;
	std::cout << NDA << std::endl;


	std::cout << "------------------------" << std::endl;
	Chad.signForm(NDA);
	std::cout << NDA << std::endl;
	return 0;
}


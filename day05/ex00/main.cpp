#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat one("extroverted omar", 1);
	Bureaucrat two("normal omar", 150);

	try
	{
		one.ascend();
        std::cout << "hkjbdsjhvbjhsbvhjsdv" << std::endl;
	}
	catch(const std::exception& e)
	{
        std::cout << "-----------" << std::endl;
		std::cout << e.what() << std::endl;
	    std::cout << one << std::endl;
        std::cout << "extroverted omar is the chad of chads" << std::endl;
        std::cout << "-----------" << std::endl;
	}

   

    try
	{
		one.descend();
        std::cout << "-----------" << std::endl;
	    std::cout << one << std::endl;
        std::cout << "its le BIG SAD season" << std::endl;
        std::cout << "-----------" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "-----------" << std::endl;
		std::cout << e.what() << std::endl;
	    std::cout << one << std::endl;
        std::cout << "maybe he is not the chad of chads after all" << std::endl;
        std::cout << "-----------" << std::endl;
	}
	
	try
	{
		two.descend();
	}
	catch(const std::exception& e)
	{
        std::cout << "-----------" << std::endl;
		std::cout << e.what() << std::endl;
        std::cout << two << std::endl;
        std::cout << "to be normal omar it means you are rock_bottom nothing below" << std::endl;
        std::cout << "-----------" << std::endl;
	}

	return 0;
}
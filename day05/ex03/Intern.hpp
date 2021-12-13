#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		struct FormNotFoundException : public std::exception 
		{
			const char * what () const throw () 
			{
				return "Form Not Found";
			}
		};

		static Form*	makeShrub(std::string target);
		static Form*	makeRobot(std::string target);
		static Form*	makePresi(std::string target);
		Form*	makeForm(std::string name, std::string target);
	private:

};
typedef Form* (Intern::*makefunc)(std::string target);
#endif /* ********************************************************** INTERN_H */
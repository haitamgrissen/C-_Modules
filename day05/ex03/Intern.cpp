#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
	{
		
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


Form*	Intern::makeShrub(std::string target)
{
	return (new ShrubberyCreationForm(target));
}
Form*	Intern::makeRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}
Form*	Intern::makePresi(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string name, std::string target)
{

    int i = 0;
    std::string type[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};

	Form* (*funcs[3])(std::string target) =  {Intern::makeShrub, Intern::makeRobot, Intern::makePresi};

    while (name != type[i] && i < 3)
        i++;
	while (i < 3)
		return (funcs[i](target));
	throw Intern::FormNotFoundException();

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
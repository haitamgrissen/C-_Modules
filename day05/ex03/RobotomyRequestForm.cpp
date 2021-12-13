#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestform", 72, 45, target)
{
}




/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
	
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	if (i.getSignState())
		o << i.getName() << " is signed";
	else
		o << i.getName() << " is not signed";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > this->getExecutionGrade())
		throw Form::GradeTooLowException();
	else if (this->getSignState() == false)
		throw Form::NotSignedException();
	else
	{
		if (rand() % 2 == 0)
			std::cout << this->getTarget() << " it's a failure!!" << std::endl;
		else
			std::cout << this->getTarget() << " > has been robotomized successfully" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5, target)
{
}




/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{

	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
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

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > this->getExecutionGrade())
		throw Form::GradeTooLowException();
	else if (this->getSignState() == false)
		throw Form::NotSignedException();
	else
	{
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
#include "Form.hpp"
# include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string const name, int const sign, int const exec) : name(name), signGrade(sign), executionGrade(exec)
{
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	else if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	else
		this->isSigned  = false;
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{

	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
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

Form & 			Form::beSigned(Bureaucrat & bureau)
{
	if (bureau.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	bureau.signForm(*this);
	this->isSigned = true;
	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


	std::string 	Form::getName() const
	{
		return (this->name);
	}

	bool			Form::getSignState() const
	{
		return (this->isSigned);
	}

	int				Form::getSignGrade() const
	{
		return (this->signGrade);

	}

	int 			Form::getExecutionGrade() const
	{
		return (this->executionGrade);

	}
	void 			Form::setSignState()
	{
		this->isSigned = true;;
	}


/* ************************************************************************** */
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade  = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
		return *this;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << " is grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::signForm( Form  & form )
{
	if (form.getSignGrade() >= this->grade)
	{
		form.setSignState();
		std::cout << this->getName() << " has proudly signed " << form.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << std::endl;
		
	}
}

void Bureaucrat::ascend()
{
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::descend()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const	Bureaucrat::getName( void ) const
{
	return this->name;
}

int					Bureaucrat::getGrade( void ) const
{
	return this->grade;
}

/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137, target)
{
}




/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
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

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > this->getExecutionGrade())
		throw Form::GradeTooLowException();
	else if (this->getSignState() == false)
		throw Form::NotSignedException();
	else
	{
		std::ofstream file(this->getTarget()+"_shrubbery");


			file << "           |/ |    |/                    \n";       
			file <<	"	        |/ / |||/  /_/___/_           \n";           
			file << "	         |/   |/ V                    \n";
			file << "	    _|__|_|   |  |_____/_             \n";               
			file << "	           |  | /          /          \n";   
			file << "	  __ _-----`  |{,-----------~         \n";  
			file << "	            V }{                      \n"; 
			file << "	             }{{                      \n";  
			file << "	             }}{                      \n";  
			file << "	             {{}                      \n";            
			file << "	       , -=-~{ .-^- _                 \n";       
			file << "	 ------------------------------       \n";       

			file.close();

	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
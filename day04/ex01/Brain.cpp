#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain " << "Default constructor" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain " << "Copy constructor" << std::endl;
	this->operator=(src);

}

Brain::Brain( std::string *ideas ) 
{
	std::cout << "Brain " << "Ideas constructor" << std::endl;
	for(int i = 0; i < 100; i++)
	{
			this->ideas[i] = ideas[i];
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain " << "Destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for(int i = 0; i < 100; i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	*Brain::getIdeas()
{
	return (this->ideas);
}

/* ************************************************************************** */
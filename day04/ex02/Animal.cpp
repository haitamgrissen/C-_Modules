#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type("")
{
	std::cout << "Animal" << "Default constructor" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal" << "Copy constructor" << std::endl;
	this->operator=(src);
}

Animal::Animal( std::string type ) : type(type)
{
	std::cout << "Animal" << "String constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "this animal is dead" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		//this->_value = rhs.getValue();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			Animal::getType(void) const
{
	return this->type;
}

/* ************************************************************************** */
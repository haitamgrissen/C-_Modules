#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() : type("")
{
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	this->operator=(src);
}


WrongAnimal::WrongAnimal( std::string type ) : type(type)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		//this->_value = rhs.getValue();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		WrongAnimal::makeSound() const
{
	std::cout << "he doesnt make any sound maybe it is defected" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			WrongAnimal::getType(void) const
{
	return this->type;
}

/* ************************************************************************** */
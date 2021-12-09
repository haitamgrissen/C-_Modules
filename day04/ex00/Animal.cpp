#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type("")
{

}

Animal::Animal( const Animal & src )
{
	this->operator=(src);
}

Animal::Animal( std::string type ) : type(type)
{

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

void		Animal::makeSound() const
{
	std::cout << "basic animal noise, Darwing probably happy" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			Animal::getType(void) const
{
	return this->type;
}

/* ************************************************************************** */
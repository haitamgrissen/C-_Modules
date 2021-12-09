#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog " << "Default constructor" << std::endl;
	this->brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog " << "Copy constructor" << std::endl;
	this->brain = new Brain(src.brain->getIdeas());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete(this->brain);
	std::cout << "Dog has died" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		delete(this->brain);
		this->brain = new Brain(rhs.brain->getIdeas());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Dog::makeSound() const
{
	std::cout << "hey?!! what do you expect form a dog, Bark Bark Bark" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain					*Dog::getBrain()const
{
	return (this->brain);
}

/* ************************************************************************** */
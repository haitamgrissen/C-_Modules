#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat " << "Default constructor" << std::endl;
	this->brain = new Brain();
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat " << "Copy constructor" << std::endl;
	this->brain = new Brain(src.brain->getIdeas());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete(this->brain);
	std::cout << "Cat has died" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		delete(this->brain);
		this->brain = new Brain(rhs.brain->getIdeas());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Cat::makeSound() const
{
	std::cout << "Reaaally!? it's you who is going to meooowke a sound  " << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain					*Cat::getBrain()const
{
	return (this->brain);
}

/* ************************************************************************** */
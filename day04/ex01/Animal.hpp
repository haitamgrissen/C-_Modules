#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		Animal( std::string type);
		virtual ~Animal();

		Animal &			operator=( Animal const & rhs );

		std::string			getType()const ;
		void virtual			makeSound()const;
	protected:
		std::string		type;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */
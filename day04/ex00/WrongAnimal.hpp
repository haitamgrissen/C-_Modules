#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		WrongAnimal( std::string type);
		~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );
	
		std::string			getType()const ;
		void			makeSound()const;
	protected:
		std::string		type;
};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ***************************************************** WRONGANIMAL_H */
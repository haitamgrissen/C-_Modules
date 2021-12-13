#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"


class Form;
class Bureaucrat
{

	public:

		Bureaucrat(std::string const name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );



		int					getGrade()const ;
		std::string const 	getName() const;

		void		ascend();
		void		descend();
		void	signForm( Form  & form );
		
	struct GradeTooHighException : public std::exception 
	{
		const char * what () const throw () 
		{
			return "GradeTooHigh";
		}
	};

	struct GradeTooLowException : public std::exception 
	{
		const char * what () const throw () 
		{
			return "GradeTooLow";
		}
	};
	private:
	std::string const		name;
	int						grade;


};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
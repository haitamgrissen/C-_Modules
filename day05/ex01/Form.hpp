#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"



class Bureaucrat;
class Form
{

	public:

		Form(std::string const name, int const sign, int const exec);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		std::string 	getName() const;
		bool			getSignState() const;
		void			setSignState();
		int				getSignGrade() const;
		int 			getExecutionGrade() const;

		Form&			beSigned(Bureaucrat & bureau);
	/// exeptions
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
		std::string const 	name;
		bool				isSigned;
		int		const 		signGrade;
		int		const 		executionGrade;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
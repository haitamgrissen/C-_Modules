#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"
# include <fstream>



class Bureaucrat;

class Form
{

	public:

		Form(std::string const name, int const sign, int const exec, std::string const	target);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		std::string 	getName() const;
		bool			getSignState() const;
		void			setSignState();
		int				getSignGrade() const;
		int 			getExecutionGrade() const;
		std::string		getTarget() const;

		Form&			beSigned(Bureaucrat & bureau);
		virtual void  execute(Bureaucrat const & executor) const = 0;
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
	struct NotSignedException : public std::exception 
	{
		const char * what () const throw () 
		{
			return "Form is currently not signed";
		}
	};
	private:
		std::string const 	name;
		bool				isSigned;
		int		const 		signGrade;
		int		const 		executionGrade;
		std::string const	target;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
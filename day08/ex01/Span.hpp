#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
#include <vector>
#include <iterator>

class Span
{

	public:

		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );


		unsigned int getSize()const;
		std::vector<int> getArr()const;
		struct IsFullException : public std::exception 
		{
			const char * what () const throw () 
			{
				return "Is Full";
			}
		};
	
		struct NoSpanException : public std::exception 
		{
			const char * what () const throw () 
			{
				return "There is No span";
			}
		};

		void	addNumber(int num);
		void	randomFill();
		int 	shortestSpan();
		int 	longestSpan();
	private:
		std::vector<int> arr;
		unsigned int size;

};

std::ostream &			operator<<( std::ostream & o, Span const & n );

#endif /* ************************************************************ SPAN_H */
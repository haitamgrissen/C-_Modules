#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int n) : size(n)
{
	//this->arr = new 
}

Span::Span( const Span & src )
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->size 	= rhs.getSize();
		this->arr 	= rhs.getArr();
	}
	return *this;
}


std::ostream &			operator<<( std::ostream & o, Span const & n )
{
	std::vector<int> arr = n.getArr();
	for (unsigned int i = 0; i < n.getSize(); i++)
	{
		o << arr[i] << "  ";
	}
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int  num) 
{
	if (this->arr.size() >= this->size)
		throw Span::IsFullException();
	else
		this->arr.push_back(num);
}

void	Span::randomFill() 
{
	if (this->arr.size() >= this->size)
		throw Span::IsFullException();
	int cur = this->arr.size();
	srand(time(NULL));
	for (unsigned int i = cur; i < this->size; i++)
	{
		this->addNumber(rand() % 100);
	}
}


int 	Span::shortestSpan()
{
	if (this->arr.size() <= 1)
		throw Span::NoSpanException();
	
	int nextmin = abs(this->arr[1] - this->arr[0]);
	for (int i = 0; i < (int)this->size; i++)
	{
		for (int j = i + 1; j < (int)this->size; j++)
		{
			if (abs(this->arr[j] - this->arr[i]) < nextmin)
				nextmin = abs(this->arr[j] - this->arr[i]);
		}
	}
	return (nextmin);
}

int 	Span::longestSpan()
{
	if (this->arr.size() <= 1)
		throw Span::NoSpanException();
	int min = *std::min_element(this->arr.begin(), this->arr.end());
	int max = *std::max_element(this->arr.begin(), this->arr.end());
	return (max - min);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int Span::getSize()const
{
	return (this->size);
}

std::vector<int> Span::getArr()const
{
	return (this->arr);
}

/* ************************************************************************** */
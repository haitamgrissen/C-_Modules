#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template<typename T>
class Array
{
    private:
        T               *arr;
        unsigned int    len;
    public:
        Array(void);
        Array(unsigned int len);
        Array( Array<T> const & src );
        ~Array();


        Array &		        operator=( Array<T> const & rhs );
        T &		            operator[](unsigned int n);
        T const &		    operator[](unsigned int n) const;




        //*      Member functions      *//

        unsigned int size(void) const;

        //exceptions
        struct OutOfRangeException : public std::exception 
        {
            const char * what () const throw () 
            {
                return "Element Out of Range";
            }
        };
};



                        //Constructors
/*..........................................................................*/

template<typename T>
Array<T>::Array(void)
{
    this->arr = nullptr;
    this->len = 0;
}



template<typename T>
Array<T>::Array(unsigned int n)
{
    this->arr = new T[n];
    this->len = n;
}

template<typename T>
Array<T>::Array( Array<T> const & src )
{
    if (src.len > 0)
    {
        this->len = src.len;
        this->arr = new T[src.len];
        for (size_t i = 0; i < src.len; i++)
        {
            this->arr[i] = src.arr[i];
        }
    }
}


                        //Destructor
/*..........................................................................*/
template<typename T>
Array<T>::~Array()
{
    delete[]this->arr;
}


                        //Operator Overloading
/*..........................................................................*/


template<typename T>
Array<T>&				Array<T>::operator=( Array<T> const & rhs )
{
    if (this->len > 0 && this->arr != nullptr)
        delete[] this->arr;
	if ( rhs.len > 0 && rhs.arr != nullptr)
	{
        this->len = rhs.len;
		this->arr = new T[rhs.len];
        for (size_t i = 0; i < rhs.len; i++)
        {
            this->arr[i] = rhs.arr[i];
        }
	}
    else
    {
        this->arr = nullptr;
        this->len = 0;
    }
	return *this;
}


template<typename T>
T&				Array<T>::operator[](unsigned int n)
{
    if (n > this->len  || this->arr == nullptr)
        throw Array::OutOfRangeException();
	return this->arr[n];
}

template<typename T>
T const &				Array<T>::operator[](unsigned int n) const
{
    if (n > this->len || this->arr == nullptr)
        throw Array::OutOfRangeException();
	return this->arr[n];
}


                        //Member Functions
/*..........................................................................*/







                        //Accessors
/*..........................................................................*/


template<typename T>
unsigned int Array<T>::size(void) const
{
    return (this->len);
}

#endif
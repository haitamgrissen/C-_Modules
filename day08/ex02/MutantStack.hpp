#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack <T,  Container >
{


    protected :
        Container c;
    public :
        typedef typename Container::iterator iterator;


    	MutantStack()
        {

        }
		MutantStack( MutantStack const & src ) : c(src.c) 
        {
           
        }
		virtual ~MutantStack()
        {

        }
		MutantStack &		operator=( MutantStack const & rhs )
        {
            return (this->c.operator=(rhs));
        }
    
    void push(T v)
    {
        this->c.push_back(v);
    }
    void pop()
    {
        this->c.pop_back();
    }
    T& top()
    {
        return (this->c.back());
    }
    size_t size()
    {
        return (this->c.size());
    }

    bool empty() const
    {
        return(this->c.empty());
    }



    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
};

#endif
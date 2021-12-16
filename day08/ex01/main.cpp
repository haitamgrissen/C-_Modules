#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    
    
    try
    {
        sp.randomFill();//uncomment to use RandomFill
        // sp.addNumber(4);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(12);
        //sp.addNumber(11);//is full must be thrown if you uncomment thiis 
    }

    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;;
    }

    std::cout << "Values : " << sp << std::endl;
    std::cout << "shortest span : "<< sp.shortestSpan() << std::endl;
    std::cout <<  "longest span : " <<sp.longestSpan() << std::endl;
}
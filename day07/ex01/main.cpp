#include <string>
#include <iostream>
#include "Iter.hpp"





// class Awesome
// {
//     public:
//         Awesome( void ) : _n( 42 ) { return; }
//         int get( void ) const { return this->_n; }
//     private:
//         int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }


// int main() {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//     Awesome tab2[5];
//     iter( tab, 5, print );
//     iter( tab2, 5, print );
//     return 0;
// }


template<typename T>
void f(T const & a)
{
    std::cout << a << std::endl;
}

int main()
{
    char c[6] = "chars";
    std::string str[3] = {"hello", "nizar", "bogoss"};
    int a[5] = {1, 2, 3, 4, 5};

    iter(a, 5, f);

    std::cout << "-----" << std::endl;

    iter(str, 3, f);

    std::cout << "-----" << std::endl;

    iter(c, 5, f);
} 
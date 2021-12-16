#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <string>
#include <random>

#include <iterator>
#include <iostream>
#include <vector>

template<typename T>
std::string easyfind(T &cont, int x)
{
    typename T::iterator i;
    i = std::find(cont.begin(), cont.end(), x);
    if (i != cont.end())
        return ("Found element "); 
    return ("Couldn't find ");
}

#endif
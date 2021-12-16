# include "easyfind.hpp"

#include <array>

int main()
{
    std::vector<int> myVector;
    std::array<int, 10> myArray;
    srand((unsigned)time(NULL));  
    for (int i =0; i < 10; i++)
    {
        int r = rand() % 10;
        myVector.push_back(r);
        std::cout << myVector[i] << " " ;
    }
    std::cout <<  std::endl;
    std::cout << easyfind(myVector, 9) << " " << 9 <<  std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout <<  std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "-----------------------" << std::endl;

    for (int i =0; i < 10; i++)
    {
        int r = rand() % 10;
        myArray[i] = r;
        std::cout << myArray[i] << " " ;
    }

    std::cout <<  std::endl;
    std::cout << easyfind(myArray, 9) <<  " " << 9 << std::endl;
    return 0;
}
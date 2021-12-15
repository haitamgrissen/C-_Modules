#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> a;                                               //empty 
    Array<int> b(MAX_VAL);                                      //specific size
    Array<int> c(20);



    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        b[i] = value;                                           //checking Writing accessor
        if (i < 20)
            c[i] = value;                                       //checking Writing accessor
    }
    

    try
    {
        std::cout << "ARRAY C : " << c[5] << std::endl;         //checking reading accessor
        std::cout << "ARRAY B : " << b[5] << std::endl;         //checking reading accessor
        std::cout << "ARRAY A : " << a[5] << std::endl;         //OUT of Range
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    std::cout << "........................" << std::endl; 
    try
    {
        a = b;
        std::cout << "ARRAY B : " << b[5] << std::endl;
        std::cout << "ARRAY A : " << a[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }




    std::cout << "........................" << std::endl; 
    try
    {
        b[5] = 0;
        std::cout << "ARRAY B : " << b[5] << std::endl;
        std::cout << "ARRAY A : " << a[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}




























// {
//     Array<int> numbers(MAX_VAL);

//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }

//     //numbers[5] = 0;//uncomment to test write access
//     //std::cout << numbers[5] << std::endl; // uncomment to check read access
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
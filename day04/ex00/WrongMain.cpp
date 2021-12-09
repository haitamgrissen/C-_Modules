
# include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();


    std::cout << i->getType() << " " << std::endl;


    i->makeSound(); //will output the WrongAnimal sound!



    meta->makeSound(); //will output the WrongAnimal sound!

    
}
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void)
{
    srand (time(NULL));
    int r = rand() % 3;

    switch(r)
    {
        case 1:
            return (new A());
        case 2:
            return (new B());
        default:
            return (new C());
    }
}


void identify(Base* p)
{
    A* a = dynamic_cast<A*>(p);
    B* b = dynamic_cast<B*>(p);
    C* c = dynamic_cast<C*>(p);
    
    if(a != NULL)
    {
        std::cout << "A" << std::endl;
        return ;
    }
    if(b != NULL)
    {   
        std::cout << "B" << std::endl;
        return ;
    }
    if(c != NULL)
    {
        std::cout << "C" << std::endl;
        return ;
    }
    std::cout << "bad Pointer" << std::endl;

}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return ;
    }
    catch (std::bad_cast & bc)
    {
        //std::cout << bc.what()<< std::endl;
    }
    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return ;
    }
    catch (std::bad_cast & bc)
    {
        //std::cout << bc.what()<< std::endl;
    }
    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return ;
    }
    catch (std::bad_cast & bc)
    {
       // std::cout << bc.what()<< std::endl;
    }
    
}

int main()
{
    Base* p;
    
    p = generate();
    std::cout<< "ptr" << std::endl;
	identify(*p);
    std::cout<< "ref" << std::endl;
    identify(p);
	return 0;
}

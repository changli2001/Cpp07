#include <iostream>
#include "Array.hpp"

int main(int, char**)
{
    std::cout <<  "\n TEST : DEFAULT CONSTRUCTOR \n";
        Array<int> a;
        std::cout << "Size: " << a.size() << std::endl;

    std::cout << "\n TEST : CONSTRUCTOR WITH SIZE \n";
        Array<int> b(100);
        std::cout << "Size: " << b.size() << std::endl;

    for (unsigned int i = 0; i < b.size(); i++)
    {
        b[i] = i * 10;
    }
    std::cout << "Contents of b: ";
    for (unsigned int i = 0; i < b.size(); i++)
    {
        std::cout << b[i] << " ";
    }

    std::cout << "\n TEST : BOUNDS CHECKING (EXCEPTION \n";
    try {
        std::cout << b[999] << std::endl; // out of range
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    //class 1 , which has 3 names
    Array<std::string> name(3);
    name[0] = "salim";
    name[1] = "aman";
    name[2] = "Lol";
    for (size_t i = 0; i < name.size(); i++)
    {
        std::cout << name[i] << std::endl;
    }
    
    Array<std::string> names2(name);

    for (size_t i = 0; i < names2.size(); i++)
    {
        std::cout << names2[i] << std::endl;
    }

    //checking theire adresses;
    for (size_t i = 0; i < name.size(); i++)
    {
        std::cout <<"address of element " << i << " : for {name} -> " << &name[i] << " for {names2} -> " << &names2[i] <<std::endl;
    }

    //const class ;
    const Array<int> const_class(5);
    std::cout << const_class[0] << std::endl;
    std::cout << const_class.size() << std::endl;

}
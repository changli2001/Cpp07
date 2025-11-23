#include <iostream>
#include "iter.hpp"


int main()
{
    std::cout << "############ Print an array of ints #############\n";

    int arr[5] = {-10, 100, 982, 111, 200};
    
    iter(arr, 5, display<int>);

    std::cout << "############ Increment an array of ints and display result #############\n";
    
    iter(arr, 5, increment<int>);
    iter(arr, 5, display<int>);

    std::cout << "######### counting size of a string ##########\n";

    std::string sarr[3] = {"hello", "world", "!"};
    iter(sarr, 0, sizeCounting);
}
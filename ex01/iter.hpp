#pragma once

    #include <iostream>


void    sizeCounting(const std::string &str)
{
    std::cout << str.size() << std::endl;
}

/*This Function increment an arguement*/
template <typename T>
void    increment(T &x)
{
    x++;
}

/*This Function Template display an elements tat is passed as an argument*/
template <typename T>
void    display(const T &x)
{
    std::cout << "[ " << x << " ]" << std::endl;
}

template <typename T , typename F>
void    iter(T *pointer , const size_t size, F funct)
{
    for (size_t i = 0; i < size; i++)
    {
        funct(pointer[i]);
    }
}
#pragma once

    #include <iostream>
    #include <exception>

template <class T>
class Array{
    private:
        T   *array;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& origin);
        Array& operator=(const Array& other);
        ~Array();

        //member functions
        T &operator[](unsigned int index);
        const T &operator[](unsigned int index) const; /*const ver*/
        unsigned int size() const;
};

#include "Array.tpp"
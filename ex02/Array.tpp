#ifndef ARRAY_TPP
#define ARRAY_TPP

    #include "Array.hpp"
    #include <stdexcept>

template <class T>
Array<T>::Array() : array(NULL), _size(0)
{

}

template <class T>
Array<T>::Array(unsigned int n) : _size(n)
{ 
    if(n <= 0)
        return ;
    array = new T[n];
}

template <class T>
Array<T>::Array(const Array& origin) : _size(origin._size)
{
    if (this != &origin)
    {
        array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
        {
            array[i] = origin.array[i];
        }
    }
}

template <class T>
Array<T>&   Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        delete[] array;
        _size = other._size;
        array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
        {
            array[i] = other.array[i];
        }
    }
    return *this;
}

template <class T>
T & Array<T>::operator[](unsigned int index)
{
    if(index < 0 || index >= this->_size)
        throw std::out_of_range("Index out of bounds");
    return (this->array[index]);
}

template <class T>
T & Array<T>::operator[](unsigned int index) const
{
    if(index < 0 || index >= this->_size)
        throw std::out_of_range("Index out of bounds");
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (this->_size);
}

/*Destructor*/
template <typename T>
Array<T>::~Array()
{
    delete[] array;
}

#endif
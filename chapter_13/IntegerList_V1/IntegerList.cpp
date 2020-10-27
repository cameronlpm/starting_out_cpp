// Implementation file for the IntegerList class
#include <iostream>
#include <cstdlib>
#include "IntegerList.h"
using namespace std;

// The constructor sets each element to zero.
IntegerList::IntegerList(int size)
{
    list = new int[size];
    numElements = size;

    for (int index = 0; index < size; index++)
        list[index] = 0;
}

// The destructor releases allocated memory
IntegerList::~IntegerList()
{
    delete[] list;
}

// isValid: a private member function that returns true if the argument
// is a valid subscript, or false otherwise.
bool IntegerList::isValid(int element) const
{
    bool status;

    if (element < 0 || element >= numElements)
        status = false;
    else
        status = true;
    return status;
}

// setElement: a public member function that stores a value in a specific
// element of the list. If an invalid subscript is passed, the program aborts.
void IntegerList::setElement(int element, int value)
{
    if (isValid(element))
        list[element] = value;
    else
    {
        cout << "Error: Invalid subcript\n";
        exit(EXIT_FAILURE);
    }
}

// getElement: a public member function that returns the value stored
// at a specific element. If an invalid subscript is passed, the program aborts.
int IntegerList::getElement(int element) const
{
    if (isValid(element))
        return list[element];
    else
    {
        cout << "Error: Invalid subscript\n";
        exit(EXIT_FAILURE);
    }
}
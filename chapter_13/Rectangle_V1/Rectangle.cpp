// Implementation file for the Rectangle class
#include "Rectangle.h" // needed for the Rectangle class
#include <iostream>
#include <cstdlib> // needed for the exit function
using namespace std;

// setWidth sets the value of the member variable width
void Rectangle::setWidth(double w)
{
    if (w >= 0)
        width = w;
    else
    {
        cout << "Invalid width\n";
        exit(EXIT_FAILURE);
    }
}

// setLength sets the value of the member variable length
void Rectangle::setLength(double l)
{
    if (l >= 0)
        length = l;
    else
    {
        cout << "Invalid length\n";
        exit(EXIT_FAILURE);
    }
}

// getWidth returns the value of the member variable width
double Rectangle::getWidth() const
{
    return width;
}

// getLength returns the value of the member variable length
double Rectangle::getLength() const
{
    return length;
}

// getArea returns the product of the width and length values
double Rectangle::getArea() const
{
    return width * length;
}
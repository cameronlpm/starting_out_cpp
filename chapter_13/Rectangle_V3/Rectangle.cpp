// Implementation file for the Rectangle class
// This version has a constructo.
#include "Rectangle.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// The constructor initializes width and length to 0.0
Rectangle::Rectangle()
{
    width = 0.0;
    length = 0.0;
}

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
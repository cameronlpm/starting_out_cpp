// Implementation file for Rectangle class
// This version has a constructor that accepts arguments.
#include "Rectangle.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// Constructor accepts arguments for width and length
Rectangle::Rectangle(double w, double l)
{
    width = w;
    length = l;
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
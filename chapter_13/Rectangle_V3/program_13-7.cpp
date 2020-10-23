// This program uses the Rectangle class's constructor
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle box; // Define an instance of a Rectangle

    // Display the rectangle's data
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Lenght: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;

    return 0;
}
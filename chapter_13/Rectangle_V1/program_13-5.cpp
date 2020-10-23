// This program uses the Rectangle class, which is declared in
// the Rectangle.h file. The Rectangle class's member functions
// are defined in the Rectangle.cpp file. This program should be
// compiled with those files in a project.
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle box;     // Define an instance of the Rectangle class
    double rectWidth;  // Local var for width
    double rectLength; // Local var for length

    // Get the rectangle's width and length from user
    cout << "This program will calculate the area of a rectangle. ";
    cout << "What is the width? ";
    cin >> rectWidth;
    cout << "What is the length? ";
    cin >> rectLength;

    // Store the width and length values of the rectangle in the box object
    box.setWidth(rectWidth);
    box.setLength(rectLength);

    // Display box's data
    cout << "\nHere is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;

    return 0;
}
// This program demonstrates the Rectangle class
#include <iostream>
using namespace std;

// Rectangle class declaration
class Rectangle
{
private:
    double width;
    double length;

public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

// setWidth assigns a value to the width member variable
void Rectangle::setWidth(double w)
{
    width = w;
}

// setLength assigns a value to the length member variable
void Rectangle::setLength(double l)
{
    length = l;
}

// getWidth returns the value of the width member variable
double Rectangle::getWidth() const
{
    return width;
}

// getLength returns the value of the length member variable
double Rectangle::getLength() const
{
    return length;
}

// getArea returns the product of the width and length member variables
double Rectangle::getArea() const
{
    return width * length;
}

// ***** Function main *****
int main()
{
    Rectangle box;     // Define an instance of the Rectangle class
    double rectWidth;  // Local variable for width
    double rectLength; // Local variable for length

    // Get the rectangle's width and length from the user
    cout << "This program will calculate the area of a rectangle. What is the width? ";
    cin >> rectWidth;
    cout << "What is the length? ";
    cin >> rectLength;

    // Store the width and length values in the box object
    box.setWidth(rectWidth);
    box.setLength(rectLength);

    // Display the rectangle's data
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;

    return 0;
}

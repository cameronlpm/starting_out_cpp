// This program creates three instances of the Rectangle class
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
    double number;     // To hold a number
    double totalArea;  // To hold the total area
    Rectangle kitchen; // To hold kitchen dimensions
    Rectangle bedroom; // To hold bedroom dimensions
    Rectangle den;     // To hold den dimensions

    // Get the kitchen dimensions
    cout << "What is the kitchen's length? ";
    cin >> number;
    kitchen.setLength(number);
    cout << "What is the kitchen's width? ";
    cin >> number;
    kitchen.setWidth(number);

    // Get the bedroom dimensions
    cout << "What is the bedroom's length? ";
    cin >> number;
    bedroom.setLength(number);
    cout << "What is the bedroom's width? ";
    cin >> number;
    bedroom.setWidth(number);

    // Get the den dimensions
    cout << "What is the den's length? ";
    cin >> number;
    den.setLength(number);
    cout << "What is the den's width? ";
    cin >> number;
    den.setWidth(number);
    cout << endl;

    // Calculate the total are of the 3 rooms
    totalArea = kitchen.getArea() + bedroom.getArea() + den.getArea();

    cout << "The total are of the kitchen, bedroom, and den is: " << totalArea << endl;

    return 0;
}
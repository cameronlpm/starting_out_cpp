// This program uses smart pointers to allocate 3 instances of the Rectangle class
#include <iostream>
#include <memory>
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
    double number;    // To hold a number
    double totalArea; // To hold the total area

    // Dynamically allocate the objects
    unique_ptr<Rectangle> kitchen(new Rectangle);
    unique_ptr<Rectangle> bedroom(new Rectangle);
    unique_ptr<Rectangle> den(new Rectangle);

    // Get the kitchen's dimensions
    cout << "What is the kitchen's length? ";
    cin >> number;
    kitchen->setLength(number);
    cout << "What is the kitchen's width? ";
    cin >> number;
    kitchen->setWidth(number);

    // Get the bedroom's dimensions
    cout << "What is the bedroom's length? ";
    cin >> number;
    bedroom->setLength(number);
    cout << "What is the bedroom's width? ";
    cin >> number;
    bedroom->setWidth(number);

    // Get the den's dimensions
    cout << "What is the den's length? ";
    cin >> number;
    den->setLength(number);
    cout << "What is the den's width? ";
    cin >> number;
    den->setWidth(number);
    cout << endl;

    // Calculate total area
    totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

    cout << "Total area of the three rooms: " << totalArea << endl;

    return 0;
}
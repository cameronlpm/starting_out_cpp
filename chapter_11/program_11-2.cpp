// This program stores data about a circle in a structure.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Constant for pi
const double PI = 3.14159;

// Structure declaration
struct Circle
{
    double radius;
    double diameter;
    double area;
};

int main()
{
    Circle c;

    // Get the circle's diameter
    cout << "Enter the diameter of the circle: ";
    cin >> c.diameter;

    // Calculate the circle's radius
    c.radius = c.diameter / 2;

    // Calculate the circle's area
    c.area = PI * pow(c.radius, 2.0);

    // Display the circle data
    cout << fixed << showpoint << setprecision(2);
    cout << "The radius and area of the circle are:\n";
    cout << "Radius: " << c.radius << endl;
    cout << "Area: " << c.area << endl;

    return 0;
}
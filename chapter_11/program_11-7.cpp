// This program uses a function to return a structure
// This is a modification of program_11-2.cpp
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Const for pi
const double PI = 3.14159;

// Structure declaration
struct Circle
{
    double radius;
    double diameter;
    double area;
};

// Function Prototype
Circle getInfo();

int main()
{
    Circle c;

    // Get data about the circle
    c = getInfo();

    // Calculate the circle's area
    c.area = PI * pow(c.radius, 2.0);

    // Display the data
    cout << "The radius and the area of the circle are:\n";
    cout << fixed << setprecision(2);
    cout << "Radius: " << c.radius << endl;
    cout << "Area: " << c.area << endl;

    return 0;
}

// Function getInfo gets data from the user, stores it in a local variable,
// then calculates the radius of the circle and returns the Circle structure
Circle getInfo()
{
    Circle tempCircle; // Temporary structure variable

    // Store circle data in the temporary variable
    cout << "Enter the diameter of a circle: ";
    cin >> tempCircle.diameter;
    tempCircle.radius = tempCircle.diameter / 2.0;

    // Return the temporary variable
    return tempCircle;
}
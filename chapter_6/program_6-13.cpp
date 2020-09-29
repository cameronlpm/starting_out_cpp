// Demonstrates two value-returning functions.
#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes
double getRadius();
double square(double);

int main()
{
    const double PI = 3.14159;
    double radius;
    double area;

    // Numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // Get radius of circle
    cout << "This program calculates the area of a circle\n";
    radius = getRadius();

    // Calculate the area of the circle
    area = PI * square(radius);

    // Display the area
    cout << "The area is " << area << endl;

    return 0;
}

// Definition of function getRadius which gets the radius of a circle
double getRadius()
{
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    return radius;
}

// Definition of function square which returns the square of a double
double square(double num)
{
    return num * num;
}

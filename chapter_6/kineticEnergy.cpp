// Calculate the amount of kinetic energy that an object has
// Formula: KE = (1/2)mv^2
#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes
double kineticEnergy(double, double);

int main()
{
    double KE; // kinetic energy
    double m;  // object mass (kilograms)
    double v;  // object velocity (meters per second)

    cout << "Enter the mass (kilograms) of the object: ";
    cin >> m;
    cout << "Enter the velocity (meters per second) of the object: ";
    cin >> v;

    KE = kineticEnergy(m, v);
    cout << "The kinetic energy of the object is: " << KE << endl;
}

// Function kineticEnergy calculates and returns an object's kinetic energy
double kineticEnergy(double m, double v)
{
    return (0.5 * m * (v * v)); // KE = (1/2)mv^2
}
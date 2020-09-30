#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes
double fallingDistance(int);

int main()
{
    cout << fixed << showpoint << setprecision(2);

    for (int i = 1; i < 11; i++)
    {
        cout << "Object has fallen " << fallingDistance(i) << " meters in " << i << " seconds." << endl;
    }

    return 0;
}

// Function fallingDistance acepts an object's falling time (in seconds) as an arg
// It returns the distance (in meters) that the object has fallen during the time interval
double fallingDistance(int t)
{
    const double g = 9.8; // gravity constant

    return 0.5 * g * (t * t); // evaluates to distance object has fallen in t time
}
// Miles per Gallon
// Write a program that calculates a car’s gas mileage. The program should ask the user to enter the
// number of gallons of gas the car can hold and the number of miles it can be driven on a full tank. It
// should then display the number of miles that may be driven per gallon of gas.
#include <iostream>
using namespace std;

int main()
{
    int maxGallons;
    int milesPerGallon;
    int totalMilesPerTank;

    cout << "Enter the number of gallons that your car's gas tank holds: ";
    cin >> maxGallons;

    cout << "Enter the number of miles you can drive on a full tank of gas: ";
    cin >> totalMilesPerTank;

    milesPerGallon = totalMilesPerTank / maxGallons;
    cout << "Your gas mileage is " << milesPerGallon << " miles per gallon.\n";

    return 0;
}
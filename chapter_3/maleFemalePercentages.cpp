// Write a program that asks the user for the number of males and the number of females registered in a class. The program should display the percentage of males and females in the class.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double numMales, numFemales;

    cout << "Enter the number of males in the class: ";
    cin >> numMales;
    cin.ignore();
    cout << "Enter the number of females in the class: ";
    cin >> numFemales;
    cin.ignore();

    cout << setprecision(2) << fixed << showpoint;
    double malePercentage = static_cast<double>((numMales) / (numMales + numFemales));
    double femalePercentage = static_cast<double>((numFemales) / (numMales + numFemales));
    cout << "The percentage of males in the class: " << malePercentage << endl;
    cout << "The percentage of females in the class: " << femalePercentage << endl;

    return 0;
}
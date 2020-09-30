// Calculate the 10yr present value of an investment amount
// Present Value = F / (1+r)^n
// F is future value; r is annual interest rate; n is number of years
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Prototype
double presentValue(double, float, int);

int main()
{
    double PV;
    double F;
    float r;
    int n;

    cout << "Enter the future amount you'd like to attain: ";
    cin >> F;
    cout << "Enter the annual interest rate: ";
    cin >> r;
    cout << "Enter the number of years you plan to invest: ";
    cin >> n;

    cout << fixed << showpoint << setprecision(2);
    cout << "Present Value: " << presentValue(F, r, n) << endl;
}

double presentValue(double F, float r, int n)
{
    return (F / pow((1 + r), 2.0));
}
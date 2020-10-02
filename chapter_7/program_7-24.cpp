// This program stores, in two vectors, the hours worked and hourly pay rates of 5 employees
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5;
    vector<int> hours(NUM_EMPLOYEES);
    vector<double> payRate(NUM_EMPLOYEES);
    int index;

    // Input data
    cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees and their hourly rates.\n";
    for (index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Hours worked by employee #" << (index + 1) << ": ";
        cin >> hours[index];
        cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        cin >> payRate[index];
    }

    // Display data
    cout << "\nHere is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Employee #" << (index + 1) << ": $" << (hours[index] * payRate[index]) << endl;
    }

    return 0;
}
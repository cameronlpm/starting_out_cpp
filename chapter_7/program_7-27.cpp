// This program stores, in two arrays, the hours worked by 5 employees, and their hourly rates
// Makes use of the vector push_back method
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    vector<int> hours;
    vector<double> payRate;
    int numEmployees;
    int index;

    // Get number of employees
    cout << "How many employees do you have? ";
    cin >> numEmployees;

    // Get payroll data
    cout << "Enter the hours worked by " << numEmployees << " employees and their hourly pay rates.\n";
    for (index = 0; index < numEmployees; index++)
    {
        int tempHours;
        int tempRate;

        cout << "Number of hours worked by employee #" << (index + 1) << ": ";
        cin >> tempHours;
        hours.push_back(tempHours);

        cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        cin >> tempRate;
        payRate.push_back(tempRate);
    }

    // Display each employee's gross pay
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < numEmployees; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1) << ": $" << grossPay << endl;
    }

    return 0;
}
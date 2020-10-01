// This program uses two parallel arrays
// one for hours worked, and another for pay rate
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5;
    int hours[NUM_EMPLOYEES];      // Holds hours worked
    double payRate[NUM_EMPLOYEES]; // Holds pay rates

    // Input hours worked and the hourly pay rate
    cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees and their hourly pay rate.\n";
    for (int idx = 0; idx < NUM_EMPLOYEES; idx++)
    {
        cout << "Hours worked by employee #" << (idx + 1) << ": ";
        cin >> hours[idx];
        cout << "Hourly pay rate for employee #" << (idx + 1) << ": ";
        cin >> payRate[idx];
    }

    // Display each employee's gross pay
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int idx = 0; idx < NUM_EMPLOYEES; idx++)
    {
        double grossPay = hours[idx] * payRate[idx];
        cout << "Employee #" << (idx + 1) << ": $" << grossPay << endl;
    }

    return 0;
}
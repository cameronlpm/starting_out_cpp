// This program stores the hours worked by employees who all make the same hourly wage
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5;
    int hours[NUM_EMPLOYEES];
    double payrate;
    double grossPay;

    // Input hours worked
    cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees who all earn the same hourly rate.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Employee #" << (index + 1) << ": ";
        cin >> hours[index];
    }

    // Input the hourly rate for all employees
    cout << "Enter the hourly pay rate for all the employees: ";
    cin >> payrate;

    // Display each employee's gross pay
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        grossPay = hours[index] * payrate;
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }
    return 0;
}
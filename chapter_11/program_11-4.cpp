// This program calculates and displays payroll data using a single arrays of structs
#include <iostream>
#include <iomanip>
using namespace std;

struct PayInfo
{
    int hours;
    double payRate;
};

int main()
{
    const int NUM_WORKERS = 3;
    PayInfo workers[NUM_WORKERS];
    int index;

    // Get employee pay data
    cout << "Enter the hours worked by " << NUM_WORKERS << " employees and their hourly rates.\n";

    for (index = 0; index < NUM_WORKERS; index++)
    {
        // Get hours worked by an employee
        cout << "Hours worked by employee #" << (index + 1) << ": ";
        cin >> workers[index].hours;

        // Get employee's hourly pay rate
        cout << "Hourly rate for employee #" << (index + 1) << ": ";
        cin >> workers[index].payRate;
        cout << endl;
    }

    // Display each employee's gross pay
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < NUM_WORKERS; index++)
    {
        cout << "Gross pay for employee #" << (index + 1) << ": $";
        cout << workers[index].hours * workers[index].payRate << endl;
    }

    return 0;
}

// This program demonstrates a union
#include <iostream>
#include <iomanip>
using namespace std;

union PaySource
{
    int hours;   // hours worked
    float sales; // sales amount
};

int main()
{
    PaySource employee1; // define a union variable
    char payType;        // to hold employee pay type
    float payRate;       // employee's hourly pay rate
    float grossPay;      // employee's gross pay

    cout << fixed << showpoint << setprecision(2);
    cout << "This program calculates either hourly wages or sales commission.\n";

    // Get the pay type, hourly or commission
    cout << "Etner H for hourly wages or C for commission: ";
    cin >> payType;

    // Determine the gross pay, depending on the pay type
    if (payType == 'H' || payType == 'h')
    {
        // This is an hourly paid employee. Get pay rate and hours worked.
        cout << "What is the hourly pay rate? ";
        cin >> payRate;
        cout << "How many hours were worked? ";
        cin >> employee1.hours;

        // Calculate and display gross pay
        grossPay = employee1.hours * payRate;
        cout << "Gross pay: $" << grossPay << endl;
    }
    else if (payType == 'C' || payType == 'c')
    {
        // This is a commission-paid employee. Get amount of sales.
        cout << "What are the total sales for this employee? ";
        cin >> employee1.sales;

        // Calculate and display the gross pay
        grossPay = employee1.sales * 0.10;
        cout << "Gross pay: $" << grossPay << endl;
    }
    else
    {
        // The user made an invalid selection
        cout << payType << " is not a valid selection.\n";
    }

    return 0;
}
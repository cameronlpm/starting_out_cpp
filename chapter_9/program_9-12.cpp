// This program demonstrates that a pointer may be used as a parameter to accept the address of an array
#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes
void getSales(double *, int);
double totalSales(double *, int);

int main()
{
    const int QTRS = 4;
    double sales[QTRS];

    // Get the sales data for all quarters
    getSales(sales, QTRS);

    // Set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // Display the total sales for the year
    cout << "The total sales for the year are $";
    cout << totalSales(sales, QTRS) << endl;

    return 0;
}

// getSales uses a pointer to accept the address of an array of doubles.
// The user is asked to enter sales figures which are stored in the array.
void getSales(double *arr, int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << "Enter the sales figure for quarter ";
        cout << (index + 1) << ": ";
        cin >> arr[index];
    }
}

// totalSales uses a pointer to accept the address of an array, and
// returns the total of the elements in the array
double totalSales(double *arr, int size)
{
    double sum = 0.0;

    for (int index = 0; index < size; index++)
    {
        sum += *arr;
        arr++;
    }
    return sum;
}
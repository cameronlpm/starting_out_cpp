// This program demonstrates a two-dimensional array
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_DIVS = 3;           // Number of divisions
    const int NUM_QTRS = 4;           // Number of fiscal quarters
    double sales[NUM_DIVS][NUM_QTRS]; // Array with 3 rows, 4 columns
    double totalSales = 0;            // To hold total sales
    int div, qtr;                     // Loop counters

    cout << "This program will calculate the total sales of all the company's divisions.\n";
    cout << "Enter the following sales information:\n\n";

    // Fill array with quarterly sales figures for each division
    for (div = 0; div < NUM_DIVS; div++)
    {
        for (qtr = 0; qtr < NUM_QTRS; qtr++)
        {
            cout << "Division " << (div + 1);
            cout << ", Quarter " << (qtr + 1) << ": $";
            cin >> sales[div][qtr];
        }
        cout << endl;
    }

    // Add all of the sales figures
    for (div = 0; div < NUM_DIVS; div++)
    {
        for (qtr = 0; qtr < NUM_QTRS; qtr++)
        {
            totalSales += sales[div][qtr];
        }
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "The total sales for the company are: $" << totalSales << endl;

    return 0;
}
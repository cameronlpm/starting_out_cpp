// This program totals and averages the sales figures for any number of days.
// The figures are stored in a dynamically allocated array.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double *sales = nullptr;
    double total = 0.0;
    double average;
    int numDays;

    // Get the number of days of sales
    cout << "How many days of sales figures do you wish to process? ";
    cin >> numDays;

    // Dynamically allocate an a rray large enough to hold that many days of sales
    sales = new double[numDays];

    // Get the sales figures for each day
    cout << "Enter the sales figures below.\n";
    for (int index = 0; index < numDays; index++)
    {
        cout << "Day " << (index + 1) << ": ";
        cin >> sales[index];
    }

    // Calculate the total sales
    for (int index = 0; index < numDays; index++)
    {
        total += sales[index];
    }

    // Calculate the average sales per day
    average = total / numDays;

    // Display the results
    cout << fixed << showpoint << setprecision(2);
    cout << "\n\nTotal Sales: $" << total << endl;
    cout << "Average Sales: $" << average << endl;

    // Free dynamically allocated memory
    delete[] sales;
    sales = nullptr;

    return 0;
}
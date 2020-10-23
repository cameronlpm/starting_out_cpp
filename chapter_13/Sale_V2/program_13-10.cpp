// This program uses a constructor's default argument
#include <iostream>
#include <iomanip>
#include "Sale.h"
using namespace std;

int main()
{
    double cost;

    // Get cost of item
    cout << "Enter the cost of the item: ";
    cin >> cost;

    // Create a Sale object for this transaction
    // Specify item cost, but use default tax rate of 5 percent
    Sale itemSale(cost);

    // Set numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // Display the sales tax and total
    cout << "The amount of sales tax is $" << itemSale.getTax() << endl;
    cout << "The total sale amount is $" << itemSale.getTotal() << endl;

    return 0;
}
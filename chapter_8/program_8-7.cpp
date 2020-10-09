// This program produces a sales report and uses STL vectors rather than arrays
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Prototypes
void initVectors(vector<int> &, vector<int> &, vector<double> &);
void calcSales(vector<int>, vector<double>, vector<double> &);
void showOrder(vector<double>, vector<int>);
void dualSort(vector<int> &, vector<double> &);
void showTotals(vector<double>, vector<int>);

int main()
{
    vector<int> id;        // product ID numbers
    vector<int> units;     // units sold
    vector<double> prices; // product prices
    vector<double> sales;  // to hold product sales

    // must provide an initialization routine
    initVectors(id, units, prices);

    // calculate each product's sales
    calcSales(units, prices, sales);

    // sort elementsin the sales array in descending order and
    // shuffle ID numbers in the id array to keep vectors in parallel
    dualSort(id, sales);

    cout << fixed << showpoint << setprecision(2);

    // display products and sales amounts
    showOrder(sales, id);

    // display total units sold and total sales
    showTotals(sales, units);

    return 0;
}

// Function initVectors initializes each vector to a set of starting values
void initVectors(vector<int> &id, vector<int> &units, vector<double> &prices)
{
    // initalize id vector with the ID numbers 914 through 922
    for (int value = 914; value <= 922; value++)
        id.push_back(value);

    // initialize units vector with data
    units.push_back(842);
    units.push_back(416);
    units.push_back(127);
    units.push_back(514);
    units.push_back(437);
    units.push_back(269);
    units.push_back(97);
    units.push_back(492);
    units.push_back(212);

    // initialize prices vector
    prices.push_back(12.95);
    prices.push_back(14.95);
    prices.push_back(18.95);
    prices.push_back(16.95);
    prices.push_back(21.95);
    prices.push_back(31.95);
    prices.push_back(14.95);
    prices.push_back(14.95);
    prices.push_back(16.95);
}

// Function calcSales calculates each product's sales by multiplying its units sold by each unit's price. The result is stored in the sales vector.
void calcSales(vector<int> units, vector<double> prices, vector<double> &sales)
{
    for (int index = 0; index < units.size(); index++)
        sales.push_back(units[index] * prices[index]);
}

// Function dualSort performs a descending order selection sort on the sales vector
// The elements of the id vector are exchanged identically as those of the sales vector
void dualSort(vector<int> &id, vector<double> &sales)
{
    int startScan;
    int maxIndex;
    int tempId;
    int size;
    double maxValue;

    size = id.size();
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        maxIndex = startScan;
        maxValue = sales[startScan];
        tempId = id[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (sales[index] > maxValue)
            {
                maxValue = sales[index];
                tempId = id[index];
                maxIndex = index;
            }
            sales[maxIndex] = sales[startScan];
            id[maxIndex] = id[startScan];
            sales[startScan] = maxValue;
            id[startScan] = tempId;
        }
    }
}

// Function showOrder displays a heading and the sorted list of product numbers and sales
void showOrder(vector<double> sales, vector<int> id)
{
    cout << "Product Number\tSales\n";
    cout << "---------------------------\n";
    for (int index = 0; index < id.size(); index++)
    {
        cout << id[index] << "\t\t$";
        cout << setw(8) << sales[index] << endl;
    }
    cout << endl;
}

// Function showTotals calculates the total units of all products sold and the total sales, and displays these amounts.
void showTotals(vector<double> sales, vector<int> units)
{
    int totalUnits = 0;
    double totalSales = 0.0;

    for (int index = 0; index < units.size(); index++)
    {
        totalUnits += units[index];
        totalSales += sales[index];
    }
    cout << "Total Units Sold: " << totalUnits << endl;
    cout << "Total Sales: $" << totalSales << endl;
}
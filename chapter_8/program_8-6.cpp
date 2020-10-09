// A sales reporting program that displays the following information:
// - A list of products in the order of their sales dollars from high to low
// - The total number of all units sold
// - The total sales for the six-month period
#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes
void calcSales(const int units[], const double prices[], double sales[], int num);
void showOrder(const double sales[], const int id[], int num);
void dualSort(int id[], double sales[], int size);
void showTotals(const double sales[], const int units[], int num);

// Variables
const int NUM_PRODS = 9; // holds number of products that the company sells

int main()
{
    // The elements of the four arrays will correspond with each other. E.g, the product whose number is stored in prodNum[2] will have sold the number of units stored in units[2]. The sales amount for the product will be stored in sales[2].

    int id[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920, 921, 922}; // product ID numbers

    int units[NUM_PRODS] = {842, 416, 127, 514, 437, 269, 97, 492, 212}; // holds each product's number of units sold

    double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.95}; // holds each product's price

    double sales[NUM_PRODS]; // holds computed sales amounts of each product

    // calculate each product's sales
    calcSales(units, prices, sales, NUM_PRODS);

    // sort the elements in the sales array in descending order and shuffle the ID numbers in the array to keep them in parallel
    dualSort(id, sales, NUM_PRODS);

    // set the numeric output formatting
    cout << setprecision(2) << fixed << showpoint;

    // display the products and sales amounts
    showOrder(sales, id, NUM_PRODS);

    // display total units sold and total sales
    showTotals(sales, units, NUM_PRODS);

    return 0;
}

void calcSales(const int units[], const double prices[], double sales[], int num)
{
    for (int index = 0; index < num; index++)
        sales[index] = units[index] * prices[index];
}

// Function dualSort is a modified version of the selection sort algorithm that accepts two arrays as arguments: the sales array and the id array. The function actually performs the selection sort on the sales array. When the function moves an element in the sales array, however, it also moves the corresponding element in the id array. This is to ensure that the product numbers in the id array still have subscripts that match their sales figures in the sales array. It sorts in descending order.
void dualSort(int id[], double sales[], int size)
{
    int startScan;
    int maxIndex;
    int tempId;
    double maxValue;

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
        }
        sales[maxIndex] = sales[startScan];
        id[maxIndex] = id[startScan];
        sales[startScan] = maxValue;
        id[startScan] = tempId;
    }
}

// Function showOrder displays a heading and the sorted list of product numbers and their sales amounts. It accepts the id and sales arrays as arguments.
void showOrder(const double sales[], const int id[], int num)
{
    cout << "Product Number\tSales\n";

    cout << "----------------------------\n";
    for (int index = 0; index < num; index++)
    {
        cout << id[index] << "\t\t$";
        cout << setw(8) << sales[index] << endl;
    }
    cout << endl;
}

// Function showTotals displays the total number of units of all products sold and the total sales for the period.
void showTotals(const double sales[], const int units[], int num)
{
    int totalUnits = 0;
    double totalSales = 0.0;
    for (int index = 0; index < num; index++)
    {
        totalUnits += units[index];
        totalSales += sales[index];
    }
    cout << "Total Units Sold: " << totalUnits << endl;
    cout << "Total Sales: $" << totalSales << endl;
}
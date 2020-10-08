// This program will look up product information based off a given product number
#include <iostream>
using namespace std;

// Global variables
const int NUM_PRODS = 9;
const int MIN_PRODNUM = 914;
const int MAX_PRODNUM = 922;

// Prototypes
int getProdNum();
int binarySearch(const int[], int, int);
void displayProd(const string[], const string[], const double[], int);

int main()
{
    // Product IDs
    int id[NUM_PRODS] = {
        914, 915, 916, 917, 918, 919, 920, 921, 922};

    // Product titles
    string title[NUM_PRODS] = {
        "Six Steps to Leadership",
        "Six Steps to Leadership",
        "The Road to Excellence",
        "Seven Lessons of Quality",
        "Seven Lessons of Quality",
        "Seven Lessons of Quality",
        "Teams Are Made, Not Born",
        "Leadership for the Future",
        "Leadership for the Future"};

    // Product descriptions
    string description[NUM_PRODS] = {
        "Book",
        "Audio CD",
        "DVD",
        "Book",
        "Audio CD",
        "DVD",
        "Book",
        "Book",
        "Audio CD",
    };

    // Product prices
    double prices[NUM_PRODS] = {
        12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.95};

    int prodNum; // To hold a product number
    int index;   // To hold search results
    char again;  // To hold a Yes/No answer

    do
    {
        // Get desired product number
        prodNum = getProdNum();

        // Search for the product number
        index = binarySearch(id, NUM_PRODS, prodNum);

        // Display search result
        if (index == -1)
            cout << "That product number was not found.\n";
        else
            displayProd(title, description, prices, index);

        cout << "Would you like to look up another product? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');
    return 0;
}

int getProdNum()
{
    int prodNum;

    cout << "Enter the item's product number: ";
    cin >> prodNum;

    while (prodNum < MIN_PRODNUM || prodNum > MAX_PRODNUM)
    {
        cout << "Enter a number in the range of " << MIN_PRODNUM << " and " << MAX_PRODNUM << ".\n";
        cin >> prodNum;
    }
    return prodNum;
}

int binarySearch(const int list[], int size, int value)
{
    int min = 0;
    int max = size - 1;
    int position = -1;
    int mid;
    bool found = false;

    while (!found && min <= max)
    {
        mid = (min + max) / 2;
        if (list[mid] == value)
        {
            found = true;
            position = mid;
        }
        else if (list[mid] > value)
            max = mid - 1;
        else
            min = mid + 1;
    }
    return position;
}

void displayProd(const string title[], const string desc[], const double price[], int index)
{
    cout << "Title: " << title[index] << endl;
    cout << "Description : " << desc[index] << endl;
    cout << "Price: " << price[index] << endl;
}
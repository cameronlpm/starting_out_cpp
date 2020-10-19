// This program has functions that accept structure variables as arguments
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct InventoryItem
{
    int partNum;
    string description;
    int onHand;
    double price;
};

// Function Prototypes
void getItem(InventoryItem &); // argument passed by reference
void showItem(InventoryItem);  // argument passed by value

int main()
{
    InventoryItem part;

    getItem(part);
    showItem(part);

    return 0;
}

// Function getItem uses a structure reference variable as its parameter
// The function asks the user for information to store in the structure.
void getItem(InventoryItem &p)
{
    // Get the part number
    cout << "Enter the part number: ";
    cin >> p.partNum;

    // Get the part description
    cout << "Enter the part description: ";
    cin.ignore();
    getline(cin, p.description);

    // Get the quantity on hand
    cout << "Enter the quantity on hand: ";
    cin >> p.onHand;

    // Get the unit price
    cout << "Enter the unit price: ";
    cin >> p.price;
}

// Function showItem accepts an argument of the InventoryItem structure type.
// The contents of the structure are displayed.
void showItem(InventoryItem p)
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Part Number: " << p.partNum << endl;
    cout << "Description : " << p.description << endl;
    cout << "Units On Hand: " << p.onHand << endl;
    cout << "Price: $" << p.price << endl;
}
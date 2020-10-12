// This program tests a customer number to determine whether it's in the proper format
#include <iostream>
#include <cctype>
using namespace std;

// Function Prototypes
bool testNum(char[], int);

int main()
{
    const int SIZE = 8;
    char customer[SIZE];

    // Get customer number
    cout << "Enter a customer number in the form "
         << "LLLNNNN\n";
    cout << "(LLL = letters and NNNN = numbers): ";
    cin.getline(customer, SIZE);

    // Determine whether it's valid input
    if (testNum(customer, SIZE))
        cout << "That's a valid customer number.\n";
    else
    {
        cout << "That is not the proper format of the customer number.\n";
        cout << "Here's an example:\n\tABC1234\n";
    }
    return 0;
}

// Function testNum determines whether the custNum parameter holds a valid number.
bool testNum(char custNum[], int size)
{
    // Test first three characters for alphabetic characters
    for (int index = 0; index < 3; index++)
    {
        if (!isalpha(custNum[index]))
            return false;
    }

    // Test remaining characters for numeric digits
    for (int index = 3; index < (size - 1); index++)
    {
        if (!isdigit(custNum[index]))
            return false;
    }
    return true;
}
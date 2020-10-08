// This program demonstrates the binarySearch function on an integer array
#include <iostream>
using namespace std;

// Prototype
int binarySearch(const int list[], int numElements, int value);

// Global labels
const int SIZE = 20;

int main()
{
    int idNums[SIZE] = {101, 142, 147, 189, 199, 207, 222, 234, 289, 296, 310, 319, 388, 394,
                        417, 429, 447, 521, 536, 600}; // Employee IDs in sorted order
    int results;                                       // To hold search results
    int empID;                                         // To hold an employee ID

    // Get employee ID to search for
    cout << "Enter the employee ID you're searching for: ";
    cin >> empID;

    // Run the search
    results = binarySearch(idNums, SIZE, empID);

    // If value of results is -1 then ID was not found
    if (results == -1)
        cout << "That number does not exist in the array.\n";
    else
    {
        cout << "That ID is found at element " << results << " in the array.\n";
    }
    return 0;
}

int binarySearch(const int list[], int numElements, int value)
{
    int first = 0;              // First array element
    int last = numElements - 1; // Last array element
    int middle;                 // Midpoint of the search
    int position = -1;          // Position of search value
    bool found = false;         // Flag

    while (!found && first <= last)
    {
        middle = (first + last) / 2; // Calculate midpoint
        if (list[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (list[middle] > value) // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1; // If value is in upper half
    }
    return position;
}
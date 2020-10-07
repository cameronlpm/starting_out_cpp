// This program demonstrates the application of a linear search on an integer array
#include <iostream>
using namespace std;

// Prototypes
int searchList(const int list[], int numElements, int value);

int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = {87, 75, 98, 100, 82};
    int searchValue;
    int result;

    // Get a value to search for
    cout << "Enter an integer value that you're looking for: \n";
    cin >> searchValue;
    cout << "Looking for " << searchValue << "...\n";

    // Search the array for the value
    result = searchList(numbers, SIZE, searchValue);

    if (result == -1)
    {
        cout << searchValue << " was not found in the array.\n";
    }
    else
    {
        cout << "Your value, " << searchValue << ", was found at index #" << result << " in the array.\n";
    }
    return 0;
}

int searchList(const int list[], int numElements, int value)
{
    bool found = false;
    int position = -1;
    int index = 0;

    while (index < numElements && !found)
    {
        if (list[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}
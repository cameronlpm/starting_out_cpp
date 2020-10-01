// This program compares the elements of two arrays
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int firstArray[SIZE] = {5, 10, 15, 20, 25};
    int secondArray[SIZE] = {5, 10, 15, 20, 25};
    bool arraysEqual = true;
    int count = 0;

    // Check if each element is the same
    while (arraysEqual && count < SIZE)
    {
        if (firstArray[count] != secondArray[count])
            arraysEqual = false;
        count++;
    }

    if (arraysEqual)
        cout << "The arrays are equal.\n";
    else
        cout << "The arrats are not equal.\n";

    return 0;
}
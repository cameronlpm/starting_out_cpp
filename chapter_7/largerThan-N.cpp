// Write a function that accepts three arguments:
// an array, the size of the array, and a number n.
// Assume the array contains integers.
// The function should display all of the numbers
// in the array greater than the number n.
#include <iostream>
using namespace std;

// Prototypes
void displayVals(int arr[], int size, int n);

int main()
{
    int SIZE = 10;
    int nums[SIZE];
    int targetNum = 5;

    cout << "Enter " << SIZE << " integers to store in the array.\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Integer #" << (i + 1) << ": ";
        cin >> nums[i];
    }

    cout << "Values in the array that are greater than " << targetNum << ":\n";
    displayVals(nums, SIZE, targetNum);

    return 0;
}

void displayVals(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > n)
            cout << arr[i] << endl;
    }
}
// This program demonstrates an array being passed to a function
#include <iostream>
using namespace std;

// Prototypes
void showValues(int[], int);

int main()
{
    const int ARRAY_SIZE = 8;
    int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    showValues(numbers, ARRAY_SIZE);

    return 0;
}

// showValues takes an array of ints and the array size as arguments
// and then prints each element of the array
void showValues(int nums[], int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        cout << nums[idx] << " ";
    }
    cout << endl;
}
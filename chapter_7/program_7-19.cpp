// This program uses a function to double the value of each array element
#include <iostream>
using namespace std;

// Prototypes
void doubleArray(int[], int);
void showValues(int[], int);

int main()
{
    const int ARRAY_SIZE = 9;
    int set[ARRAY_SIZE] = {3, 6, 9, 12, 15, 18, 21, 24, 27};

    cout << "The array's values are:\n";
    showValues(set, ARRAY_SIZE);

    cout << "Now they're doubled:\n";
    doubleArray(set, ARRAY_SIZE);
}

void showValues(int nums[], int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        cout << nums[idx] << " ";
    }
    cout << endl;
}

void doubleArray(int nums[], int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        cout << (nums[idx] *= 2) << " ";
    }
    cout << endl;
}
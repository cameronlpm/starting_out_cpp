// This program uses the selection sort algorithm to sort an array in ascending order
#include <iostream>
using namespace std;

// Prototypes
void selectionSort(int[], int);
void showArray(int[], int);

int main()
{
    // Array of unsorted values
    const int SIZE = 6;
    int values[SIZE] = {5, 7, 2, 8, 9, 1};

    cout << "The unsorted values are:\n";
    showArray(values, SIZE);

    // Sort the values
    selectionSort(values, SIZE);

    // Display the sorted values
    cout << "The sorted values are:\n";
    showArray(values, SIZE);

    return 0;
}

// Function selectionSort performs an ascending order selection sort on the array
// The parameter size is the number of elements in the array
void selectionSort(int list[], int size)
{
    int startScan;
    int minIndex;
    int minValue;

    for (startScan = 0; startScan < size - 1; startScan++)
    {
        minIndex = startScan;
        minValue = list[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (list[index] < minValue)
            {
                minValue = list[index];
                minIndex = index;
            }
        }
        list[minIndex] = list[startScan];
        list[startScan] = minValue;
    }
}

// Function showArray displays the contents of the array
// The parameter size is the number of elements in the array
void showArray(int list[], int size)
{
    for (int index = 0; index < size; index++)
        cout << list[index] << " ";
    cout << endl;
}
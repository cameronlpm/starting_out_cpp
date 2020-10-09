// This program uses the bubble sort algorithm to sort an array in ascending order
#include <iostream>
using namespace std;

// Prototypes
void sortArray(int[], int);
void showArray(const int[], int);

int main()
{
    // Array of unsorted values
    int values[6] = {7, 2, 3, 8, 9, 1};

    cout << "The unsorted values are: \n";
    showArray(values, 6);

    // Sort the values
    sortArray(values, 6);

    // Display the values in sorted order
    cout << "The sorted values are:\n";
    showArray(values, 6);

    return 0;
}

// Funtion sortArray performs an ascending order bubble sort
// parameter size is the number of elements in the array
void sortArray(int list[], int size)
{
    bool swap;
    int temp;

    do
    {
        swap = false;
        for (int index = 0; index < size - 1; index++)
        {
            if (list[index] > list[index + 1])
            {
                temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

// Function showArray displays the contents of the array
// parameter size is the number of elements in the array
void showArray(const int list[], int size)
{
    for (int index = 0; index < size; index++)
        cout << list[index] << " ";
    cout << endl;
}
// This program demonstrates a unique_ptr pointing to a dynamically allocated int array
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    int max; // maximum size of the array

    // Get the number of values to store
    cout << "How many numbers do you want to enter? ";
    cin >> max;

    // Define a unique_ptr smart pointer, pointing to dynamically allocated int array
    unique_ptr<int[]> ptr(new int[max]);

    // Get the values for the array
    for (int index = 0; index < max; index++)
    {
        cout << "Enter an integer: ";
        cin >> ptr[index];
    }

    // Display the values in the array
    cout << "Here are the values you entered:\n";
    for (int index = 0; index < max; index++)
        cout << ptr[index] << endl;

    return 0;
}
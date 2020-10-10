// This program processes an array using pointer notation
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    // get values to store in the array using pointer notation instead of subscripts
    cout << "Enter " << SIZE << " numbers: ";
    for (int index = 0; index < SIZE; index++)
        cin >> *(numbers + index);

    // display the values in the array using pointer notation instead of subscripts
    cout << "Here are the numbers in the array:\n";
    for (int index = 0; index < SIZE; index++)
        cout << *(numbers + index) << " ";
    cout << endl;

    return 0;
}
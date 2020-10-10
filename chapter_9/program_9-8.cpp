// This program uses the address of each element in the array
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0};
    double *doublePtr = nullptr; // pointer to a double

    // using doublePtr to display the values in the coins array
    cout << "here are the values in the coins array:\n";
    for (int index = 0; index < NUM_COINS; index++)
    {
        // get address of an array element
        doublePtr = &coins[index];

        // display contents of the element
        cout << *doublePtr << " ";
    }
    cout << endl;

    return 0;
}
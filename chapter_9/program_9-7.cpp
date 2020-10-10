// This program uses subscript notation with a pointer variable,
// and pointer notation with an array name.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0};
    double *doublePtr; // pointer to a double

    // assign the address of the coins array to doublePtr
    doublePtr = coins;

    // display the contents of coins array using subscripts with the pointer
    cout << "here are the values in the coins array:\n";
    for (int index = 0; index < NUM_COINS; index++)
        cout << doublePtr[index] << " ";
    cout << endl;

    // display the contents again, but using pointer notation with the array name
    cout << "\nand here they are again...\n";
    for (int index = 0; index < NUM_COINS; index++)
        cout << *(coins + index) << " ";
    cout << endl;

    return 0;
}
// A program that simulates an ATM pin code checker
// Parameters: the function is to accept as arguments two integer arrays of seven elements each. The first argument will contain the number entered by the customer. The second argument will contain the number retrieved from the bank's database.
// Return value: the function should return a Boolean true value if the two arrays are identical. Otherwise, it should return false.
// Pseudocode:
// for each element in the first array
//      compare the element with the element in the second array that's in the corresponding position.
//      if the two elements contain different values, return false
#include <iostream>
using namespace std;

// Prototypes
bool testPIN(const int userPIN[], const int dbPIN[], int size);

int main()
{
    const int PIN_SIZE = 7;
    int dbArray[7];
    int userArray[7];
    bool correctPIN;

    cout << "Set your PIN by entering 7 integers: ";
    for (int i = 0; i < PIN_SIZE; i++)
    {
        cin >> dbArray[i];
    }
    cout << "Your PIN is set.\n";

    cout << "\n\t\tWelcome to the ATM. Enter your PIN to access your account:\n\n";
    for (int i = 0; i < PIN_SIZE; i++)
    {
        cin >> userArray[i];
    }

    cout << "Checking your PIN...\n";
    correctPIN = testPIN(userArray, dbArray, PIN_SIZE);
    if (correctPIN)
    {
        cout << "You're logged in.\n";
    }
    else
    {
        cout << "You entered an incorrect PIN.\n";
    }
    return 0;
}

bool testPIN(const int userPIN[], const int dbPIN[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (userPIN[i] != dbPIN[i])
            return false;
    }
    return true;
}
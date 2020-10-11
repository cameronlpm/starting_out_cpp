// This program uses two functions that accept addresses of variables as arguments
#include <iostream>
using namespace std;

// Prototypes
void getNumber(int *num);
void doubleValue(int *val);

int main()
{
    int number;

    // Call getNumber and pass the address of number
    getNumber(&number);

    // Call doubleValue and pass the address of number
    doubleValue(&number);

    cout << "That value doubled is " << number << endl;

    return 0;
}

void getNumber(int *num)
{
    cout << "Enter an integer number: ";
    cin >> *num;
}

void doubleValue(int *val)
{
    *val *= 2;
}
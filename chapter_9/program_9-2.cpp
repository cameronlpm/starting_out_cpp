// This program stores the address of a variable in a pointer
#include <iostream>
using namespace std;

int main()
{
    int x = 25;
    int *ptr = nullptr; // pointer variable that can point to an int

    ptr = &x; // store the address of x in ptr
    cout << "The value of x is " << x << endl;
    cout << "The address of x is " << ptr << endl;

    return 0;
}
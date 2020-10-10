// This program demonstrates the use of the indirection operator
#include <iostream>
using namespace std;

int main()
{
    int x = 25;
    int *ptr = nullptr;

    ptr = &x;

    // use both x and ptr to display the value of x
    cout << "Here is the value in x, printed twice:\n";
    cout << x << endl;
    cout << *ptr << endl;

    // assign 100 to the location pointed to by ptr
    // this will actually assign 100 to x
    *ptr = 100;

    cout << "One again, here is the value in x:\n";
    cout << x << endl;
    cout << *ptr << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Address of ptr: " << ptr << endl;

    return 0;
}
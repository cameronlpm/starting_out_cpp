// This program demonstrates a pointer variable referencing different variables
#include <iostream>
using namespace std;

int main()
{
    int x = 25;
    int y = 50;
    int z = 75;
    int *ptr = nullptr;

    cout << "Here are the values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;

    // using ptr to manipulate x, y, and z
    ptr = &x;    // store address of x in ptr
    *ptr += 100; // add 100 to the value in x

    ptr = &y;   // store address of y in ptr
    *ptr += 50; // add 50 to the value in y

    ptr = &z;  // store address of z in ptr
    *ptr += 5; // add 5 to the value in z

    cout << "Once again, the values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;

    return 0;
}
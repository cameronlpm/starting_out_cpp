// This program demonstrates a unique_ptr
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    const int SIZE = 100;
    // Define a unique_ptr smart pointer, pointing to a dynamically allocated int
    unique_ptr<int[]> ptr(new int[SIZE]);

    // Assign 99 to the dynamically allocated int at index 0
    ptr[0] = 99;

    // Display the value of the dynamically allocated int
    cout << ptr[0] << endl;

    return 0;
}
// Demonstrates that changes to a function parameter have no effect on the original argument.
#include <iostream>
using namespace std;

// Prototype
void changeMe(int);

int main()
{
    int num = 42;

    cout << "num is " << num << endl;

    changeMe(num);

    cout << "back in main, num is " << num << endl;

    return 0;
}

void changeMe(int val)
{
    val = 0;

    cout << "inside changeMe, num is " << val << endl;
}
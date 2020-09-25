// Write a prgoram that asks the user to enter two numbers. The program should use the conditional operator to determine which number is the smaller and which is the larger.
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;

    cout << "The larger number is " << ((num1 > num2) ? num1 : num2) << endl;

    return 0;
}
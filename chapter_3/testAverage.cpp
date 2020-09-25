// Write a program that asks for five test scores. The program should calculate the average test score and display it. The number should be formatted in fixed-point notation, with one decimal point of precision.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float test1, test2, test3, test4, test5;

    cout << "Enter 5 test scores in 1-5 order with each score separated by a space: ";
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
    cout << setprecision(1) << fixed << showpoint;
    cout << "Average test score: " << (test1 + test2 + test3 + test4 + test5) / 5 << endl;
    return 0;
}
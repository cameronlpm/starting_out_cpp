// Write a program that asks the user to enter a number within the range of 1 through 10, and then display the Roman numeral version of that number.
#include <iostream>
using namespace std;

int main()
{
    int inputNum;

    cout << "Enter an integer between 1 and 10: ";
    cin >> inputNum;

    switch (inputNum)
    {
    case 1:
        cout << "I" << endl;
        break;
    case 2:
        cout << "II" << endl;
        break;
    case 3:
        cout << "III" << endl;
        break;
    case 4:
        cout << "IV" << endl;
        break;
    case 5:
        cout << "V" << endl;
        break;
    case 6:
        cout << "VI" << endl;
        break;
    case 7:
        cout << "VII" << endl;
        break;
    case 8:
        cout << "VIII" << endl;
        break;
    case 9:
        cout << "IX" << endl;
        break;
    case 10:
        cout << "X" << endl;
        break;
    default:
        cout << "Invalid number." << endl;
        break;
    }

    return 0;
}
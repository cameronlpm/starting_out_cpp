// Write a program that calculates average rainfall for three months. The program should ask the user to enter the name of each month, such as June or July, and the amount of rain (in inches) that fell each month. The prgoram should display a message similar to the following: "The average rainfall for June, July, and August is 6.72 inches."
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string month1, month2, month3;
    float m1Rain, m2Rain, m3Rain;

    cout << "Enter the first month: ";
    getline(cin, month1);
    cout << "How many inches of rain fell in " << month1 << "? ";
    cin >> m1Rain;
    cin.ignore();
    cout << "Enter the second month: ";
    getline(cin, month2);
    cout << "How many inches of rain fell in " << month2 << "? ";
    cin >> m2Rain;
    cin.ignore();
    cout << "Enter the third month: ";
    getline(cin, month3);
    cout << "How many inches of rain fell in " << month3 << "? ";
    cin >> m3Rain;
    cin.ignore();

    cout << setprecision(2) << fixed << showpoint;
    cout << "The average rainfall for the months of " << month1 << ", " << month2 << ", and " << month3 << " was: " << (m1Rain + m2Rain + m3Rain) / 3 << " inches." << endl;

    return 0;
}

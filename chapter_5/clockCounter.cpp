// This program simulates a digital clock
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int seconds, minutes, hours;

    cout << fixed << right;
    cout.fill('0');
    for (hours = 0; hours < 24; hours++)
    {
        for (minutes = 0; minutes < 60; minutes++)
        {
            for (seconds = 0; seconds < 60; seconds++)
            {
                cout << setw(2) << hours << ":";
                cout << setw(2) << minutes << ":";
                cout << setw(2) << seconds << endl;
            }
        }
    }
}
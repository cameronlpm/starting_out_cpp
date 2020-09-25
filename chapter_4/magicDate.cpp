/* Asks the user to enter a date in a specific format (xx/xx/xx)
*  Prints a message to the console whether or not that date is magic
*  i.e. the value of the month times the value of the day is equal to the value of year
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int month, day, year;
    char slash;
    string magicDate;

    cout << "Enter a date in this format (e.g., 10/03/88, 01/26/18, 04/04/16): " << endl;
    cin >> month >> slash >> day >> slash >> year;
    cout << "You entered " << month << "/" << day << "/" << year << endl;

    magicDate = (month * day == year) ? "magic!" : "not magic.";
    cout << "This date is " << magicDate << endl;

    return 0;
}
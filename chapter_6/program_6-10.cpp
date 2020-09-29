// A menu-driven program that makes a function call for each selection that a user makes.
#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes
void showMenu();
void showFees(double, int);

int main()
{
    int choice; // To hold a menu choice
    int months; // To hold a number of months

    // Constants for the menu choices
    const int ADULT_CHOICE = 1, CHILD_CHOICE = 2, SENIOR_CHOICE = 3, QUIT_CHOICE = 4;

    // Constants for membership rates
    const double ADULT = 40.0, CHILD = 20.0, SENIOR = 30;

    // Numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    do
    {
        showMenu();
        cin >> choice;

        // Validate menu selection
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }

        if (choice != QUIT_CHOICE)
        {
            cout << "For how many months? ";
            cin >> months;

            // Display membership fees
            switch (choice)
            {
            case ADULT_CHOICE:
                showFees(ADULT, months);
                break;
            case CHILD_CHOICE:
                showFees(CHILD, months);
                break;
            case SENIOR_CHOICE:
                showFees(SENIOR, months);
                break;
            default:
                break;
            }
        }
    } while (choice != QUIT_CHOICE);
    return 0;
}

// Definition of function showMenu which displays the menu.
void showMenu()
{
    cout << "\n\t\tHealth Club Membership Menu\n\n"
         << "1. Standard Adult Membership\n"
         << "2. Child Membership\n"
         << "3. Senior Citizen Membership\n"
         << "4. Quit the Program\n\n"
         << "Enter your choice : ";
}

// Definition of function showFees. The memberRate parameter holds
// the monthly membership rate and the months parameter holds the
// number of months. The function displays the total charges.
void showFees(double memberRate, int months)
{
    cout << "The total charges are $" << (memberRate * months) << endl;
}

// This program demonstrates a class with a destructor
#include <iostream>
#include "ContactInfo.h"
using namespace std;

int main()
{
    // Define a ContactInfo object
    ContactInfo entry("Uni Lou Moore", "123-4567");

    // Display the object's data
    cout << "Name: " << entry.getName() << endl;
    cout << "Phone Number: " << entry.getPhoneNumber() << endl;

    return 0;
}
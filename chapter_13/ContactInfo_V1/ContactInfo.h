// Specification for the Contact class
#ifndef CONTACTINFO_H
#define CONTACTINFO_H

#include <cstring> // Needed for strlen and strcpy

// The constructor accepts argument for both items. The name and phone
// number are passed as a pointer to a C-string. The constructor gets the length
// of the C-string and dynamically allocates memory to hold it. The destructor
// free the allocated memory when the object is destroyed.
class ContactInfo
{
private:
    char *name;  // the name
    char *phone; // the phone number

public:
    // Constructor
    ContactInfo(char *n, char *p)
    {
        // Allocate just enough memory for the name and phone number
        name = new char[strlen(n) + 1];
        phone = new char[strlen(p) + 1];

        // Copy the name and number to the allocated memory
        strcpy(name, n);
        strcpy(phone, p);
    }

    // Destructor
    ~ContactInfo()
    {
        delete[] name;
        delete[] phone;
    }

    // returns a pointer to a constant char as a security measure.
    // this prevents any code that calls the functions from changing
    // the string that the pointer points to.
    const char *getName() const
    {
        return name;
    }

    const char *getPhoneNumber() const
    {
        return phone;
    }
};

#endif
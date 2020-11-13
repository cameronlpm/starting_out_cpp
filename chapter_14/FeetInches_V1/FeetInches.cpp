// Implementation for FeetInches class
#include <cstdlib> // for abs()
#include "FeetInches.h"

// simplify: this function checks for values in the inches member
// that are > 12 or < 0. If such a value is found, the number in feet
// and inches are adjusted to conform to a standard feet & inches expression.
// E.g. 3'14" would be adjusted to 4'2", and 5'-2" would be adjusted to 4'10".
void FeetInches::simplify()
{
    if (inches <= 12)
    {
        feet += (inches / 12);
        inches = (inches % 12);
    }
    else if (inches < 0)
    {
        feet -= ((abs(inches) / 12) + 1);
        inches = 12 - (abs(inches) % 12);
    }
}

// Overloaded binary + operator.
FeetInches FeetInches::operator+(const FeetInches &right)
{
    FeetInches temp;

    temp.inches = inches + right.inches;
    temp.feet = feet + right.feet;
    temp.simplify();
    return temp;
}

// Overloaded binary - operator.
FeetInches FeetInches::operator-(const FeetInches &right)
{
    FeetInches temp;

    temp.inches = inches - right.inches;
    temp.feet = feet - right.feet;
    temp.simplify();
    return temp;
}

/* 
The FeetInches class is designed to hold distances or measurements expressed in feet and inches. it consists of eight member functions:
1. A constructor that allows the feet and inches members to be set. The default values for these members is zero.
2. A setFeet function for storing a value in the feet member.
3. A setInches function for storing a value in the inches member.
4. A getFeet function for returning the value in the feet member.
5. A getInches function for returning the value in the inches member.
6. A simplify function for normalizing the values held in feet and inches. This function adjusts any set of values where the inches member is greater than 12 or less than 0. This function uses the standard libary function abs() to get the absolute value of the inches member. The abs() function requires the <cstdlib> header file.
7. An operator + function that overloads the standard + math operator.
8. An operator - function that overloads the standard - math operator.
*/
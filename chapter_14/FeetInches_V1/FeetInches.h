#ifndef FEETINCHES_H
#define FEETINCHES_H

// The FeetInches class holds distances or measurements expressed in feet and inches.

class FeetInches
{
private:
    int feet;
    int inches;
    void simplify(); // defined in FeetInches.cpp

public:
    // Constructor
    FeetInches(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
        simplify();
    }

    // Setters
    void setFeet(int f) { feet = f; }

    void setInches(int i)
    {
        inches = i;
        simplify();
    }

    // Getters
    int getFeet() const { return feet; }

    int getInches() const { return inches; }

    // Overloaded operators
    FeetInches operator+(const FeetInches &);
    FeetInches operator-(const FeetInches &);
};

#endif
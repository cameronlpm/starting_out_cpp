#ifndef BUDGET_H
#define BUDGET_H
#include "Auxil.h"

// Budget class declaration
class Budget
{
private:
    static double corpBudget; // Static member variable
    double divisionBudget;    // Instance member variable
public:
    Budget() { divisionBudget = 0; }
    void addBudget(double b)
    {
        divisionBudget += b;
        corpBudget += b;
    }
    double getDivisionBudget() const { return divisionBudget; }
    double getCorpBudget() const { return corpBudget; }
    static void mainOffice(double);                           // Static member function
    friend void AuxiliaryOffice::addBudget(double, Budget &); // Friend function
};

#endif
// This program demonstrates the GradedActivity class.
#include <iostream>
#include "GradedActivity.h"
using namespace std;

int main()
{
    double testScore;
    GradedActivity test;

    cout << "Enter your numeric test score: ";
    cin >> testScore;

    // Store the numeric score in the test object.
    test.setScore(testScore);

    cout << "The grade for that test is " << test.getLetterGrade() << endl;

    return 0;
}
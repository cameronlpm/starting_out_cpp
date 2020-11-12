// This program demonstrates the overloaded = operator returning a value.
#include <iostream>
#include "StudentTestScores.h"
using namespace std;

// Function prototype
void displayStudent(StudentTestScores);

int main()
{
    // Create a StudentTestScore object
    StudentTestScores student1("Pancake Lou", 3);
    student1.setTestScore(100.0, 0);
    student1.setTestScore(95.0, 1);
    student1.setTestScore(93.0, 2);

    StudentTestScores student2("Uni Moore", 5);
    StudentTestScores student3("Mochi Moore", 10);

    student3 = student2 = student1;

    displayStudent(student1);
    displayStudent(student2);
    displayStudent(student3);

    return 0;
}

void displayStudent(StudentTestScores s)
{
    cout << "Name: " << s.getStudentName() << endl;
    cout << "Test Scores: ";
    for (int i = 0; i < s.getNumTestScores(); i++)
        cout << s.getTestScore(i) << " ";
    cout << endl;
}
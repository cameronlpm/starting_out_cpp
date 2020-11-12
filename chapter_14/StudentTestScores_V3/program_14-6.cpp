// This program demonstrates the overloaded = operator
#include <iostream>
#include "StudentTestScores.h"
using namespace std;

// Function prototype
void displayStudent(StudentTestScores);

int main()
{
    // Create a StudentTestScores object and assign scores
    StudentTestScores student1("Pancake Lou", 3);
    student1.setTestScore(100.0, 0);
    student1.setTestScore(95.0, 1);
    student1.setTestScore(92.0, 2);

    StudentTestScores student2("Uni Moore", 5);

    // Assign student1 object to student2
    student2 = student1;

    // Objects will contain the same data
    displayStudent(student1);
    displayStudent(student2);

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
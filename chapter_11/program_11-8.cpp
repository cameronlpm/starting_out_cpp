// This program demonstrates a function that uses a pointer to
// a structure variable as a parameter.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string name;
    int idNum;
    int creditHours;
    double gpa;
};

// Function Prototype
void getData(Student *);

int main()
{
    Student freshman;

    // Get student data
    cout << "Enter the following student data:\n";
    getData(&freshman); // Pass the addres of freshman
    cout << "\nHere is the student data you entered:\n";

    // Display the data stored in freshman
    cout << setprecision(3);
    cout << "Name: " << freshman.name << endl;
    cout << "ID Number: " << freshman.idNum << endl;
    cout << "Credit Hours: " << freshman.creditHours << endl;
    cout << "GPA: " << freshman.gpa << endl;

    return 0;
}

// Function getData reads user-entered data into a Student struct
// It uses a pointer to a Student structure variable
void getData(Student *s)
{
    // Get the student name
    cout << "Student name: ";
    getline(cin, s->name);

    // Get the ID number
    cout << "Student ID Number: ";
    cin >> s->idNum;

    // Get credit hours
    cout << "Credit Hours Enrolled: ";
    cin >> s->creditHours;

    // Get GPA
    cout << "Current GPA: ";
    cin >> s->gpa;
}
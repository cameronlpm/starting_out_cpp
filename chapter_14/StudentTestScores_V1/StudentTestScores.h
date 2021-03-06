#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORES_H
#include <string>
using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{
private:
    string studentName;
    int *testScores; // points to an array of test scores
    int numTestScores;

    // Private member function to create an array of test scores
    void createTestScoresArray(int size)
    {
        numTestScores = size;
        testScores = new int[size];
        for (int i = 0; i < size; i++)
            testScores[i] = DEFAULT_SCORE;
    }

public:
    // Constructor
    StudentTestScores(string name, int numScores)
    {
        studentName = name;
        createTestScoresArray(numScores);
    }

    // Destructor
    ~StudentTestScores() { delete[] testScores; }

    // The setTestScore function sets a specific test score's value
    void setTestScore(double score, int index) { testScores[index] = score; }

    // Set the student's name
    void setStudentName(string name) { studentName = name; }

    // Get the student's name
    string getStudentName() const { return studentName; }

    // Get the number of test scores
    int getNumTestScores() const { return numTestScores; }

    // Get a specific test score
    int getTestScore(int index) const { return testScores[index]; }
};

#endif
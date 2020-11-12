#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORES_H
#include <string>
using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{
private:
    string studentName;
    double *testScores;
    int numTestScores;

    // Private member function to create an array of test scores
    void createTestScoresArray(int size)
    {
        numTestScores = size;
        testScores = new double[size];
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

    // Copy constructor
    StudentTestScores(const StudentTestScores &obj)
    {
        studentName = obj.studentName;
        numTestScores = obj.numTestScores;
        testScores = new double[numTestScores];
        for (int i = 0; i < numTestScores; i++)
            testScores[i] = obj.testScores[i];
    }

    // Destructor
    ~StudentTestScores() { delete[] testScores; }

    // Sets a specific test score's value
    void setTestScore(double score, int index) { testScores[index] = score; }

    void setStudentName(string name) { studentName = name; }

    string getStudentName() const { return studentName; }

    int getNumTestScores() const { return numTestScores; }

    // Get a specific test score
    double getTestScore(int index) const { return testScores[index]; }
};

#endif
// This program reads in 4 test scores, drops the lowest, and averages the remaining scores
#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
    const int SIZE = 4;      // Array size
    double testScores[SIZE]; // Array of test scores
    double total;            // Total of the scores
    double lowestScore;      // Lowest test score
    double average;          // Average test score

    // Set up numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // Get test scores from user
    getTestScores(testScores, SIZE);

    // Get total of the test scores
    total = getTotal(testScores, SIZE);

    // Get lowest test score
    lowestScore = getLowest(testScores, SIZE);

    // Remove lowest test score
    total -= lowestScore;

    // Calculate average of 3 remaining scores
    average = total / (SIZE - 1);

    // Display the average
    cout << "The average with the lowest score dropped is " << average << endl;

    return 0;
}

// Read in 4 test scores into an array
void getTestScores(double scores[], int size)
{
    cout << "Enter the student's four test scores:\n";
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Test #" << (idx + 1) << ": ";
        cin >> scores[idx];
    }
}

// Calculate the total of the scores in the array
double getTotal(const double scores[], int size)
{
    double total = 0;
    for (int idx = 0; idx < size; idx++)
    {
        total += scores[idx];
    }
    return total;
}

// Get the lowest score in the array
double getLowest(const double scores[], int size)
{
    double lowest = scores[0];
    for (int idx = 1; idx < size; idx++)
    {
        if (scores[idx] < lowest)
            lowest = scores[idx];
    }
    return lowest;
}
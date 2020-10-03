// This program demonstrates the vector's empty member function
#include <iostream>
#include <vector>
using namespace std;

// Prototypes
double avgVector(vector<int>);

int main()
{
    vector<int> values;
    int numValues;
    double average;

    cout << "How many values do you wish to average? ";
    cin >> numValues;

    // Get the values and store in vector
    for (int i = 0; i < numValues; i++)
    {
        int tempVal;
        cout << "Enter a value: ";
        cin >> tempVal;
        values.push_back(tempVal);
    }

    // Get average of values and display it
    average = avgVector(values);
    cout << "Average: " << average << endl;

    return 0;
}

double avgVector(vector<int> values)
{
    double total;

    for (int val : values)
    {
        total += val;
    }

    return (total / values.size());
}
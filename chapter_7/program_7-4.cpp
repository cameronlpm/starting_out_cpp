// This program writes the contents of an array to a file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int count;
    ofstream outputFile;

    // Store values in array
    for (count = 0; count < ARRAY_SIZE; count++)
        numbers[count] = count;

    // Open file for output
    outputFile.open("SavedNums.txt");

    // Write contents of array to file
    for (count = 0; count < ARRAY_SIZE; count++)
        outputFile << numbers[count] << endl;

    outputFile.close();

    cout << "Numbers saved to file.\n";
}
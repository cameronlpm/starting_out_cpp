// This program asks the user for a file name. We assume the file
// contains a series of numbers, each on a separate line.
// The program reads the contents of the file into an array
// and displays the lowest, highest, total, and average of the numbers.
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Prototypes

int main()
{
    ifstream inputFile;
    int lowest;
    int highest;
    int total;
    float average;

    inputFile.open("numbers.txt");

    inputFile.close();
}
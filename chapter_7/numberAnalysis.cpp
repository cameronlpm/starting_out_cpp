// This program reads numerical data from a file and calculates some simple statistics
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ifstream inputFile;
    vector<int> numVector;
    int number;

    inputFile.open("numbers.txt");

    while (inputFile >> number)
    {
        numVector.push_back(number);
    }

    inputFile.close();

    for (int n : numVector)
    {
        cout << n << endl;
    }
    return 0;
}
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    inputFile.open("BadListOfNums.txt");

    if (inputFile)
    {
        while (inputFile >> number)
        {
            cout << number << endl;
        }
        inputFile.close();
    }
    else
    {
        cout << "Error opening the file.\n";
    }
    return 0;
}
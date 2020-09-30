// This program reads data from a file into an array
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int count = 0;
    ifstream inputFile;

    inputFile.open("SomeNums.txt");

    // Read nums from file into array
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
    {
        count++;
    }

    inputFile.close();

    // Display nums in the array
    cout << "The first " << ARRAY_SIZE << " numbers read from the file are: \n";
    for (count = 0; count < ARRAY_SIZE; count++)
    {
        cout << numbers[count] << " " << endl;
    }
    return 0;
}
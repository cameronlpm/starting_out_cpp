// This program reads data from a file into an array
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 100;
    int numbers[ARRAY_SIZE];
    int count = 0;
    ifstream inputFile;

    inputFile.open("numbers.txt");

    // Reads the numbers from the file into the array
    // count will hold the number of values stored in the array
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
    {
        count++;
    }

    inputFile.close();

    // Display the numbers read
    cout << "The numbers are: ";
    for (int index = 0; index < count; index++)
    {
        cout << numbers[index] << " ";
    }
    cout << endl;

    return 0;
}
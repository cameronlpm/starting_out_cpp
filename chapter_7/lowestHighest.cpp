// Finding the highest and lowest values in an array of numbers
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int SIZE = 50;
    int numbers[SIZE];
    int count;
    int lowest;
    int highest;

    srand(time(NULL));

    // Initialize array with random integers
    for (int i = 0; i < SIZE; i++)
    {
        numbers[i] = rand();
    }

    // Find highest number in numbers
    highest = numbers[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (numbers[i] > highest)
            highest = numbers[i];
    }
    cout << "Highest: " << highest << endl;

    // Find lowest number in numbers
    lowest = numbers[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (numbers[i] < lowest)
            lowest = numbers[i];
    }
    cout << "Lowest: " << lowest << endl;

    return 0;
}
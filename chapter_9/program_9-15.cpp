// This program demonstrates a function that returns a pointer.
#include <iostream>
#include <cstdlib> // for rand and srand
#include <ctime>   // for the time function
using namespace std;

// Prototypes
int *getRandomNumbers(int);

int main()
{
    int *numbers = nullptr; // to point to the numbers

    // Get an array of five random numbers
    numbers = getRandomNumbers(5);

    // Display the numbers
    for (int index = 0; index < 5; index++)
        cout << numbers[index] << endl;

    // Free the memory
    delete[] numbers;
    numbers = 0;

    return 0;
}

// getRandomNumbers returns a pointer to an array of random integers.
// The parameter indicates the number of numbers requested.
int *getRandomNumbers(int num)
{
    int *arr = nullptr; // array to hold the numbers

    // Return a null pointer if num is zero or negative
    if (num <= 0)
        return nullptr;

    // Dynamically allocate the array
    arr = new int[num];

    // Seed the random number generator by passing return value of time(0) to srand
    srand(time(0));

    // Populate the array with random numbers
    for (int index = 0; index < num; index++)
        arr[index] = rand();

    // Return a pounter to the array
    return arr;
}
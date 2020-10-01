// Testing range-based for loops and simple array operations
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter integer for index #" << i << " ";
        cin >> arr[i];
    }

    cout << "The array now holds:\n";
    for (int num : arr)
    {
        cout << num << endl;
    }

    int sum = 0;
    int average;
    for (int num : arr)
    {
        sum += num;
    }
    average = sum / SIZE;
    cout << "The average of these array values: " << average << endl;

    return 0;
}
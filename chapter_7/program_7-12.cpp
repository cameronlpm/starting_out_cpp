// Demonstration of how a range-based for loop can modify an array
#include <iostream>
using namespace std;

int main()
{
    int SIZE = 5;
    int nums[SIZE];

    cout << "Enter " << SIZE << " integer numbers: ";
    for (int &val : nums)
    {
        cin >> val;
    }

    cout << "The numbers in the array are: " << endl;
    for (int val : nums)
    {
        cout << val << endl;
    }
}
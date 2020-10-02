// This program demonstrates the vector pop_back member function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> values;

    // Store values in vector
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    cout << "The size of values is " << values.size() << endl;

    // Remove a value from the vector
    cout << "Popping a value from the vector...\n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;

    // Remove another value
    cout << "Popping a value from the vector...\n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;

    // Remove last value
    cout << "Popping a value from the vector...\n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;

    return 0;
}
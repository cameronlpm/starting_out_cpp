// Demonstration of a range-based for loop
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string planets[] = {"Mercury", "Venus", "Earth", "Mars",
                        "Jupiter", "Saturn", "Uranus", "Neptune",
                        "Pluto (dwarf planet)"};

    for (string planet : planets)
        cout << planet << endl;

    return 0;
}
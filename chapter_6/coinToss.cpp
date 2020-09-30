// Simulates the tossing of a coin, displaying head or tails randomly on each "flip".
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Prototype
int coinToss();

int main()
{
    int heads;
    int tails;
    int flip;

    // initialize random seed
    srand(time(NULL));

    // simulate 10 coin tosses
    for (int i = 0; i < 10; i++)
    {
        cout << (coinToss() == 1 ? "Tails\n" : "Heads\n");
    }
}

int coinToss()
{
    const int MIN = 1;
    const int MAX = 2;

    return rand() % (MAX - MIN + 1) + 1; // Return 1 or 2 randomly
}
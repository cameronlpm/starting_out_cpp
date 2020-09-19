/*
This program displays the volume of a cylindrical fuel tank. The formula for the volume of a cylinder is V = pi*r*r*h, where:
pi is 3.14159
r is radius of the tank
h is height of the tank
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double volume, pi, radius, height;

  cout << "This program will calculate the volume of a cylinder-shaped fuel tank.\n";
  cout << "How tall is the tank? ";
  cin >> height;
  cout << "What is the radius of the tank? ";
  cin >> radius;

  pi = 3.14159;
  volume = pi * pow(radius, 2.0) * height;

  cout << "The volume of the tank is: " << volume << endl;

  return 0;
}
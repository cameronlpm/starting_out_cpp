/*
Conver the following pseudocode to C++ code:
-> Store 172.5 in the force variable
-> Store 27.5 in the area variable
-> Divide area by force and store the result in the pressure variable
-> Display the contents of the pressure variable
*/
#include <iostream>
using namespace std;

int main()
{
  float force = 172.5, area = 27.5, pressure;

  pressure = area / force;
  cout << "Pressure: " << pressure << endl;

  return 0;
}
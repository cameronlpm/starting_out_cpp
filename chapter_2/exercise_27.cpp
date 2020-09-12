/*
Conver the following pseudocode to C++ code:
-> Store 20 in the speed variable
-> Store 10 in the time variable
-> Multiply speed by time and store the result in the distance variable
-> Display the contents of the distance variable
*/
#include <iostream>
using namespace std;

int main()
{
  int speed = 20, time = 10, distance;

  distance = speed * time;
  cout << "Distance: " << distance << endl;

  return 0;
}
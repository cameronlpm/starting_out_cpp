/*
This program asks the user to enter the length and width of a rectangle. It calculates the rectangle's are and displays the value on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
  int length, width, area;

  cout << "This program calculates the area of a rectangle.\n";
  cout << "Enter the length and width of the rectangle separated by a space: ";
  cin >> length >> width;
  area = length * width;
  cout << "The area of the rectangle is: " << area << ".\n";

  return 0;
}
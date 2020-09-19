// This program uses a type cast expression to print a character from a number.
#include <iostream>
using namespace std;

int main()
{
  int number = 65;

  cout << number << endl;

  cout << static_cast<char>(number) << endl;

  return 0;
}
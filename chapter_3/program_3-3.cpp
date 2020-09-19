#include <iostream>
using namespace std;

int main()
{
  int wholeNum;
  double realNum;
  char letter;

  cout << "Enter a whole number, a real number, and a letter, separated by spaces: ";
  cin >> wholeNum >> realNum >> letter;
  cout << "Whole: " << wholeNum << endl;
  cout << "Real: " << realNum << endl;
  cout << "Letter: " << letter << endl;

  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  double maxCredit, usedCredit, availableCredit;

  cout << "Enter the customer's maximum credit amount: ";
  cin >> maxCredit;
  cout << "Enter the customer's credit amount used thus far: ";
  cin >> usedCredit;
  availableCredit = maxCredit - usedCredit;
  cout << "The customer currently has a credit line of: " << availableCredit << endl;

  return 0;
}
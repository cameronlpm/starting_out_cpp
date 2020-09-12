/*
Write a program that will compute the total sales tax on a $95 purchase. Assume the state sales tax is 4 percent and the count sales tax is 2 percent.
*/
#include <iostream>
using namespace std;

int main()
{
  double stateSalesTax = 0.04, countySalesTax = 0.02, totalSalesTax;
  int purchasePrice = 95;

  totalSalesTax = (purchasePrice * stateSalesTax) + (purchasePrice * countySalesTax);
  cout << "Total sales tax on a $" << purchasePrice << " dollar purchase: $" << totalSalesTax << endl;

  return 0;
}
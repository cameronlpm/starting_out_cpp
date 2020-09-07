#include <iostream>
using namespace std;

int main()
{
  double itemPrice, taxRate, salesTax, totalSaleAmt;

  cout << "Enter the price of the item being purchased: ";
  cin >> itemPrice;
  cout << "Enter the tax rate: ";
  cin >> taxRate;
  salesTax = itemPrice * taxRate;
  cout << "The sales tax for the purchase is: " << salesTax << endl;
  totalSaleAmt = itemPrice + salesTax;
  cout << "The total of the sale is: " << totalSaleAmt << endl;

  return 0;
}
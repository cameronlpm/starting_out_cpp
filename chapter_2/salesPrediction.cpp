/*
The East Coast sales division of a company generates 58 percent of total sales. Based on that percentage, write a program that will predict how much the East Coast division will generate if the company has $8.6 million in sales this year.
*/
#include <iostream>
using namespace std;

int main()
{
  double eastCoastSales, totalSales;

  totalSales = 8.6;                   // in $ Millions
  eastCoastSales = totalSales * 0.58; // EastCoast division generates 58% of total sales
  cout << "The East Coast sales division is projected to generate $" << eastCoastSales << " million." << endl;

  return 0;
}

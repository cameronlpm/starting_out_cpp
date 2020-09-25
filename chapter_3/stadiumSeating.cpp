// There are three seating categories at a stadium. For a softball game, Class A seats cost $15, Class B seats cost $12, and Class C seats cost $9. This program should ask how many tickets for each class of seats were sold, then display the amount of income generated from ticket sales. The format of the dollar amount should be in fixed-point notation with two decimal places of precision.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float Aprice = 15, Bprice = 12, Cprice = 9, totalSales;
    int Aquantity, Bquantity, Cquantity;

    cout << "How many Class A tickets were sold? ";
    cin >> Aquantity;
    cout << "How many Class B tickets were sold? ";
    cin >> Bquantity;
    cout << "How many Class C tickets were sold? ";
    cin >> Cquantity;

    cout << setprecision(2) << fixed << showpoint;
    totalSales = Aprice * Aquantity + Bprice * Bquantity + Cprice * Cquantity;
    cout << "Total income from tickets sales: $" << totalSales << endl;
    return 0;
}
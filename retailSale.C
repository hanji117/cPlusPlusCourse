/*
Edgar Cruz
CS 111
Lab3-1
9-10-15

This program will get 2 numbers from the key board and output the average number.
*/
#include <iostream> 
using namespace std;

int main()
{
  double price, taxrate, taxamt, totalpr;//first number, second number, tax amount, total price.


  cout << "\nPlease enter the price of the item being purchased: $"; // prompts the user and they input a number
  cin >> price; // price is stored in price
  cout << "Please enter the sales tax rate: $"; // prompts the user and they input the tax rate
  cin >> taxrate; // tax rate is stored in taxrate
  taxamt = price *(taxrate/100); // equation to find tax
  totalpr = price + taxamt; // equation to find total price
  cout << "The sales tax is $" << taxamt << endl // sales tax
       << "The total price is $" << totalpr << endl; // total price
  cout << endl;

  return 0;
}

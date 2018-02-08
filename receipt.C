/*
Edgar Cruz 
2/17/15
CS 111 
Lab 5-1

This program will generate a store receipt.
*/
#include <iostream>//for cin and cout
#include <iomanip>
using namespace std;

int main()// one main function in every program.
{
  const double TAX = 7.75;//sales tax rate
  string name, item, date;// person's name , item , date 
  double price, tax, total;// item's price, tax, and total
  


  cout << "\nEnter sales person's name: " ;// prompt
  cin >> name;// person's name is stored in the variable name.
  cout << "Enter today's date (mm/dd/yy): "; // prompt
  cin.ignore(20, '\n'); // to clear input stream 
  getline(cin,date); // the date is stored in the variable date


  cout << "Enter the item name: ";// prompt
  cin >> item; // item name is stored in the variable item.
  cout << "Enter the price to the item: ";// prompt
  cin >> price; // item's price is stored in the variable price.

  cout << setw(30) << setfill ('-') << "-" << endl;//30 dashes
  cout << "\n\"Your Friendly Neighbor Store\" " << endl;// outputs what's in "".
  cout << endl;
  cout << setfill(' ') << setw(30) << date << endl// (' ') to clear the dashes  
       << setw(30) << name << endl; // 30 blank spaces
  cout << endl;
  tax = price * (TAX/100); // tax calculation
  cout << left << setw(20) << item << right << setw(10) << fixed << setprecision(2)<< price << endl;
  cout << left << setw(20) << "Sales tax" << right << setw(10) << tax << endl;// left and right alignment.
  total = price + tax;
  cout << left << setw(20) << "Total" << right << setw(10) << total << endl;
  cout << endl;
  cout << setfill ('-') << setw(30) << "-" << endl;
  cout << "Thank you for shopping with us! " << endl;
  cout << endl;
  return 0;
}

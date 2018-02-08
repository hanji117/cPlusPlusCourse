/*
Edgar Cruz
CS 111
2/25/15
Assignment #3: Program 1 software.C

This program will ask for the number of units sold and it will compute the total cost of the purchase. 
*/

#include <iostream>//for cin and cout 
#include <iomanip>//for setprecision
using namespace std;

int main()// Every C++ program must have one main function.
{//beginning of the program
  //Declare variables
  int quantity;//The number of units sold will be stored in the variable quantity.
  double price, n_price, discount, total;//Price is the price of each unit, n_price is the new price, 
                                         //discount is discount, and the total is stored in total.
                                        
  cout << "\nPlease enter the number of units sold: ";//Output to the screen what is within "".
  cin >> quantity;//get an integer number from the keyboard and put it into quantity (memory)

  price = 99.00;// price of each unit
  cout << fixed << setprecision(2);//Round to 2 decimal places

  if(quantity < 0)//If true, quantity is invalid.
    cout << "invalid units" << endl;//Ouput to the screen what is within "".
  else if (quantity >= 0 && quantity <=9)//From this point on quantity is ok.
  {
    n_price = quantity * price;//Calculations for the quantity 0-9.
    total = n_price;
    cout << "$" << total << endl;
  }
  else if(quantity >= 10 && quantity <=19)
  {
    n_price = quantity * price;//The "total" of this equation is stored in n_price.  
    discount = n_price * (20.0/100);//This will give you 20% of whatever is in n_price.
    total = n_price - discount;//Subtracting discount from n_price gives the new total. 
  
    cout << "$" << total << endl;//output to the screen what is in "" and what is in total.
  }
  else if(quantity >= 20 && quantity <=49)
  {
    n_price = quantity * price; 
    discount = n_price * (30.0/100);
    total = n_price - discount;

    cout << "$" << total << endl;
  }
  else if(quantity >= 50 && quantity <= 99)
  {
    n_price = quantity * price;
    discount = n_price * (40.0/100);
    total = n_price - discount;

    cout << "$" << total << endl;
  }
  else 
  {
    n_price = quantity * price;
    discount = n_price * (50.0/100);
    total = n_price - discount;

    cout << "$" << total << endl;
  }

  cout << endl;  

  return 0;//return 0(the program ended with no errors) to the operating system.
}//end of the program


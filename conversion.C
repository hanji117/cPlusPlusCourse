/*
Edgar Cruz
CS 111 Lab
2/12/15
Lab 4-2

This program will convert a length in centimeters to yards, feet, and inches.
*/

#include <iostream>// for cin and cout
using namespace std;

int main()// Every C++ program must have one main function.
{// The beginning of the program.
  int cm, i_inch, yd, ft;// For centimeters, inches (integer), yards, and feet.
  double d_inch; // For inches (if it contains a decimal).

  cout << "\n*****************************************************************************" << endl// stars
       << "This program will convert a length in centimeters to yards, feet, and inches." << endl// Outputs what is in "".
       << "*****************************************************************************\n" << endl;// stars
  
  cout << "Please enter a length in centimeters: ";// ouput to the screen what is within "".
  cin >> cm; // get a centimeter from the keyboard and put it into cm (memory).
  cout <<  endl;
  d_inch = cm / 2.54; // convert cm to inches
  i_inch = d_inch + 0.5;//Type coercion. Round inches to nearest whole number. It will give you an error message but it's ok. 
   cout << cm << " is about " << d_inch << " inches rounded to " << i_inch << " inches." << endl; // outputs what is within "" and outputs what is stored in cm, d_inch, and i_inch.

  yd = i_inch / 36; // Divide the rounded inch by 36 to find out how many yards there are.

  cout << i_inch  << " inches = " << yd << " yards, ";

  i_inch = i_inch % 36; // Take the rounded inch and mod to find the the remainder of the rounded number and that is now stored into i_inch.
  ft = i_inch / 12;// the new rounded inch is now divided by 12 to find out how many ft are in the remainer.

  cout << ft  << " feet, and ";
  i_inch = i_inch % 12; // take the  new rounded inch and mod to find the remainder and that is then stored in i_inch.

  cout << i_inch << " inches" << endl // out puts what is wihtin "" and what is stored in i_inch, yd, and feet.
       << endl
       << "Thank you for using the program. Good bye." << endl// outputs what is within "".
       << endl;
   
  return 0;// return 0 (the program ended with no errors) to the operating system.
}// end of program.

/*
Edgar Cruz
2/26/15
CS 111
Lab 6-2

This program will ask for a month and tell the season.
*/

#include <iostream>
using namespace std;

int main()
{
  int month;

  cout << "\nPlease enter a month (1 for January, 12 for December): ";
  cin >> month;

  switch (month)
  {
   case 12:
   case 1:
   case 2: cout << "winter" << endl;
           break; 
   case 3:
   case 4:
   case 5: cout << "spring" << endl;
           break;
   case 6:
   case 7:
   case 8: cout << "summer" << endl;
           break;
   case 9:
   case 10:
   case 11: cout << "fall" << endl;
            break;
   default: cout << "Invalid month" << endl;
  }

  cout << endl;
return 0;
}

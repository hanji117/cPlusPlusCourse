/*
Edgar Cruz
2/26/15
CS 111
Lab 6-2

This program will ask the user for a positive integer value and it will use the for loop to get the sum of all the integers from 1 up to the number entered.
*/

#include <iostream>
using namespace std;

int main()
{
  int num, sum;
  sum = 0;

  cout << "\nPlease enter a positive integer: ";
  cin >> num;

  if (num <= -1 || num ==0)
  {
      cout << endl;
      cout << num << " is invalid." << endl;
      cout << endl;
  }
  else // num is positive
  {
    for(int i = num; i >= 1; i--)// the first number goes into i and it doesn't decrement right away.
      {
	sum = sum + i;
      }
     cout << "\nThe sum of all the numbers from 1 to " << num << " is " << sum << endl;
     cout << endl;
  }
  return 0;
}

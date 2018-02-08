/*
Edgar Cruz
CS 111
3/5/15
Lab 7-2

This program will read an unknown number of positive or negative numbers from the keyboard and output "even" if the number is even or "odd if it is odd.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int num, e_num, o_num, count, total;

  cout << "\nEnter a number: ";
  cin >> num;


  e_num = 0;
  o_num = 0;
  count = 0;
  total = 0;

  while(num !=0)
  { 
      if (num % 2 == 0)
      {
	cout << num << " is Even" << endl;
	e_num= e_num++;
	total = total + num;
	count = count + 1;
      }
      else
      { 
	cout << num << " is Odd" << endl;
	o_num = o_num++;
	total = total + num;
	count = count + 1;
      }

      cout << "\nEnter a number: ";
      cin >> num;
  } 
  if (count == 0)
    cout << "\nNo numbers were entered"<< endl << endl;

  else 
  {
   cout << endl;
   cout << e_num << " even numbers" << endl;
   cout << o_num << " odd numbers" << endl;
   cout << fixed << setprecision(2) <<  "The average is " << (double)total/count << endl << endl;
  }
  return 0;
}

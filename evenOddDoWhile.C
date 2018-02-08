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
  char answer;//yes or no

  cout << endl;
  do 
  {
  cout << "Do you have an age to enter? y or n: ";
  cin >> answer;
  }while (answer != 'y' && answer != 'Y'&& answer != 'n' &&  answer != 'N');
  //do while includes ;
  e_num = 0;
  o_num = 0;
  count = 0;
  total = 0;

  while(answer == 'y' || answer == 'Y') 
  { 
     cout << "Enter a number: ";
     cin >> num;
        if (num % 2 == 0)
	{
	  cout << num << " is even" << endl;
	  e_num = e_num++;
	  total = total + num;
	  count = count + 1;
	}
        else
        { 
	  cout << num << " is odd" << endl;
	  o_num = o_num++;
	  total = total + num;
	  count = count + 1;
         }
	  cout << endl;
         do
         {
          cout << "Do you have a number to check? y or n: ";
          cin >> answer;
         }while (answer != 'y' && answer != 'Y'&& answer != 'n' && answer != 'N');
  }  //if the do while condition is true then it repeats until its false.
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

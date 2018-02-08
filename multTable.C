/*
Edgar Cruz
3/3/15
CS 111 
Lab 7-1

This program will display a multiplication table.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  cout << "     1  2  3  4  5  6  7  8  9" << endl;
  cout << "------------------------------" << endl;//5 spaces before 1
  
  for(int row = 1; row <=9; row++)
    {
      cout << setw(2) << row << "|";

      for(int col = 1; col <= 9; col++)
	cout << setw(3) << row * col;    //use setw(3)

      cout << endl;
    }

  return 0;
}

/*
Edgar Cruz
2/26/15
CS 111 
Lab 6-2

This program will display the double and triple for all odd numbers from 99 down to 1. 
*/

#include <iostream>
#include <iomanip>//for setw
using namespace std;

int main()
{
  cout << setw(10) << "Number" << setw(10) << "Double" << setw(10) << "Triple"<< endl;
  for(int i = 99; i >= 1; i = i - 2)
    {
      cout << setw(10) << i << setw(10) << i * 2 <<  setw(10) << i * 3 << endl;
    } 
  return 0;
}

/*
Edgar Cruz
2/24/15
CS 111
Lab 6-1

This program will read 4 numbers (integers) and display the largest value of the 3 numbers.
*/

#include <iostream>
using namespace std;

int main ()
{
  int n1, n2, n3, n4, largest;
  
  cout << "\nEnter four numbers: ";
  cin >> n1 >> n2 >> n3 >> n4;

  if (n1 > n2)
    largest = n1;
  else 
    largest = n2;

  if (n3 > largest)
    largest = n3;
  //else
  //largest = largest; 

  if (n4 > largest)
      largest = n4;
  
  cout << "The largest number is: " << largest << endl;
  cout << endl;     

  return 0;
}

/*
Edgar Cruz//complete
CS 111
Assignment 6: program 1 barChart.C
4/9/15

This program will display a bar graph comparing each store's sales.
*/

#include <iostream>
using namespace std;

void getSales(int ar[],int size);
void showBarGraph (const int ar1[], int size2);

int main()
{
  const int SIZE = 5;
  int array[SIZE];
  
  getSales(array, SIZE);
  showBarGraph (array, SIZE);
  
  return 0;
}

void getSales(int ar[], int size)
{
  int num;

  cout << endl;

  for (int i = 0; i < size; i++)
  {
      cout << "Enter today's sales for store " << i + 1 << ": ";
      cin >> num;
      ar[i] =  num / 100;
  }
  cout << endl;
}

void showBarGraph (const int ar1[], int size2)
{
      for (int i = 0; i < size2; i++)
      {
           cout << "Store " << i + 1 << ": ";
	   
	     for (int star = 1; star <= ar1[i] ; star++)
	     cout << "*";

	     cout << endl;
       }

      cout << endl;  
}
     

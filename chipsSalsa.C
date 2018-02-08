/*
Edgar Cruz
CS 111
Assignment 6: program 2 chipsSalsa.C
4/13/15

This program will produce a report that displays sales for each salsa type, total sales, and the names of the highest selling and lowest selling products.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void fillJarsSoldArray (string salsa[], int ar[] ,int size);
void printSales (string salsa2[], const int ar2[], int size2);
int getTotal (const int ar2[], int size3);
void getHighestLowestSelling(const int ar3[], int size4, int & highestIndex, int & lowestIndex);

int main()
{
  const int SIZE = 5;
  string salsaType[] = {"mild", "medium", "sweet", "hot", "zesty"};
  int array[SIZE];
  int total, highest_Index, lowest_Index;

  fillJarsSoldArray (salsaType, array, SIZE);
  printSales (salsaType, array, SIZE);
  total = getTotal(array, SIZE);

  cout << "The total number of jars sold is " << total << endl;

  getHighestLowestSelling(array, SIZE, highest_Index, lowest_Index);

  cout << "The highest selling type is " << salsaType[highest_Index] << endl;
  cout << "The lowest selling type is " << salsaType[lowest_Index] << endl;

  return 0;
}

void fillJarsSoldArray (string salsa[], int ar[] ,int size)
{
  for (int i = 0; i < size; i++)
  {
    do 
    {
      cout << "Enter the number of jars sold for " << salsa[i]<< ": ";
      cin >> ar[i];
 
 
    } while (ar[i] < 0);
   
      cout << endl;
  }
}

void printSales(string salsa2[], const int ar2[], int size2)
{
  for (int i = 0; i < size2; i++) 
    cout << left << setw(6) << salsa2[i] << right << setw(9) << ar2[i] << endl;
}

int getTotal(const int ar2[], int size3)
{
  int totalSales = 0;

  for (int i = 0; i < size3; i++)
    totalSales += ar2[i];

  return totalSales; 
}
void getHighestLowestSelling(const int ar3[], int size4, int & highestIndex, int & lowestIndex)
{
  highestIndex = 0;
  lowestIndex = 0;

  for (int i = 1; i < size4; i++)
    if (ar3[i] > ar3[highestIndex])
      highestIndex = i;

  for (int i = 1; i < size4; i++)
    if (ar3[i] < ar3[lowestIndex])
      lowestIndex = i;
}

/*
Edgar Cruz
CS 111
Lab 10-1
3/24/15

This function outputs the average number, the highest number, and the key number. 
*/

#include <iostream>
using namespace std;

void fillArray(int ar[], int size1);
double findAvg(const int ar2[], int size2);
int findHighest(const int ar3[], int size3);
bool findKey(const int ar4[], int size4, int key2);
void doubleArray(int ar5[], int size5);
void printArray(bool result1, int key3, double avg2, int highest, const int ar6[], int size6);

int main()
{
  double average;
  int largest, key;
 
  const int SIZE = 5;
  int array[SIZE];
  bool result;

  fillArray(array, SIZE);
  average = findAvg(array, SIZE);
  largest = findHighest(array, SIZE);
  
  cout << "\nEnter a key: ";
  cin >> key;

  result = findKey(array,SIZE,key);
  doubleArray(array, SIZE);
  printArray(result, key, average, largest, array, SIZE);
  return 0;
}

void fillArray(int ar[], int size1)
{
  cout << endl;

  for(int i = 0; i < size1; i++)
  {
  cout << "Enter a number: ";
  cin >> ar[i];
  }
}

double findAvg(const int ar2[], int size2)
{
  int total = 0;
  double avg;
  for (int i = 0; i < size2; i++)
  {
    total += ar2[i];
    avg = (double)total/ size2;
 
  }
 return avg;
}

int findHighest(const int ar3[], int size3)
{
  int highestIndex = 0;

  for (int i = 1; i < size3; i++)
    if (ar3[i] > ar3[highestIndex])
      highestIndex = i;

  return ar3[highestIndex];
}

bool findKey(const int ar4[], int size4, int key2)
{
  for (int i = 0; i < size4; i++)
  {
    if (ar4[i] == key2)
      return true;
  }

  return false; //it seems that return can only return one thing at a time.

}

void doubleArray(int ar5[], int size5)
{
  for (int i = 0; i < size5; i++)
    ar5[i] = ar5[i] * 2;

}

void printArray(bool result1, int key3, double avg2, int highest, const int ar6[], int size6)
{
  cout << "\nThe average number is " << avg2 << endl;
  cout << "\nThe highest number is " << highest << endl;
  cout << "\nEnter a key: " << key3 << endl;

  if (result1 == true)
    cout << key3 << " was found in the array." << endl;
  else
    cout << key3 << " was not found in the array." << endl;

  cout << "\nThe new numbers in the array are ";

  for (int i = 0; i < size6; i++)
       cout << ar6[i] << " ";

    cout << endl << endl;

}

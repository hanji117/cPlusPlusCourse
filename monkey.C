/*
Edgar Cruz
CS 111
4/14/15
Assignment #6: Program 3 monkey.C

This program will create a report that shows how many pounds of food each of its three monkeys eats each day during a typical week.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 7;
const int SIZETWO = 3;

void fillArray(int array[][SIZETWO]);
void showAveragePerDay(const int array[][SIZETWO]);
void showLeastGreatestAmt(const int array[][SIZETWO]);

int main()
{
  int array[SIZE][SIZETWO];

  fillArray(array);
  showAveragePerDay(array);
  showLeastGreatestAmt(array);

  return 0;
}  

void fillArray(int array[][SIZETWO])
{
 for(int monkey = 0; monkey < SIZETWO; monkey++) 
 {
   cout << "Enter the number of pounds Monkey " << monkey + 1 << " ate each day" << endl;

  for (int day = 0; day < SIZE; day++)
  {
    do
    {
      cout << setw(12) << "Day " << day + 1 << ": ";
      cin >> array[day][monkey];
    }while (array[day][monkey] < 0);

    cout << endl;
  }
 }
}


void showAveragePerDay(const int array[][SIZETWO])
{
  int const NUM = 24;
  int total;
  int count = 0;

  cout << "Day" << setw(NUM - 2) << "Average pounds" << endl;

  cout << fixed << setprecision(2);

  for (int day = 0; day < SIZE ; day++)
  {
      total = 0;
      cout << day + 1 << setw(NUM);

      for (int monkey = 0; monkey < SIZETWO; monkey++)
      {
        total += array[day][monkey];
      }

      cout << (double)total/SIZETWO << endl;
  }
}


 
void showLeastGreatestAmt(const int array[][SIZETWO])
{
int highestIndex = 0;
int lowestIndex = 0;

  for (int day = 0; day < SIZE; day++)
  {
    for (int monkey = 0; monkey < SIZETWO; monkey++)
      if (array[day][monkey] > highestIndex)
	 highestIndex = array[day][monkey];
  }

  for (int days = 0; days < SIZE; days++)
  {
    for (int monkey = 0; monkey < SIZETWO; monkey++)
      if (array[days][monkey] < lowestIndex)
	 lowestIndex = array[days][monkey];
  }

  cout << "The least amount ate is " << lowestIndex << endl;

  cout << "The largest amount ate is " << highestIndex << endl;
}

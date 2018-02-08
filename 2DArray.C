/*
Edgar Cruz
CS 111
3/25/15
Lab 10-2

This program will output the students' scores along with the labels and the average for each test and each student.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int COL = 5;
const int ROW = 3;

void InputScores(int ar[][ROW]);
void displayTable(const int ar2[][ROW]);

int main()
{

  int array[COL][ROW];

  InputScores(array);
  displayTable(array);

  return 0;
}

void InputScores(int ar[][ROW])
{
  int score;
  cout << endl;
  for (int row = 0; row < ROW; row++)
  {
    cout << "Enter scores for Test #" << row + 1 << endl;;
    for (int col = 0; col < COL; col++)
    {
      cout << "     Student#" << col + 1 << ":";
      cin >> ar[col][row];
    }
  }
}

void displayTable(const int ar2[][ROW])
{
  int const NUM = 10;
  int total = 0;

  cout << "\n  Test#" << setw(NUM) << "Stu 1" << setw(NUM) << "Stu 2" << setw(NUM) <<"Stu 3" << setw(NUM) << "Stu 4" << setw(NUM) << "Stu 5" << setw(NUM) << "Average" << endl;

  cout << fixed << setprecision(1);
  for (int row = 0; row < ROW; row++)
  {   
    cout << setw(7) << row + 1;
    total = 0;
    for (int col = 0; col < COL; col++)
    {
      cout << setw(NUM) << ar2[col][row];
      total += ar2[col][row];
    }
    cout << setw(NUM) << (double)total/COL << endl;
  }

  cout << "Average" ; 

  for(int col = 0; col < COL; col++)
  {
    total = 0;
    for(int row = 0; row < ROW; row++)
      {
	total += ar2[col][row];
      } 
    cout << setw(NUM) << (double)total/ROW; 
  }
  cout << endl << endl;
}

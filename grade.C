/*
Edgar Cruz
2/19/15
CS 111
Lab 5-2

This program will ask the user for a grade and display one of the messages depending on the grade.
*/

#include <iostream>//for cin and cout
using namespace std;

int main()// one main function in every program.
{

  char grade;
  bool pass;
  pass = false;

  cout << "\nPlease enter your grade: " ;
  cin >> grade;

  if (grade == 'A' || grade == 'B')
    {   
      cout << "Good job" << endl;
      pass = true;
    }
  else if (grade == 'C')
    {
      cout << "Ok" << endl;
      pass = true;
    }
  else if (grade == 'D' || grade == 'F')
    {
      cout << "Work Harder" << endl;
      // pass = false;
    }
  else
    {
      cout << "Invalid grade" << endl;
      //pass = false;
    }

  if (pass == true)
    cout << "Congratulations! You passed the class." << endl;
  //  else 
  // cout << " " << endl;
  cout << endl;
  return 0;
}

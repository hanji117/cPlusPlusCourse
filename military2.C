/*
Edgar Cruz
2/24/15
CS 111
Lab 6-1

This program will ask the user to enter the user's gender and age and it will display a message depending on the gender and age.
*/

#include <iostream>
using namespace std;

int main()
{
  char gender;
  int age, num1;
  
  cout << "\nPlease enter your gender: ";
  cin >> gender;

  if (gender != 'm' && gender != 'M' && gender != 'f' && gender != 'F')// if one is false the entire line is ignored. Thus the cout doesn't go into effect.That's why if you insert p it will make every single && true and thus it will execute invalid gender.
    cout << "invalid gender" << endl;
  else // gender is ok
  {
    cout << "Please enter your age: ";
    cin >> age;

      if (age < 0)// if true it executes invalid age. If false then nothing is executed.
	cout << "invalid age" << endl;
      else // gender and age are ok
      {
	  if (gender == 'f' || gender == 'F')// if false cout is not executed
	      cout << "Thank you for using the system, but we were only looking for men." << endl;
	  else if (age <=16)
          {
              num1 = 17 - age;
              cout << "You need to wait " << num1 << " more year(s)." << endl;
              
          }
          else if (age >= 17 && age <=42)
              cout << "The military is hiring more people like you." << endl;
          else if (age >= 43)
              cout << "Thank you for using the system." << endl;
          
      }
  }
  cout << endl;

  return 0;
}// end of program

/*
Edgar Cruz
2/19/15
CS 111
Lab 5-2

This program will ask the user to enter his/her age and it will display a message.
*/
#include <iostream>// for cin and cout 
using namespace std;

int main()// one main function in every program.
{
  //Declare variable
  int age, num;

  cout << "\nEnter your age: ";
  cin >> age;

  if ( age < 0)
    cout << "Invalid age\n" << endl;
  else if ( age <= 16 )
    {
     num = 17 - age;
     cout << "You need to wait " << num << " more year(s)\n" << endl;
    }
  else if  ( age >= 17 && age <= 42)
    cout << "The military is hiring more people like you.\n" << endl;
  else 
    cout << "Thank you for using the system.\n" << endl;; 
  return 0;
}

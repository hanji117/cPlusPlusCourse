/*
Edgar Cruz
CS 111
Lab 1
2/10/15

This program will get a name, an age, a gpa, and a gender from the user and output the name, age, gpa, and gender.
*/
#include <iostream>//for cin and cout
using namespace std;
int main()// Every C++ program must have one main function.
{//The beginning of the program.
  //Declare variables
  string firstName;// For name 
  int age;// For the age 
  double gpa;// For the gpa
  char gender;// For the gender

  cout << "\nPlease enter your first name ";// Output to the screen what is within "".
  cin >> firstName; // Get a string from the keyboard and put it into firstName(memory)
  cout << "Please enter your age "; // output to the screen what is within "".
  cin >> age; // get an integer number from the keyboard and put it into age(memory).
  cout << "Please enter your gpa ";// output to the screen what is within "".
  cin >> gpa;// get a double from the keyboard and put it into gpa(memory).
  cout << "Please enter your gender (m for male and f for female) ";// output to the screen what is within "".
  cin >> gender; // get a character from the keyboard and put it into gender(memory).
  //output to the result to the screen
  cout << "\nHello, " << firstName << endl//output to the screen what is within ""
       << "Your age is " << age << endl   //then output what is in firstName, age
       << "Your gpa is " << gpa << endl   //gpa, and gender.
       << "Your gender is " << gender << endl;
  cout << endl;// skips a line
 
  return 0;// return 0 (the program ended with no errors) to the operating system.
}//end of the program

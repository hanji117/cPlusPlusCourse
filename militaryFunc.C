/*
Edgar Cruz 
CS 111
3/16/15
Lab 9-1

This program will verify the eligibility of joining the military from the user's gender and age.
*/

#include <iostream>
using namespace std;

void showProgInfo();//add a semicolon at the end.
void getInfo(string & fname, char & gender, int & age);
bool verifyEligibility(int age, char gender);
void printLetter(bool eligible, string fName);

int main()
{
  int age2;
  char gen;
  string f_name;
  bool t;

  showProgInfo();//call showProgInfo
  
  getInfo(f_name, gen, age2);//call getInfo
  
  t = verifyEligibility(age2, gen);//call verifyEligibility
  
  printLetter(t, f_name);//call printLetter

  //cout << true << endl;  outputs 1
  //cout << false << endl; outputs 0

  cout << endl; 
  return 0;
}

void showProgInfo()//copy the function header and paste above int main().
{
  cout << "\n********************************************************************" << endl;
  cout << "This program will tell you if you are eligible to join the military." << endl;
  cout << "********************************************************************" << endl;
}

void getInfo(string & fName, char & gender, int & age)
{
  cout << "\nEnter first name: ";
  cin >> fName;
  cout << "Enter gender: ";
  cin >> gender;
  cout << "Enter age: ";
  cin >> age;
}

bool verifyEligibility(int age, char gender)
{
  bool eligible;

  if (gender == 'f' || gender == 'F')
    eligible = false;
  else if (gender == 'm' || gender == 'M')
  {
      if (age >= 18)
        eligible = true;
      else 
	eligible = false;
  }

  return eligible;
}

void printLetter(bool eligible, string fName)
{
     if (eligible == true)
       cout << "\nDear " << fName << "," << " Please consider joining the military." << endl;

     else 
       cout << "\nThank you for applying." << endl;
}

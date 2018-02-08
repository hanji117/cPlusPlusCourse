/*
Edgar Cruz
CS 111 
3/19/15
Lab 9-2 conversionFunc.C

This program will convert cm to inches and it will output the length expressed in yards, feet, and inches.
*/

#include <iostream>
using namespace std;

void showProgInfo();
int getLengthCM();
int convertCMtoInch(int cm);//(int centi);
void convertToYdFtIn(int i_inch,int & yard, int & ft , int & inch);
void showResult(int i_inch, int yard, int ft, int inch);

int main()
{
  int centi,inches, yard2, ft2, inch2;

  showProgInfo();
  centi = getLengthCM();
  inches = convertCMtoInch(centi);
  convertToYdFtIn(inches, yard2, ft2, inch2);
  showResult(inches, yard2, ft2, inch2);
  return 0;
}

void showProgInfo()
{
  cout << "\n*****************************************************************************" << endl;
  cout << "This program will convert a length in centimeters to yards, feet, and inches." << endl;
  cout << "*****************************************************************************" << endl;
}

int getLengthCM()
{
  int cm;//delcare as a local variable
  cout <<"\nPlease enter a length in centimeters: ";
  cin >> cm;
  return cm;
}

int convertCMtoInch(int cm)
{
  int i_inch;
  double d_inch;
  d_inch = cm / 2.54;
  i_inch = (int)(d_inch + .5);
  return i_inch;
}

void convertToYdFtIn(int i_inch, int & yard, int & ft , int & inch)
{
  
  yard = i_inch/36;
  i_inch = i_inch % 36;
  ft = i_inch /12;
  i_inch = i_inch % 12;
  inch = i_inch;

}

void showResult(int i_inch, int yard, int ft, int inch)
{
  cout << endl;
  cout << i_inch << " inches = " << yard << " yards, " << ft << " feet, and " << inch << " inches." << endl << endl;
}

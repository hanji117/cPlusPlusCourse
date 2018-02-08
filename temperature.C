/*
Edgar Cruz
CS 111 
Assignment 2: program 2
2/18/15

This program will ask for a Celsius temperature, convert it to the Fahrenheit
temperature and round it to the nearest integer.
*/
#include <iostream>//for cin and cout.
using namespace std;

int main()//every C++ program must have one main function.
{//the beginning of the program.
  //declare variables.
  int C, i_F;//an integer will be stored in the variable C.
             //i_F is fahrenheit rounded to the
             //nearest integer.
  double d_F;// a double will be stored in the variable d_F.

  cout << "\nEnter a temperature in Celsius: ";//output to the screen what is within "".
  cin >> C;// gets an integer from the keyboard and puts it into C (memory).
   
  d_F = 1.8 * C + 32;//formula for conversion.
  i_F = (int)(d_F + .5);//(int)(d_F +.5) is type casting.
  cout << endl;
  cout << C << " C = " << i_F << " F" << endl;//output to the screen what is within "".
                                              //then output what is in C and i_F.
  cout << endl;

 
  return 0;//return 0; (the program ended with no errors) to the operating system.
}//end of the program.

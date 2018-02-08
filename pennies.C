/*
Edgar Cruz
CS 111
Assignment 4: program 2 pennies.C
3/14/15

This program will calculate how much a person would earn over period of time if his or her salary is one penny the first day and two pennies the second day, and continues to double each day. This program will also display a table showig how much the salary was for each day, and then show the total pay at the end of the period.
*/

#include <iostream>//For cin and cout.
#include <iomanip>//For setw.
using namespace std;

int main()//Every C++ program must have one main function.
{ //The beginning of the program.
  //Declare variables.

  int numOfDays;//An integer will be stored in numOfDays(number of days).
  double penny, total;//A double will be stored in penny and total.
  
  //The following do while loop makes sure the user 
  //does not enter negative days or 0.
  do 
  {
    cout <<"Enter the number of days you worked: ";//Output to the screen 
                                                   //what is within "".
    cin >> numOfDays;//Get an integer from the keyboard and put it into 
                     //numOfDays(memory).
  }while(numOfDays <= 0); //If false then it gets out of the loop.

  penny = 0.01;
  total = 0;

  //The following for loop will continue to execute until it reaches the 
  //number of days the user entered.
  for (int i = 1; i <= numOfDays; i++)
  {
    total += penny; //Same as total = total + penny;
    cout << setw(5) << i << setw(10) << penny << endl;//Output what is in
                                                   //i(memory) and penny(memory).
    penny *= 2; //Same as penny = penny * 2;
  }
  
  cout << "\nTotal" << setw(10) << total << endl << endl;//Output to the screen 
                       //what is within "".Output to the screen what is in total.

  return 0;// return 0 (the program ended with no errors) to the operating system.
}//End of program.

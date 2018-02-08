/*
Edgar Cruz 
CS 111
Assignment 2: program 3
2/18/15

This program will convert time (in seconds) to hours, minutes, and seconds.
*/
#include <iostream>//for cin and cout.
using namespace std;

int main()// every C++ program must have one main function.
{ //the beginning of the program.
  //declare variables.

  int time, hour, min, sec;// an integer will be stored in time,
                           // hour, min, and sec.

  cout << "\nEnter the time in seconds: ";//output to the screen what is within "".
  cin >> time;//gets an integer from the keyboard and puts it into time (memory).
  
  hour =  time / 3600;//calculations to find hours, mins, and seconds.
  time = time % 3600;
  min = time /60;
  time = time % 60;
  sec = time;

  cout << endl;
  cout << hour << " hours " << min << " minutes " << sec <<" seconds" << endl;//output to the screen what is within "".
                                                                              //then output what is in hour, min, and sec.
                                        
  cout << endl;
  
  return 0;// return 0 (the program ended with no errors) to the operating system.
}//end of program.

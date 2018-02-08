/*
Edgar Cruz
CS 111
Assignment 4: program 3 stars.C
3/14/15

This program will show 1 star on the first line, 2 stars on the second line, .....n stars on the nth line.
*/

#include <iostream>//For cin and cout.
using namespace std;

int main()//Every C++ program must have one main function.
{//The beginning of the program.
 //Declare variables.
  int n;//An integer will be stored in n.

  cout << "\nPlease enter a number: ";//Output to the screen what is within "".
  cin >> n;//Gets an integer from the keyboard and puts it into n (memory).
  cout << "n = " << n << endl; //Output to the screen what is within "".
                               //Output what is in n.
  
  for (int row = 1; row <= n; row++)//If true executes what's inside
                                    //({})until it's false.
  {
    for (int col = n; col > row ; col--)//If true executes what's inside 
                                        //(cout << " ") until it's false. 
	   cout << " "; //Print a space
    for (int star = 1; row >= star ; star++)//If true executes what's inside
                                            //(cout << "*") until it's false.
	   cout << "*";//Output to the screen what is within "".


           cout << endl;//The for loop can only execute 1 thing without braces,
	                //therefore this cout is not executed until the last for
	                //loop is done.	               
  }

  cout << endl;

  return 0;// return 0 (the program ended with no errors) to the operating system.
}//end of program.

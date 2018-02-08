/*
Edgar Cruz
CS 111 
Assignment 4: program 4 e.C
3/14/15

This program will calculate the approximate value of e.
*/

#include <iostream>//For cin and cout.
#include <iomanip>//For setw and setprecision.
using namespace std;

int main()//Every C++ program must have one main function.
{//The beginning of the program.
 //Declare variables.
  int n;//An integer will be stored in n.
  double num, e;//A double will be stored in num and e.
  
  cout << "\nEnter n: "; //Output to the screen what is within "".
  cin >> n;//Gets an integer from the keyboard and puts it into n (memory).
  cout << "n = " << n;//Output to the screen what is within "". Output what
                      //is in n.
  
  e = 0.0;

  for (int row = 0; row <= n; row++)
  {
      num = 1.0;

      for (int col = 1; col <= row; col++)//To calculate the factorial.
      num = num * col; 
      
      e = e + 1 /num;//Equivalent to e += 1/num.
  }
  if (n <= 8)
    cout << setw(21) << fixed << setprecision(14)<<  e  << endl << endl;
  //Allocates 21 spaces. Rounds to 14 decimal places. Output what is in e.
  else 
    cout << setw(20) << fixed << setprecision(14)<<  e  << endl << endl;
  //Allocates 20 spaces. Rounds to 14 decimal places. Output what is in e.
  return 0;//return 0 (the program ended with no errors) to the operating system.
}//end of program.

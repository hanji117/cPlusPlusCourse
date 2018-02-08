/*
Edgar Cruz
CS 111
Assignment 4: program 5
3/15/15

This program will generate a random number between 1 and 100 and it will ask the user to guess what the number is.
*/

#include <iostream>//For cin and cout.
#include <iomanip>//For setw.
using namespace std;

int main()//Every C++ program must have one main function.
{//The beginning of the program.
 //Declare variables.

  srand(time(0)); //Generates a different sequence of 
                  //random numbers every run.
  int num, guess;//An integer will be stored in num and guess.

  num = rand()%100 + 1; //num gets some random number between 1 and 100.

  cout << "Guess a number between 1 and 100. Enter your guess: ";
                       //Outputs to the screen what is within "".
  cin >> guess;//Gets an integer from the keyboard and 
               //puts it into guess (memory).

  //Checks to see if the user guessed correctly
  if (guess == num)
    cout << "You guessed it right!" << endl << endl;
  else //If not this executes until the user guesses correctly.  
  {
    do 
    {
      if (guess > num)
      {
        cout << setw(28) << "Too high, try again." << endl;
        cout << "Enter your guess: ";
        cin >> guess;
      }  
      else
      { 
        cout << setw(27) <<  "Too low, try again." << endl; 
        cout << "Enter your guess: ";
        cin >> guess;
      }
    }while (guess != num);//Will continue to execute what's inside until 
                          //it's false. Once it's false, it gets out of the
                          //do while loop.

    cout << "You guessed it right!" << endl << endl;
  }

  return 0;// Return 0 (the program ended with no errors) to the operating system.
}//End of program.

/*
Edgar Cruz
CS 111
Assignment 2: program 1
2/18/15

This program will get a lowercase letter from the keyboard and output the uppercase of the letter.
*/
#include <iostream>//for cin and cout.
using namespace std;

int main()//every C++ program must have one main function.
{//the beginning of the program.
  //declare variables.
  char lowercase, uppercase;//lowercase letter is stored in the variable lowercase.
                            //uppercase letter is stored in the variable uppercase.
  int offset; // an integer number will be stored in the variable offset.
  cout << "\nEnter a lowercase letter: " ;//output to the screen what is within"".
  cin >> lowercase;// gets a character from the keyboard and puts it into lowercase(memory).
  offset = 'a' - 'A';// on the ASCII table a is 97 and A is 65.
                         // 97-65 = 32. 32 is stored in the variable offset.
  uppercase = (char)(lowercase - offset);//(char)(lowercase - offset) is type casting.
                                              //The integer is converted to a character and 
                                              //is stored in the variable uppercase. 
  cout << "The uppercase is " <<  uppercase << "." << endl;//output to the screen what is within ""
                                                           //then output what is in uppercase(memory).
  cout << endl;
  return 0;//return 0 (the program ended with no errors) to the operating system.
}//end of the program.

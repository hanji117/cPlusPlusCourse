/*
Edgar Cruz
3/3/15
CS 111
Lab 7-1

This program will display the characters for the ASCII values 33 through 127.
*/

#include <iostream>
using namespace std;

int main()
{
  int count = 0;

  cout << endl;
  for (int i = 33; i <= 127; i++)
    {

      cout << (char)i << " ";
      count++;//increment by one then it goes to the if statement
      //which is not executed until count is 16. 
      if (count == 16)//when its 16 it executes 
	{             //endl and then it resets count to 0.
	  cout << endl;    
	  count = 0; 
	}// apparently mod can be used too
      //if ((i-32)%16==0)
      //cout endl;

    }
  cout << endl <<endl;
  
return 0;
}

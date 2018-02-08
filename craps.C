/*
Edgar Cruz//did I get credit for this?
CS 111 
3/10/15
Lab 8-1

This program will simulate the game of craps.
*/

#include <iostream>
using namespace std;

int main()
{
  srand(time(0)); // Initialize random number generator.
  int firstRoll, roll2;

  firstRoll = (rand()%6 + 1) + (rand()%6 + 1);
  cout << firstRoll << endl;
      if (firstRoll == 7 || firstRoll == 11)
	cout << "win" << endl; 
      else if (firstRoll == 2 || firstRoll == 3 || firstRoll == 12)
	cout << "lose" << endl;
      else 
      {
	do{
           roll2 = (rand()%6 + 1) + (rand()%6 + 1);
           cout << roll2 << endl;
	}while (roll2 != 7 && roll2 != firstRoll);//while true go into the loop
      
	if (roll2 == firstRoll)//if second roll is 7 you lose. Only 1st roll can be a 7 and win.
           cout << "win" << endl;
        else 
           cout << "lose" << endl;
      
      }
 return 0;
}

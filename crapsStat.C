/*
Edgar Cruz//did I get credit for this?
CS 111 
3/10/15
Lab 8-1

This program will simulate the game of craps.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const int NUM_GAMES = 100000;

  srand(time(0)); // Initialize random number generator.
  int firstRoll, roll2, num_w, num_l;
  double totalW, totalL;
  
  num_w = 0;
  num_l = 0;


  for (int i = 1;  i <= NUM_GAMES; i++)
  {  
  firstRoll = (rand()%6 + 1) + (rand()%6 + 1);
  //  cout << firstRoll << endl;
      if (firstRoll == 7 || firstRoll == 11)
      {
	//     cout << "win" << endl; 
         num_w++;
      }
      else if (firstRoll == 2 || firstRoll == 3 || firstRoll == 12)
      {
	// cout << "lose" << endl;
	num_l++;
      }
      else 
      {
	do{
           roll2 = (rand()%6 + 1) + (rand()%6 + 1);
	   // cout << roll2 << endl;
	}while (roll2 != 7 && roll2 != firstRoll);//while true go into the loop
      
	if (roll2 == firstRoll)//if second roll is 7 you lose. Only 1st roll can be a 7 and win.
	{
	  // cout << "win" << endl;
	  num_w++;
	}
        else 
        {
	  // cout << "lose" << endl;
	     num_l++;
	}
      }
  }
      cout << fixed << setprecision(3) << endl;
      totalW = ((double)num_w / NUM_GAMES)* 100;
      totalL = ((double)num_l / NUM_GAMES) * 100;
      cout << " " << "win %" << " " << "lose%" << endl;
      cout << totalW << " " << totalL << endl;
      cout << endl; 
 return 0;
}

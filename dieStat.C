/*
Edgar Cruz
CS 111 
Lab 9-2 dieStat.C
3/22/15

This program will roll a die a large number of times and calculate the probability of rolling each number.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  srand(time(0)); //ensures random() generates a different sequence of random numbers in each run

  const int SIDES = 6; //the number of sides in a die
  const int NUM_ROLLS = 1000000; //the number of rolls

  int roll; //each roll
  int rolls[SIDES + 1]; //array that contains counters

  //initialize the array here
  for (int i = 0; i < SIDES + 1; i++)
    rolls[i] = 0;

  //roll a die NUM_ROLLS times and keep track of how many times each number was rolled
  for (int i = 1; i <= NUM_ROLLS; i++)
    {
      roll = rand()%SIDES + 1;  //roll a die. Random number 1-6. roll is assigned a #. 
                                //rolls (the array) [some # 1-6] goes in slot 1-6.
      rolls[roll]++; //increment. You got a 1 for example thus in array slot 1 increment the 0
      //to 1.
    }

  //Show the contents of the array (the number of times each number was rolled) along with the probability of rolling each number. Don't show the content in index 0.
  for(int i = 1; i <= 6; i++ )
    cout << i << ":" << setw(7) << rolls[i] <<  "  "  << fixed << setprecision(4) << (double)rolls[i]/NUM_ROLLS * 100 << "%" << endl;


  return 0;
}


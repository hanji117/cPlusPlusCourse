/*
Edgar Cruz//ask if she has this program checked off
CS 111
3/12/15
Lab 8-2

This program will read 3 numbers from the user and tell the largest number.
*/

#include <iostream>
using namespace std;

//prototypes
void showProgInfo();
int getNum();
int findLargest(int num1, int num2, int num3);
void printResult(int num1, int num2, int num3 , int largestNum);

int main()
{
  int num1, num2, num3, largestNum;//declaration statements to store values found
                      //in the function on the right of =.
  showProgInfo();//call showProgInfo. Void functions just show name(); in main.

 /*for (int i = 0; i <=3; i++)//0 to 3 is 4 numbers.
    {
    num1 = getNum();//name(); in main. Some number is in the function getNum();
                     //You have to make a variable thus num = getNum();
    num2 = getNum();

    num3 = getNum();
    }
 */
/* // works but we haven't learned this yet.
int i, ar[3];
for (i =0; i <3; i++)
ar[i] = getNum();
*/
  num1 = getNum();
  num2 = getNum();
  num3 = getNum();
  largestNum = findLargest(num1, num2, num3);
  printResult(num1, num2, num3, largestNum);
  return 0;
}

void showProgInfo()
{
  cout << endl;
  cout << "******************************************************************" << endl
       << "This program will ask you to enter 3 numbers and find the largest." << endl
       << "******************************************************************" << endl;
}

int getNum()
{
  int number;
  cout << "Please enter one number: " << endl;
  cin >> number;

  return number;//returns what was inputed by the user.
}

int findLargest(int num1, int num2, int num3)
{
  int largestNum;   
  if (num1 > num2)
    largestNum = num1;
  else
    largestNum = num2;
  if (num3 > largestNum)
    largestNum = num3;
    
  return largestNum;

  }

void printResult(int num1, int num2, int num3 , int largestNum)
{
  cout << num1 << ", " << num2 << ", " << num3 <<": " << "Largest is " << largestNum << endl;
}

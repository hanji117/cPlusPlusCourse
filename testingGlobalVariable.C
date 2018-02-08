//From Test2
//I predict I got a 94% on the test.
#include <iostream>
using namespace std;

int x= 9;

void Func(int n1, int n2);

int main()
{
  int num1 = 5;
  int num2 = 6;

  Func(num1, num2);

x--;

  cout << x << endl;

  for(int i = 50; i >= 0;i= i -2) // i-2)
    cout << i << " ";

  cout << endl;
  return 0;
}

void Func(int n1, int n2)
{
int x = 1;
 
 n1 = n1 + n2;

  x--;
  cout << n1 << " " << x << endl;//outputs 11 and 0
}

//Outputs
/*
11 0
8
50 48 46 .... 4 2 0
*/

/*
Edgar Cruz
CS111 
Lab 13-2
4/23/15

This program will reassign a new string to a c-string using the strcpy function provided in cstring.h.

*/
#include <iostream>
using namespace std;
void myStrcpy(char dest[], const char source[]);
int main()
{
  char str1[20] = "Hello CS111";
  cout << str1 <<endl; //Hello CS111
  myStrcpy(str1, "Oh PHYS302");
  cout << str1 << endl; // Oh PHYS302
  return 0;
}
void myStrcpy(char dest[], const char source[])
{
  int i;  
  for( i=0; source[i] != '\0';i++)
      dest[i]= source[i];
    
dest[i] = '\0';
  //Hint: I have only 4 lines of code inside this function
  //Don.t forget to place .\0. at the end.
}

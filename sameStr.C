/*
Edgar Cruz
CS111 
Lab 13-2
4/23/15

This program will implement a function that will get 2 c-strings and return true if they are the same and false if different. 
*/

#include <iostream>
using namespace std;

bool sameStrings(char s1[],char s2[]);
int main()
{
  const int SIZE = 20;
  bool ans;
  char str1[SIZE];
  char str2[SIZE];
  strcpy(str1, "apple");
  strcpy(str2, "app");
  // ans = sameStrings("apple", "app");
  ans = sameStrings(str1, str2);
  cout << ans; //0
  strcpy(str1, "apple");
  strcpy(str2, "APPLE");
  //ans = sameStrings("apple", "APPLE");
  ans = sameStrings(str1, str2);
  cout << ans; //1
  strcpy(str1, "tee");
  strcpy(str2, "tea");
  //ans = sameStrings("tee","tea");
  ans = sameStrings(str1, str2);
  cout << ans; //0
  strcpy(str1, "tee");
  strcpy(str2, "ton");
  //ans = sameStrings("tee","ton");
  ans = sameStrings(str1, str2);
  cout << ans; //0
  strcpy(str1, "tea");
  strcpy(str2, "tea");
  //ans = sameStrings("tea","tea");
  ans = sameStrings(str1, str2);
  cout << ans; //1
  strcpy(str1, "Tea");
  strcpy(str2, "tEa");
  //ans = sameStrings("Tea","tEa");
  ans = sameStrings(str1, str2);
  cout << ans; //1
  return 0;
}

bool sameStrings(char s1[], char s2[])
{
  int len1, len2, i;

  for (len1 = 0; s1[len1] != '\0';len1++)
    ;
  for (len2 = 0; s2[len2] != '\0'; len2++)
    ;


  if(len1 != len2)
    return false;

  //  return !((len1 - len2) != 0 );


  for (i = 0; s1[i] != '\0'; i++)
  {
    if ('A' <= s1[i] && s1[i] <='Z')
           s1[i] += 32;
  }
  for (i = 0; s2[i] != '\0'; i++)
  {
    if ('A' <= s2[i] && s2[i] <='Z')
           s2[i] += 32;
  }


  for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
  {
     if(s1[i] != s2[i])
       return false; 
    
  }
   return true;  
  

}

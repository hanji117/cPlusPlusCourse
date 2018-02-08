/*
Edgar Cruz
4/30/15
CS 111
project.C
*/

#include <iostream>
using namespace std;
 
#include "myStrCharFunc.h"//made a header file use double quotation marks

//Preparation
const int SIZE = 26;
const int MAX = 30; 
typedef char cstr[MAX];

struct word
{
  int count;
  cstr longest;
  cstr shortest;
};

void initializeArray(word ar[]);

int main()
{
  word array[SIZE];
  char cstr[20] = "hi";
  cout << myToUpper('e') << endl;
  cout << myStrlen("apple") << endl;
  myStrcpy(cstr, "hello");//not going to work. you cant change the hardcoded need to make a cstr var\
iable.
 cout << cstr << endl;
 initializeArray(array);
 //cout << array << endl;
 return 0;
}

void initializeArray(word ar[])
{
  for (int i=0; i < SIZE; i++)
    {
      //cstr s;
      //myStrcpy(dest, source); 
    ar[i].count = 0;

    myStrcpy(ar[i].longest,"");//correct both

  myStrcpy(ar[i].shortest, "12345678912345678912345678912");//29 characters make up a word 

    }
}

void readFile(word ar[])
{
  ifstream inFile;
  inFile.open("project2.dat");

  if (!inFile)
    {
      cout << "Cannot open the file." << endl;
      exit(1);
    }
  else {
    inFile >> word;
    while(fin)
      {
	processWord(word, ar);
	fin >> word;
      }
 
}

void processWord()
{
  num++;
  ar[num].count;

  slot = myToUpper(word[0]/'b') -'A'

/*
int main()
{
  char cstr[20] = "hi";
  cout << myToUpper('e') << endl;
  cout << myStrlen("apple") << endl;
  myStrcpy(cstr, "hello");//not going to work. you cant change the hardcoded need to make a cstr variable.
  cout << cstr << endl;
  return 0;
}
*/

/*
Edgar Cruz
4/30/15
CS 111
project.C
*/

#include <iostream>
#include <fstream>
using namespace std;

#include "myStrCharFunc.h"//to make a header file use double quotation marks

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
void readFile(word ar[]);
void processWord(cstr a, word ar[]);
void printInfoOnOneLetter(word ar[]);
void printInfoOnAllLetters(word ar[]);

int main()
{
  int num;
  word array[SIZE];
  
  initializeArray(array);
  readFile(array);
 
  do{
      cout << "\n1. Show information on all the letters. "<< endl
           << "2. Show information on one letter. " << endl
           << "3. Quit the program "<< endl;
      cout << "Enter your choice here: ";
      cin >> num;
       
       switch(num)
       {
          case 1: printInfoOnAllLetters(array);
                 break; 
          case 2: printInfoOnOneLetter(array);
                 break;
          case 3: cout << "Thank you for using the system. Good bye." << endl << endl;
                 break;
          default: cout << "Invalid choice. Try again." << endl; 
       }
     } while(num <= 0 || num >= 4);

 return 0;
}
 
void initializeArray(word ar[])
{
  for (int i = 0; i < SIZE; i++)
    {   
      ar[i].count = 0;
      myStrcpy(ar[i].longest,"");
      myStrcpy(ar[i].shortest, "12345678912345678912345678912");
                               //29 characters make up a word. Last one for null character.
    }
}
 
void readFile(word ar[])
{
  ifstream inFile;
  inFile.open("project2.dat");

  cstr w; 
  if (!inFile)
  {
      cout << "Cannot open the file." << endl;
      exit(1);
  }
  else {
    inFile >> w;
         while(inFile)
         {
          processWord(w, ar);
          inFile >> w;
         }
	 inFile.close();
       }
}

void processWord(cstr a, word ar[])//An array of datatype word with 26 slots.
{
  //   cout << "***** " << a << endl;
    int slot;
        
    slot = myToUpper(a[0]) -'A';//myToUpper activates if the letter is lowercase only.
    ar[slot].count++;//slot determins the letter. ex. E is slot 4 
    // A is slot 0, B is slot 1 , C is slot 2 , D is slot 3 , E is slot 4.
    // while inFile still contains a 
    //word processWord will activate and increment the slot with the corresponding letter.

    // cout << slot << endl;//to see what the slot number is for the first letter of the 
    // word from project2.dat
   
    int lenShort = myStrlen(ar[slot].shortest);   
    int lenWd = myStrlen(a); 
    int lenLong = myStrlen(ar[slot].longest);
   
    if (lenWd > lenLong)
      myStrcpy(ar[slot].longest, a);
    if (lenWd < lenShort)
      myStrcpy(ar[slot].shortest, a);
}

void printInfoOnOneLetter(word ar[])
{
 char letter;
 cout << "\nWhich letter are you interested in?: " ;
 cin >> letter;
 int slot = letter - 'A';
 if (ar[slot].count == 0)
   cout << "Frequency: " << ar[slot].count << endl;
 else 
 {
    cout << "Frequency: " << ar[slot].count << endl
         << "Longest: " << ar[slot].longest << endl
         << "Shortest: " << ar[slot].shortest << endl;
 }
}

void printInfoOnAllLetters(word ar[])
{
  //  for (int i = 0; i < SIZE; i++)
  // cout << (char)('A' + i) << endl;
  cout << endl; 
  for (int i = 0; i < SIZE; i++)
    {
      cout << (char)('A' + i) 
           << " "
	   << ar[i].count 
           << ":";
  
      if (ar[i].count == 0)
         cout << " " << endl;
      else 
      {
         for (int star = 0; star < ar[i].count; star++)
         cout << "*" ;
    
      cout << ar[i].longest << "-"
           << ar[i].shortest << endl;
      }
    }
}






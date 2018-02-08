/*
Edgar Cruz
CS 111
Assignment #3: Program 3 temperatureSwitch.C
2/27/15

This program will convert a temperature between Fahrenheit and Celsius.
*/
#include <iostream>//for cin and cout
#include <iomanip>//for setprecision
using namespace std;

int main()//every C++ program must have one main function
{//the beginning of the program
 //declare variables
  int c_temp, f_temp;//an integer will be stored in c_temp and f_temp
  double F, C;// a double will be stored in F and C
  char tempType;// a character will be stored in tempType
 
  cout << "\nWhich temperature do you have? Enter F for Fahrenheit or C for Celsius: ";
  //output to the screen what is within "".
  cin >> tempType;//Get a character from the keyboard and put it into tempType(memory)

  cout << fixed << setprecision(2);//Rounds to 2 decimal places.
                                                                
  switch (tempType)
  {
    case 'C': cout << "Enter a temperature in Celsius: "; //Executes everything in this case
                                                          //if the temperature type is Celsius.
              cin >> c_temp; //Get an integer number from the keyboard and put it into c_temp(memory).
              F = 9.0/5 * c_temp + 32;  //Equation to convert Celsius to Fahrenheit.
	      cout << c_temp << " Celsius = " << F << " Fahrenheit" << endl; 

 	     break;//Stops here and gets out of the switch.
    case 'F': cout << "Enter a temperature in Fahrenheit: "; //Executes everything in this case if 
                                                             //the temperature type is Fahrenheit.
              cin >> f_temp; //Get an integer number from the keyboard and put it into f_temp(memory).
              C = (5.0 * (f_temp - 32))/9; //equation to convert Fahrenheit to Celsius.
	      cout << f_temp << " Fahrenheit = " << C << " Celsius " << endl; //Output to the screen what
	                                                     //is within "". Output what is in f_temp and C.
	     break;//Stops here and gets out of the switch.
    default: cout << "Invalid choice" << endl;   //Output what is within "".
  }
  cout << endl;
  return 0;//return 0 (the program ended with no errors) to the operating system.
}//end of program

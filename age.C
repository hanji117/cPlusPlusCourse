/*
Edgar Cruz
CS 111
Assignment 4: program 1 age.C
3/12/15

This program will read an unknown number of ages and it will output the average age and youngest and oldest ages.
*/

#include<iostream>//For cin and cout.
using namespace std;

int main()//Every C++ program must have one main function.
{ //The beginning of the program.
  //Declare variables.

  int age, count, total, oldest, youngest;//An integer will be stored in age,
                                          //count, total, oldest, and youngest.
  double avg;//A double will be stored in avg.

  cout << "\nEnter an age: ";//Output to the screen what is within "".
  cin >> age;//Gets an integer from the keyboard and puts it into age (memory).

  total = 0;
  count = 0;
  oldest = -999;
  youngest = 999;

  while (age >= 0) //valid age
  {
    if (age > oldest)//If true then oldest = age; is executed.
      oldest = age;  
    if (age < youngest)// If true then youngest = age; is executed.
      youngest = age;

    count++;//Increment by 1 each time an age is entered by the user.
    total += age; // Same as total = total + age;

    cout << "Enter an age: "; //Output to the screen what is within "".
    cin >> age; //Gets an integer from the keyboard and puts it
               // into age (memory).
  }

  if (count == 0)
  {
    cout << "\nOutputs are" << endl;
    cout << "   No ages were entered" << endl << endl;//Output to the screen 
                                                   //what is within "".
  }
  else // The user entered at least 1 age.
  {
      avg = (double)total/count;
      cout << endl;
      cout << "Outputs are" << endl;
      cout << "   " << avg << " (average age)" << endl//Output to the screen what is
	                                    // in avg and what is within "".
	   << "   " << oldest << " (oldest)" << endl//Output to the screen what is 
	                                   //in oldest and what is within "".
	   << "   " << youngest << " (youngest)" << endl << endl; //Output to the screen 
                                    //what is in youngest and what is within "".
  }

  return 0;// return 0 (the program ended with no errors) to the operating system.
}//End of program.


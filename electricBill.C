/*
Edgar Cruz
CS 111
Assignment #3: Program 2 electricBill.C
2/26/15

This program will calculate an electric bill.
*/

#include <iostream>//for cin and cout
#include <iomanip>//for setprecision
using namespace std;

int main()// every C++ program must have one main function
{//the beginning of the program
 //declare variables
  int month, cMeterReading, pMeterReading, nMeterReading, over;//an integer will 
                                                               //be stored in month,
                                                               //current meter reading, previous
                                                               //meter reading, new meter reading, and over
  double cost; // a double will be stored in cost.

  cout << "Enter the month: ";//Output to the screen what is within "".
  cin >> month;//Get an integer number from the keyboard and put it into month(memory)
 
  cout << fixed << setprecision(2);//rounds to 2 decimal places.
                                    
  if (month <= 0 || month > 12)
    cout << month << " is an invalid month" << endl;
  else // the month is good 
  {
        cout << "Enter the current meter reading: ";
        cin >> cMeterReading;
        cout << "Enter the previous meter reading: ";
        cin >> pMeterReading;

    if (cMeterReading < 0 || cMeterReading < pMeterReading || pMeterReading < 0) 
      //Executes if the current meter reading is less than 0 or if the current meter reading is less than 
      //the previous meter reading or if the previous meter reading is less than 0.
      //The current reading has to be the same or greater (>=)than the previous reading. Not <. 
         cout << "The readings are invalid" << endl;// ouput to the screen what is within""
    else //The readings are good.
    {    //All is fine. Calculate the amount due.
         //current meter reading - previous meter reading = new meter reading
         nMeterReading = cMeterReading - pMeterReading;
      if (nMeterReading >= 0 && nMeterReading <= 400)//execute if the new meter 
	                                             //reading is between  0 - 400 KWH
      {
             cost = 8.5;
             cout << "\nYou consumed " << nMeterReading << " and your amount due is $" << cost << endl;
      }      //output to the screen what is within "". Then output what is in nMeterReading and cost.
      else //This Executes if the new meter reading is over 400 KWH.
      {
              over = nMeterReading - 400; //This is a necessary calculation to find out how much is over 400 KWH
                                          //because 0 through 400 KWH charges $8.50
	                                  //and anything over 400 KWH will be charged 
	                                  //7.525 cents for each KWH over 400
	                                  //(if the month is May - Sept.) or 6.575
	                                  //cents for each KWH over 400 (for all other months).      
	if(nMeterReading > 400 && (month == 5 || month == 6 || month == 7 || month == 8 || month== 9))
	{//if the new meter reading is over 400 and the month is May-Sept., this executes.
	      cost = 8.5 + (over/100 * 7.525);//For some reason if you divide 7.525 by 100
	                                      //you get $31.07. If you divide "over" by 100 
	                                      //you get $31.08. Why?
	                                     
              cout << "\nYou consumed " << nMeterReading << " and your amount due is $" << cost << endl;
        }     //output to the screen what is within "". Ouput what is in nMeterReading and cost.
	else if (nMeterReading > 400)//If the new meter reading is over 400 and the month is not May-Sept.,
	{                            //this executes.
       	      cost = 8.5 + (over/100 * 6.575); //calculation to find the cost
              cout << "\nYou consumed " << nMeterReading << " and your amount due is $" << cost << endl;
        } //output to the screen what is within"". Ouput what is in nMeterReading and cost.
      }  
    }
  }  
    cout << endl;
   return 0; //return 0 (the program ended with no errors) to the operating system.
}//end of program

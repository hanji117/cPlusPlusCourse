/*
Edgar Cruz
CS 111 
Lab 12-1
4/14/15

This program will produce an output file named "carout.dat".
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main()
{
  ifstream inFile;
  ofstream outFile;

  int num, num2;
  int count = 0;
  int totalMilesDriven = 0;
  int totalGallonsOfGasUsed = 0;
  double average, avg;
  string name;

  inFile.open("car.dat");

  outFile.open("carout.dat");

  if(!inFile)
  {
      cout << "Cannot open the file." << endl;
  }
  else 
  {    
    outFile << left << setw(10) << "Model Name" << right <<  setw(19) << "Miles Driven" << setw(24) << "Gallons of Gas Used"  << setw(19) << "MPG" << endl;

     
      inFile >> name >> num >> num2;

      while(inFile)
      {
        totalMilesDriven += num;
  	count++;

	totalGallonsOfGasUsed += num2;
	outFile << fixed << setprecision(2);
	avg = (double)num/ num2;
	 
        outFile << left << setw(10) << name << right << setw(19) << num << setw(24) << num2 << setw(19) << fixed << setprecision(2) << avg << endl;
        inFile >> name >> num >> num2;
      }
      if (count != 0)
      {
	  average = (double)totalMilesDriven/ totalGallonsOfGasUsed;
	  outFile << endl;
	  outFile << "\nTotal Miles Driven: " << totalMilesDriven << " miles" << endl;
	  outFile << "Total Gallons of Gas Used: " << totalGallonsOfGasUsed << " gallons" << endl;
	  outFile << fixed << setprecision(2) <<  "Average MPG: " << average << " miles per gallon" << endl;
      }
      else 
	outFile << "There were no cars in the input file." << endl; 

     inFile.close();
  }
  
  
  outFile.close();
 
  return 0;
}

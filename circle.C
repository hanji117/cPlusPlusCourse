/*
Edgar Cruz
Lab 3-2 
2-5-15

This program will calculate the area and the circumference of a circle. 
*/


#include<iostream>
using namespace std;
int main()//Every C++ program must have one main function 
{
  const double PI = 3.14;// PI is 3.14

  double rad, area, circumference; // rad is radius, area is the area of the circle, circumference is the circumference of the circle.

  cout << "\nEnter the radius of a circle: "; // output to the screen what is within "".
  cin >> rad; // get a double number from the keyboard and put it into rad(memory).
  area = PI * rad * rad; // area is calculated and stored in area.
  circumference = 2 * PI * rad; // circumference is calculated and stored in circumference.

  cout << "The area of the circle is " << area << endl // output to the screen what is within "". Output area.
       << "The circumference of the circle is " << circumference << endl; // output to the screen what is within "". Output circumference.
  cout << endl;

  return 0;
}

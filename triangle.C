/*
Edgar Cruz
CS 111 
4/7/15
Lab 11-1

This program will receive 3 points of a triangle and it will tell if the triangle is equilateral, isosceles or scalene.
*/

#include <iostream>
#include <cmath>
using namespace std;

void displayInfo();
void fillXandY(int & num1, int & num2);
double CalcLength(int num_1 , int num_2 ,int num_3 , int num_4);
void absFunc(double lengthOne, double lengthTwo, double lengthThree);

int main()
{
  int x1, y1, x2, y2, x3, y3;
  double length1, length2, length3;
  displayInfo();
  cout << "Point 1" << endl;
  fillXandY(x1,y1);
  cout << "\nPoint 2" << endl;
  fillXandY(x2,y2);
  cout << "\nPoint 3" << endl;
  fillXandY(x3,y3);
  length1 = CalcLength(x1 ,y1 ,x2, y2);//pt1 to pt2
  length2 = CalcLength(x2 ,y2 ,x3, y3);//pt2 to pt3
  length3 = CalcLength(x3 ,y3 ,x1, y1);//pt3 to pt1
  absFunc(length1 ,length2 ,length3);
  return 0;
}

void displayInfo()
{
  cout << "\n***************************************************************" << endl;
  cout << "This program will ask you to enter 3 points of a triangle and  " << endl;
  cout << "tell what kind of triangle it is. Please hit ENTER to continue." << endl;
  cout << "***************************************************************" << endl;

  cin.get();//pg.3 wk 5-1
}

void fillXandY(int & num1, int & num2)
{
  cout << "     Enter the x-coordinate: ";
  cin >> num1;
  cout << "     Enter the y-coordinate: ";
  cin >> num2;
}

double CalcLength(int xOne, int yOne, int xTwo, int yTwo)
{
  double c, b, cResult, bResult, total, length; //is this ok?
  c = yTwo - yOne;
  b = xTwo - xOne;

  //  cout << c << " when an integer is stored in a double variable" << endl;//turns out to still be integers

  cResult = pow(c,2.0);//try w/o 2.0 use 2.
  bResult = pow(b,2.0);

  total = cResult + bResult;
  length = sqrt(total);

  return length;
}

void absFunc(double lengthOne, double lengthTwo, double lengthThree)
{

  if (fabs (lengthOne -  lengthTwo) < 0.00001 && fabs (lengthTwo -lengthThree) < 0.00001 && fabs (lengthThree - lengthOne) < 0.00001)
    cout << "\nThis triangle is equilateral" << endl << endl;

  else if (fabs (lengthOne -  lengthTwo) < 0.00001 || fabs (lengthTwo -lengthThree) < 0.00001 || fabs (lengthThree - lengthOne) < 0.00001)
    cout << "\nThis triangle is isosceles" << endl << endl;
  else 
    cout << "\nThis triangle is scalene" << endl << endl;

}

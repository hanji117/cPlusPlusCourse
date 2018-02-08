//Written by Kazumi Slott
//2-16-11
//Exercise in lecture notes for Week 4-2 
#include <iostream> //for cin, cout
using namespace std;

int main()
{
  //declare variables
  double radius; //radius of circle
  double area; //area of circle
  double circumference; //circumference of circle
  const double PI = 3.14159;

  //get information
  cout << "Enter the radius: ";
  cin >> radius;
 
  //calculate the area & circumefrence
  area = PI * radius * radius;
  circumference = 2 * PI * radius; 

  //output the information
  cout << "Area: " << (int)(area + 0.5) << " <-- rounded from " << area << endl;
  cout << "Circumference: " << (int)(circumference + 0.5) << " <-- rounded from " << circumference << endl;
 
  return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double d;
  cout << "Enter a number: ";
  cin >> d;

  cout << fixed << setprecision(3) <<  d << endl;

  return 0;
}

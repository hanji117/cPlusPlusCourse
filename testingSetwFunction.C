#include <iostream>
#include <iomanip>
using namespace std;

int squareNum(int n1);
int cubeNum(int n2);

int main()
{
  cout << setw(10) << "Number" << setw(10) << "Square" << setw(10) << "Cube" << endl;

  for (int num = 10; num >= 1; num--)
    cout << setw(10) << num << setw(10) << squareNum(num) << setw(10) << cubeNum(num) << endl;

  return 0;
}

int squareNum(int n1)
{
  return n1 * n1;
}

int cubeNum(int n2)
{
  return n2 * n2 * n2; 
}

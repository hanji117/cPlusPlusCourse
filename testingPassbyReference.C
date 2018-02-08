#include <iostream>
using namespace std;

void func (int & n);

int main()
{
  int num;
  num = 2;

  cout << num << endl;
  func(num);
  cout << num << endl;

  return 0;
}
void func (int & n)
{
  n = n * 2;
}

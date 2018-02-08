#include <iostream>
using namespace std;

int getSum(int n1, int n2);
void showResult(int s);

int main()
{
  int num1, num2, sum;

  num1 = 3;
  num2 = 5;

  sum = getSum(num1, num2);

  showResult(sum);
  cout << sum << endl;
  return 0;
}

int getSum(int n1, int n2)
{
  int total;
  total = n1 + n2;
  return total;
}

void showResult(int s)
{
  s *= 2;
  cout << "The sum of the two numbers is " << s << endl;
}

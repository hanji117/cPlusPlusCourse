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

int getSum(int num1, int num2)
{
  int sum;
  sum = num1 + num2;
  return sum;
}

void showResult(int sum)
{
  //sum *= 2;
  cout << "The sum of the two numbers is " << sum << endl;
}


#include <iostream>
using namespace std;

int main()
{

  int n,row, col;

  cout << "\nEnter a number: ";
  cin >> n;
  for (row = n; row >=1; row--)
  {
      for (col = row; col >=1; col--)
	cout << "*";
        cout << endl;
  }

  return 0;
}

/*
Edgar Cruz
CS 111
Lab 12-2 Assignment 7 
4/16/15 - 4/26/15

This program will display the number of employees from the input file employees.dat. It will also output all the male employees to the output file maleOut.dat. The user will enter an employee id and the program will ouput to the screen the first and last name of that employee.If the employee id doesn't exist, an appropriate message will be given.The program will find the oldest employee and display that employee's first name. Finally the program will display all the information about that employee on the screen.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct employee
{
  string fName;
  string lName;
  char gender;
  double wage;
  int id;
  int age;
};

int readData(employee empAr[]);
void findMale(employee empAr[],int numEmp);
void findEmployee(employee empAr[],int numEmp);
employee findOldest(employee empAr[], int numEmp);
void printEmployee (employee oldest_1);
void printAllEmp(employee empAr[], int numEmp);
void giveRaise(double raise, employee empAr[], int numEmp);
void swapEmp(int n, int n2, employee empAr[], int numEmp);
void giveRaiseToOneEmployee(employee & e, double raise);

int main()
{
  int n;
  const int MAX_EMP = 100;
  employee empAr[MAX_EMP];
  employee oldest;

  n = readData(empAr);
  cout << "\nThere are " << n << " employees." << endl << endl;
  findMale(empAr, n);
  findEmployee(empAr, n);
  findOldest(empAr, n);
  oldest = findOldest(empAr, n);

  cout << endl;
  cout << oldest.fName << endl << endl;

  printEmployee(oldest);
  cout << endl;
  printAllEmp(empAr, n);
  giveRaise(5.5,empAr,n);
  printAllEmp(empAr, n);
  swapEmp(0, 15, empAr, n);
  printAllEmp(empAr, n);
  swapEmp(0, 20, empAr, n);
  cout << endl;
  giveRaiseToOneEmployee(empAr[0], 2.0);
  printEmployee (empAr[0]);
  cout << endl;
  return 0;
}

int readData(employee empAr[])
{
  int num = 0;
  ifstream inFile;
  inFile.open("employees.dat");

  if(!inFile)
  {
    cout << "Cannot open the file." << endl;
    exit(1);//1 error
  }
  else 
  {
    inFile >> empAr[num].fName >> empAr[num].lName >> empAr[num].gender >> empAr[num].wage >> empAr[num].id >> empAr[num].age;
    while (inFile)
    {
      num++;
      inFile >> empAr[num].fName >> empAr[num].lName >> empAr[num].gender >> empAr[num].wage >> empAr[num].id >> empAr[num].age;
    }
      inFile.close();
  }
    return num;//number of employees
}

void findMale(employee empAr[],int numEmp)
{
  const int NUM = 10;
  int num = 0;
  ofstream outFile;
  outFile.open("maleOut.dat");
  for(int i = 0; i < numEmp; i++)
  {
    num++;
    if (empAr[num].gender == 'M')
      outFile << left << setw(NUM) << empAr[num].id << setw(NUM) << empAr[num].fName << setw(NUM) << empAr[num].lName << endl;
  }
  outFile.close();
}

void findEmployee(employee empAr[],int numEmp)
{
  int id;
  bool found = false;
  cout << "Enter the employee id: ";
  cin >> id;
  cout << endl;

  for(int i = 0; !found && i < numEmp; i++)
  {
    if (empAr[i].id == id)
      {
       cout << empAr[i].fName << " " << empAr[i].lName << endl;
       found = true;
      }
  }
    if (!found)// same as found == false
      cout << "There is no employee with ID " << id << "." << endl;   
}

employee findOldest(employee empAr[], int numEmp)
{
  int highestIndex = 0;

  for (int i=1; i < numEmp; i++)
  {
    if (empAr[i].age > empAr[highestIndex].age)
      {
        highestIndex = i; 
      }
  }
  return empAr[highestIndex];
}

void printEmployee (employee old)
{
  cout <<  fixed << setprecision(2);
  const int SIZE = 10;

  cout << left << setw(SIZE) << old.fName << setw(SIZE) << old.lName << setw(SIZE) << old.gender << setw(SIZE) << old.wage << setw(SIZE) << old.id << setw(SIZE) << old.age<< endl;

}

void printAllEmp(employee empAr[], int numEmp)
{
 
  for (int i=0; i < numEmp;i++)
    printEmployee(empAr[i]);

  cout << endl;
}

void giveRaise(double raise, employee empAr[], int numEmp)
{
  raise = (raise/100); // 5.5/100 = .055 = 5.5%
  for(int i = 0; i < numEmp; i++)
    empAr[i].wage = (raise * empAr[i].wage) + empAr[i].wage;
}

void swapEmp(int n,int n2, employee empAr[], int numEmp)
{
  if (n < 0)
    cout << n << " is an invalid index" << endl;
  if (n2 < 0)
    cout << n2 << " is an invalid index" << endl;
  if (n > numEmp)
    cout << n << " is an invalid index" << endl;
  if (n2 > numEmp)
    cout << n2 << " is an invalid index" << endl;
  else 
    {
      employee temp;
      temp = empAr[n];
      empAr[n]= empAr[n2];
      empAr[n2]= temp;
    }
}

void giveRaiseToOneEmployee(employee & e, double raise)
{
   raise = (raise/100);
   e.wage = (raise * e.wage) + e.wage;
}


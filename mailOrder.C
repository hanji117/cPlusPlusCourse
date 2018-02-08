/*
Edgar Cruz
CS 111
3/25/15
Assingment 5 mailOrder.C

This program will output a mail order receipt.
*/

#include<iostream>
#include<iomanip>
using namespace std;

void getCustomerInfo(int & accountNum, int & num1, int & num2,  int & num3, char & countyCode, string & county);
void getItemsInfo(double & totalSaleAmount, int & totalWeight);
double calcDicscount(int month, double total_sale_amount);
double calcSalesTax(double totalAmnt, double discout2, char countyCode);
double calcShipping(int totalWeight);
void outputInvoice(int acctNum, string countyName2, int num_1, int num_2, int num_3, double total, double theDiscount2, double theSalesTax2, double shippingCost2);

int main()
{
  int account_num, n1, n2, n3;
  char county_code;
  string countyName;
  double total_sale_amnt = 0;
  int total_weight = 0;
  double theDiscount, theSalesTax, ShippingCost;

  getCustomerInfo(account_num, n1, n2, n3, county_code, countyName);
  getItemsInfo(total_sale_amnt, total_weight);
  theDiscount = calcDicscount(n1, total_sale_amnt);
  theSalesTax = calcSalesTax(total_sale_amnt, theDiscount, county_code);
  ShippingCost = calcShipping(total_weight);
  outputInvoice(account_num, countyName, n1, n2, n3, total_sale_amnt, theDiscount, theSalesTax, ShippingCost);
 
  return 0;
}

void getCustomerInfo(int & accountNum, int & num1, int & num2,  int & num3, char & countyCode, string & county)
{
  cout <<"\nEnter account number: ";
  cin >> accountNum;
  cout <<"\nEnter the date of sale (month day year): ";
  cin >> num1 >> num2 >> num3;
  cout << "\nEnter county code: ";
  cin >> countyCode;
  
  switch (countyCode)
  {
  case 'S':
    county = "San Diego";
  break;
  case 'O':
    county = "Orange";
  break;
  case 'L':
    county = "Los Angeles";
  break;
  default: cout << "\nInvalid choice" << endl;
  }
}

void getItemsInfo(double & totalSaleAmount, int & totalWeight)
{
  double price;
  int weight;
  char choice;

  cout << "\nDo you want to order an item? Enter Y or N: ";
  cin >> choice;

  while (choice == 'Y')
  {
   
    cout << "   Enter a price: ";
    cin >> price;

    totalSaleAmount += price;

    cout << "   Enter a weight: ";
    cin >> weight;

    totalWeight += weight;
 
    cout << "\nDo you want to order another item? Enter Y or N: ";
    cin >> choice;
  }
}

double calcDicscount(int month, double total_sale_amount)
{

  double discount, discountOnTotalSale;

  if (month == 1 || month == 2 || month == 3 || month == 4 || month == 5)
      discount = 5.0/100;
  
  if (month == 6 || month == 7 || month == 8)
      discount = 10.0/100;
 
  if (month == 9 || month == 10 || month == 11 || month == 12)
      discount = 15.0/100;
  
 discountOnTotalSale =  discount * total_sale_amount;

 return discountOnTotalSale;
}

double calcSalesTax(double totalAmnt, double discount2, char countyCode)
{
  const double TAX = 7.75;
  double salesTax, newTotal, totalSalesTax;

  if (countyCode == 'S')
    salesTax = TAX / 100;
  if (countyCode == 'O')
    salesTax = TAX / 100;
  if (countyCode == 'L') 
    salesTax = 8.25/100;

  newTotal = totalAmnt - discount2;  
  totalSalesTax = salesTax * newTotal;

  return totalSalesTax;
}

double calcShipping(int totalWeight)
{ 
  const int FLAT_RATE = 5;
  const double RATE = .10;
  const double RATE2 = .07;

  int weightOver50, weightOver25; 
  double over50price, between26_50price, shipCalc;
  
  if (totalWeight > 50)
  {
      weightOver50 = totalWeight - 50;
      over50price = RATE2 * weightOver50;
      between26_50price =  25 * RATE;
      shipCalc = over50price + between26_50price + FLAT_RATE;
  }

  else if (totalWeight > 25)//26-50 is 25 lbs.
  {
      weightOver25 = totalWeight - 25;
      between26_50price = weightOver25 * RATE;
      shipCalc = between26_50price + FLAT_RATE;
  }

  else 
      shipCalc = FLAT_RATE;
  
  return shipCalc;
}

void outputInvoice(int acctNum, string countyName2, int num_1, int num_2, int num_3, double total, double theDiscount2, double theSalesTax2, double shippingCost2)
{
  const int NUM = 30;
  const int NUM2 = 7;
  double totalDue;

  cout << endl;
  cout << left << setw(NUM) << "ACCOUNT NUMBER"  << "COUNTY" << endl;
  cout << setw(NUM) << acctNum  << countyName2 << endl << endl;

  cout << "DATE OF SALE " << num_1 << "/" << num_2 << "/" << num_3 << endl; 

  cout << fixed << setprecision(2);

  totalDue = total - theDiscount2 + theSalesTax2 + shippingCost2;

  cout << "\nTOTAL SALE AMOUNT:  $" << right << setw(NUM2) << total << endl
       << "DISCOUNT:           $" << setw(NUM2) << theDiscount2 << endl
       << "SALES TAX:          $" << setw(NUM2) << theSalesTax2 << endl
       << "SHIPPING:           $" << setw(NUM2) << shippingCost2 << endl
       << "TOTAL DUE:          $" << setw(NUM2) << totalDue << endl << endl;
 
}

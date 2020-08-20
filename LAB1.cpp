/* ID: w78034117
Filename: LAB1.cpp
Assignment : 110A Programming Lab 1
Description: To write a program to output a formatted tax report to a file
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

int main ()
{
  ofstream fout;
  double totalIncome, sales, countyTax, stateTax, totalTax; 
  char month[10];
  int year;
  fout.open("SalesTaxData.txt");
  
  cout << "Please enter the month for this report: ";
  cin >> month;
  cout << "Please enter the year for this report: ";
  cin >> year;
  cout << "Please enter the total income for this month: ";
  cin >> totalIncome;
  cout << "Sales Tax Report Saved to file: SalesTaxData.txt" << endl;
  
  sales = totalIncome/1.06;
  stateTax = totalIncome*0.04;
  countyTax = totalIncome*0.02;
  totalTax = stateTax+countyTax;
  fout << "Month: \t\t" << month << " " << year << endl;
  fout << "--------------------------" << endl;
  fout << "Total Collected:\t" << "$" << fixed << right << setw(10) << setprecision(2) << totalIncome << endl;
  fout << "Sales:\t\t\t" << "$" << fixed << right << setw(10) << setprecision(2) << sales << endl;
  fout << "County Sales Tax:\t" << "$" << fixed << right << setw(10) << setprecision(2) << countyTax << endl;
  fout << "State Sales Tax:\t" << "$" << fixed << right << setw(10) << setprecision(2) << stateTax << endl;
  fout << "Total Sales Tax:\t" << "$" << fixed << right << setw(10) << setprecision(2) << totalTax << endl;
  fout << "--------------------------" << endl;
  fout.close();

return 0;
  
}

/*
[xzhu91@hills CS110A]$ g++ LAB1.cpp
[xzhu91@hills CS110A]$ ./a.out
Please enter the month for this report: February
Please enter the year for this report: 2008
Please enter the total income for this month: 21000.98Sales Tax Report Saved to file: SalesTaxData.txt
[xzhu91@hills CS110A]$ cat SalesTaxData.txt
Month:          February 2008
--------------------------
Total Collected:        $  21000.98
Sales:                  $  19812.25
County Sales Tax:       $    420.02
State Sales Tax:        $    840.04
Total Sales Tax:        $   1260.06
--------------------------


[xzhu91@hills CS110A]$ g++ LAB1.cpp
[xzhu91@hills CS110A]$ ./a.out
Please enter the month for this report: October
Please enter the year for this report: 2010
Please enter the total income for this month: 30023.45
Sales Tax Report Saved to file: SalesTaxData.txt
[xzhu91@hills CS110A]$ cat SalesTaxData.txt
Month:          October 2010
--------------------------
Total Collected:        $  30023.45
Sales:                  $  28324.01
County Sales Tax:       $    600.47
State Sales Tax:        $   1200.94
Total Sales Tax:        $   1801.41
--------------------------
[xzhu91@hills CS110A]$





*/



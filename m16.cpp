/* ID: w78034117
Filename: m16.cpp
Assignment : math operators
Description: 
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

/*
int main ()
{
  char name[50];
  int age, bornYear;
  cout << "Enter Name: ";
  cin.getline (name, 50);
  cout << "Enter Age: ";
  cin >> age;
  bornYear = 2016-age;
  cout << name << " was born on " << bornYear << " or " << bornYear+1 << endl;
  return 0;
}

//[xzhu91@hills CS110A]$ ./a.out 
//Enter Name: bob
//Enter Age: 64
//bob was born on 1952 or 1953
//[xzhu91@hills CS110A]$ ./a.out 
//Enter Name: bob ccsf
//Enter Age: 21
//bob ccsf was born on 1995 or 1996
*/

/*
int main ()
{
  const double sugar_per_cookie=1.5/48, butter_per_cookie=1.0/48, flour_per_cookie=2.75/48;
  int cookies;
  cout << "How many cookies you want to make? ";
  cin >> cookies;
  cout << "Ingredient \t\t Cups" << endl;
	cout << "------------------------------" << endl;
  cout << "Sugar" << setw(25) << right << setprecision(3) << fixed << cookies*sugar_per_cookie << endl;
  cout << "Butter" << setw(24) << right << setprecision(3) << fixed << cookies*butter_per_cookie << endl;
  cout << "Flour" << setw(25) << right << setprecision(3) << fixed << cookies*flour_per_cookie << endl;  
  return 0;
}
  */
  
/*
[xzhu91@hills CS110A]$ g++ m16.cpp
[xzhu91@hills CS110A]$ ./a.out
How many cookies you want to make? 33
Ingredient               Cups
------------------------------
Sugar                    1.031
Butter                   0.688
Flour                    1.891
[xzhu91@hills CS110A]$
*/


int main ()
{
  ofstream fout;
  char movieName[80];
  const double adultPrice=10.00;
  const double childPrice=6.00;
  int aduleTickets, childTrickets;
  double grossProfit, netProfit, distributor;
  
  fout.open("movieReport.txt");
  cout << left << setw(10) << "Movie Name: ";
  cin.getline (movieName,80) ;
  cout << left << setw(20) << "Adult Tickets Sold: ";
  cin >>  aduleTickets;
  cout << left << setw(20) << "Child Tickets Sold: ";
  cin >>  childTrickets;
  cout << "Report generated. Filename: movieReport.txt" << endl;
  grossProfit= adultPrice*aduleTickets+childPrice*childTrickets;
  netProfit=grossProfit*0.2;
  distributor=grossProfit-netProfit;
  fout << "Movie Name: \t\t\t" << " \" " << movieName << " \" " << endl;
  fout << "Adult Tickets Sold: " << setw(18) << aduleTickets << endl;
  fout << "Child Tickets Sold: " << setw(18) << childTrickets << endl;
  fout << left << "Gross Box Office Profit:\t"  << fixed << left << setprecision(2) << " $" <<  grossProfit << endl;
  fout << left << "Net Box Office Profit:\t\t"  << fixed << left  << setprecision(2) << " $" << netProfit << endl;
  fout << left << "Amout Paid to Distributor:\t" << fixed << left << setprecision(2) << " $" << distributor << endl;
  
  fout.close();
  return 0 ;
 
}

/*
[xzhu91@hills CS110A]$ g++ m16.cpp
[xzhu91@hills CS110A]$ ./a.out
Movie Name: spider man
Adult Tickets Sold: 333
Child Tickets Sold: 123
Report generated. Filename: movieReport.txt

[xzhu91@hills CS110A]$ cat movieReport.txt
Movie Name:                      " spider man "
Adult Tickets Sold:                333
Child Tickets Sold:                123
Gross Box Office Profit:         $4068.00
Net Box Office Profit:           $813.60
Amout Paid to Distributor:       $3254.40
[xzhu91@hills CS110A]$
*/





  
  
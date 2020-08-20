/*
Student ID: W78034117
Filename: pp4.cpp
Assignment: Practice Problem 4: Bank Charges
Description: To calculate bank charges and verify input using if-statements
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  
  double beginningBalance, checkFee, totalFee;
  int monthlyFee, checks;
  cout << "Enter the following information about your checking account.\n";
  cout << "Beginning balance: $";
  cin >> beginningBalance;
  cout << "Number of checks written: ";
  cin >> checks;
  
  if (beginningBalance<0)
  {
    cout << "Your account is overdrawn!\n";
    monthlyFee=25;
  }
  else if (beginningBalance>=0 && beginningBalance<400)
    monthlyFee=25;
  else if (beginningBalance>=400)
    monthlyFee=10;
 
  if (checks<0)
    cout << "Number of checks must be zero or more.\n";
  else 
  {
  if (checks>=0 && checks<20)
    checkFee=checks*0.10;
  else if (checks>=20 && checks<40)
    checkFee=checks*0.08;
  else if (checks>=40 && checks<60)
    checkFee=checks*0.06;
  else if (checks>=60)
    checkFee=checks*0.04;
    
  totalFee=checkFee+monthlyFee;
  cout << fixed << setprecision(2);
  cout << "The bank fee this month is $" << totalFee << endl;
  }
  return 0;
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ pp4.cpp
[xzhu91@hills CS110A]$ ./a.out
Enter the following information about your checking account.
Beginning balance: $1100
Number of checks written: 55
The bank fee this month is $13.30

[xzhu91@hills CS110A]$ ./a.out
Enter the following information about your checking account.
Beginning balance: $400.01
Number of checks written: 8
The bank fee this month is $10.80

[xzhu91@hills CS110A]$ ./a.out
Enter the following information about your checking account.
Beginning balance: $99
Number of checks written: 110
The bank fee this month is $29.40

[xzhu91@hills CS110A]$ ./a.out
Enter the following information about your checking account.
Beginning balance: $-10
Number of checks written: 10
Your account is overdrawn!
The bank fee this month is $26.00

[xzhu91@hills CS110A]$ ./a.out
Enter the following information about your checking account.
Beginning balance: $10
Number of checks written: -15
Number of checks must be zero or more.

[xzhu91@hills CS110A]$ ./a.out
Enter the following information about your checking account.
Beginning balance: $-10
Number of checks written: -10
Your account is overdrawn!
Number of checks must be zero or more.
*/
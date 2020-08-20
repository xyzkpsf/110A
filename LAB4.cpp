/*
ID:w78034117
Filename: LAB4.cpp
Assignment : LAB4: Loan 
Description: To calculate how long it will take to pay off a loan.
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void get_input(double& principle, double& monthly_interest, double& payment, double &monthly_rate);
void pay_off_loan(double principle, double monthly_interest, double payment, double monthly_rate, int& months, double& total_interest);
void enterValidate ();

int main ()
{
  double principle, monthly_interest, monthly_rate, payment,total_interest = 0.0;
  int months = 0;
  cout << fixed << showpoint << setprecision(2);
  cout << "** Welcome to the Consumer Loan Calculator **" << endl << endl;
  get_input (principle,monthly_interest,payment, monthly_rate);
  pay_off_loan (principle,monthly_interest,payment,monthly_rate, months,total_interest);
  cout << "** Don't get overwhelmed with debt! **" << endl;
  return 0;
}

void get_input (double& principle, double& monthly_interest, double& payment, double& monthly_rate)
{
  float annual_rate;
  cout << "How much do you want to borrow? $";
  cin >> principle;
  while (principle <=0)
  {
    enterValidate();
    cout << "How much do you want to borrow? $";
    cin >> principle;
  }
  cout << "What is the annual interest rate expressed as a percent? ";
  cin >> annual_rate;
  while (annual_rate <=0 )
  {
    enterValidate();
    cout << "What is the annual interest rate expressed as a percent? ";
    cin >> annual_rate;
  }
  
  monthly_rate = annual_rate/1200;
  monthly_interest = principle * monthly_rate;
  
  cout << "What is the monthly payment amount? $";
  cin >> payment;
  while (payment <= 0)
  {
    enterValidate();
    cout << "What is the monthly payment amount? $";
    cin >> payment;
  }
  if (payment <= monthly_interest)
  {
  cout << "You must make payments of at least $" << monthly_interest+1 << endl << "Because your monthly interest is $" << monthly_interest << endl << endl;
  cout << "** Don't get overwhelmed with debt! **" << endl;
  exit (0);
  }
}

void pay_off_loan(double principle, double monthly_interest, double payment, double monthly_rate, int& months, double& total_interest)
{
  double final_payment;
  do
  {
    total_interest = total_interest + monthly_interest;
    principle = principle + monthly_interest - payment;
    monthly_interest = principle * monthly_rate;
    months++;
  } 
  while (principle >= 0);
  final_payment = payment + principle;
  cout << "Your debt will be paid off after " << months <<  " months, with a final payment of just $" << final_payment << endl;
  cout << "The total amount of interest you will pay during that time is $" << total_interest << endl << endl;
}

void enterValidate ()
{
  cout << "You must enter a positive number!\n";
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ LAB4.cpp
[xzhu91@hills CS110A]$ ./a.out
** Welcome to the Consumer Loan Calculator **

How much do you want to borrow? $1000
What is the annual interest rate expressed as a percent? 18
What is the monthly payment amount? $50
Your debt will be paid off after 24 months, with a final payment of just $47.83
The total amount of interest you will pay during that time is $197.83

** Don't get overwhelmed with debt! **


[xzhu91@hills CS110A]$ ./a.out
** Welcome to the Consumer Loan Calculator **

How much do you want to borrow? $15000
What is the annual interest rate expressed as a percent? 10
What is the monthly payment amount? $100
You must make payments of at least $126.00
Because your monthly interest is $125.00

** Don't get overwhelmed with debt! **


[xzhu91@hills CS110A]$ ./a.out
** Welcome to the Consumer Loan Calculator **

How much do you want to borrow? $-50
You must enter a positive number!
How much do you want to borrow? $-200
You must enter a positive number!
How much do you want to borrow? $20000
What is the annual interest rate expressed as a percent? -2.5
You must enter a positive number!
What is the annual interest rate expressed as a percent? 5
What is the monthly payment amount? $0
You must enter a positive number!
What is the monthly payment amount? $200
Your debt will be paid off after 130 months, with a final payment of just $125.79
The total amount of interest you will pay during that time is $5925.79

** Don't get overwhelmed with debt! **

*/
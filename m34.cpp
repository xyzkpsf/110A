/*
ID:w78034117
Filename: m34.cpp
Assignment : M34 Present Value
Description: 
*/

/*

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float presentValue (float, float, float);

int main ()
{
  float present, future, rate, rate2, year;
  cout << fixed << setprecision(2);
  cout << "This is a program which calculates the present value.\n" 
       << "Please enter the future value: ";
  cin >> future;
  cout << "Please enter the annual interest rate(%): ";
  cin >> rate;
  rate2 = rate/100;
  cout << "Please enter the year: ";
  cin >> year;
  cout << "The present value is " << presentValue (future, rate2, year) << endl;
  
  return 0;
}

float presentValue (float future, float rate2, float year)
{
  return future/pow ((1 + rate2), year);
}

*/

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m34.cpp 
[xzhu91@hills CS110A]$ ./a.out
This is a program which calculates the present value.
Please enter the future value: 100000
Please enter the annual interest rate(%): 5
Please enter the year: 10
The present value is 61391.36

This is a program which calculates the present value.
Please enter the future value: 100000
Please enter the annual interest rate(%): 0.9
Please enter the year: 6.5
The present value is 94342.55
*/


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float presentValue (float future = 100000, float rate = 0.0006, float year = 10);

int main ()
{
  float present, future, rate, year;
  cout << fixed << setprecision(2);
  cout << "For future value of 10,000, the time of 10 years, and the interest rate of 0.06%, the present value is " << presentValue () << endl;
  
  return 0;
}

float presentValue (float future, float rate, float year)
{
  return future/pow ((1 + rate), year);
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m34.cpp
[xzhu91@hills CS110A]$ ./a.out
For future value of 10,000, the time of 10 years, and the interest rate of 0.06%, the present value is 99401.99
*/

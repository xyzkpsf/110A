/*
ID:w78034117
Filename: m36.cpp
Assignment : M37: Variable scope in functions 
Description: 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int getEmployees ();
int getDays (int);
double average (int, int);

int main ()
{
  int totalEmployees, totalDays;
  totalEmployees = getEmployees();
  totalDays = getDays(totalEmployees);
  cout << fixed << showpoint << setprecision(1);
  cout << "The average number of days missed per employee is " << average(totalEmployees, totalDays) << endl;
  return 0;
}

int getEmployees()
{
  int num;
  cout << "How many employees does the company have? ";
  cin >> num;
  while (num < 1)
  {
    cout << "The number of employees must be one or greater. Please re-enter: ";
    cin >> num;
  }
  return num;
}

int getDays(int totalEmployees)
{
  int days, total = 0;
  for (int counter =1; counter <= totalEmployees; counter++)
  {
    cout << "Days missed by employee # " << counter << " :";
    cin >> days;
    while (days < 0 )
    {
      cout << "Days missed must be zero or greater. Please re-enter: ";
      cin >> days;
    }
  total += days;
  }
  return total;  
}
  
 double average (int totalEmployees, int totalDays)
 {
   double average;
   return average = (double)totalDays/totalEmployees;
 }

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m37.cpp
[xzhu91@hills CS110A]$ ./a.out
How many employees does the company have? 0
The number of employees must be one or greater. Please re-enter: -3
The number of employees must be one or greater. Please re-enter: 5
Days missed by employee # 1 :0
Days missed by employee # 2 :5
Days missed by employee # 3 :-7
Days missed must be zero or greater. Please re-enter: -2
Days missed must be zero or greater. Please re-enter: 2
Days missed by employee # 4 :1
Days missed by employee # 5 :32
The average number of days missed per employee is 8.0

[xzhu91@hills CS110A]$ ./a.out
How many employees does the company have? -3
The number of employees must be one or greater. Please re-enter: 0
The number of employees must be one or greater. Please re-enter: -4
The number of employees must be one or greater. Please re-enter: 4
Days missed by employee # 1 :-9
Days missed must be zero or greater. Please re-enter: -3
Days missed must be zero or greater. Please re-enter: 0
Days missed by employee # 2 :22
Days missed by employee # 3 :1
Days missed by employee # 4 :4
The average number of days missed per employee is 6.8
*/
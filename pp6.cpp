/*
Student ID: W78034117
Filename: pp6.cpp
Assignment: PP6: Func
Description: To write a program that uses several different kinds of functions. 
*/

#include <iostream>
using namespace std;

int add (int, int); // this function calclulate the plus
int deduct (int, int); // this function calclulate the time
void disPlay (); // this function display 

int main ()
{
  int x, y;
  cout << "This program can do calclulation for you. Now please enter two integer numbers: ";
  cin >> x >> y;
  cout << "The result of " << x << " + " << y << " is " << add (x,y) << endl;
  cout << "The result of " << x << " - " << y << " is " << deduct (x,y) << endl;
  disPlay();
  return 0;
}

// this function do the plus calclulation, and return their sum.
int add (int x, int y)
{
  int sum;
  return sum = x + y;
}

// this function do the minus calclulation, and return the difference.
int deduct (int x, int y)
{
  int sum;
  return sum = x - y;
}

// this function do not return value
void disPlay()
{
  cout << "Thank you for using, goodbye!\n"; 
}


/*
OUTPUT
This program can do calclulation for you. Now please enter two integer numbers: 10 5
The result of 10 + 5 is 15
The result of 10 - 5 is 5
Thank you for using, goodbye!
[xzhu91@hills CS110A]$
*/
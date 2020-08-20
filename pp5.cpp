/*
Student ID: W78034117
Filename: pp5.cpp
Assignment: PP5: Jack
Description: To use two loops in a program to calculate population growth. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const float birthRate = 0.03;
  const float deadRate = 0.01;
  int defaultNum, generation, endNum;
  char repeat;
  
  do
  {
    cout << "How many jackalopes do you have? ";
    cin >> defaultNum;
    cout << "How many generations do you want to wait? ";
    cin >> generation;
    endNum = defaultNum;
  for (int iterate = 1; iterate <= generation; iterate++)
    {
    endNum = endNum + (int)(endNum*birthRate);
    endNum = endNum - (int)(endNum*deadRate);
    }
    cout << "If you start with " << defaultNum << " jackalopes and wait " << generation << " generations, you'll end up with a total of " << endNum << " of them.\n";
    cout << endl;
    cout << "Do you want to calculate another population? (y/n) ";
    cin >> repeat;
   }
    while (repeat == 'y');
  return 0;
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ pp5.cpp 
[xzhu91@hills CS110A]$ ./a.out
How many jackalopes do you have? 200
How many generations do you want to wait? 1
If you start with 200 jackalopes and wait 1 generations, you'll end up with a total of 204 of them.

Do you want to calculate another population? (y/n) y

How many jackalopes do you have? 132
How many generations do you want to wait? 2
If you start with 132 jackalopes and wait 2 generations, you'll end up with a total of 137 of them.

Do you want to calculate another population? (y/n) y

How many jackalopes do you have? 40
How many generations do you want to wait? 100
If you start with 40 jackalopes and wait 100 generations, you'll end up with a total of 291 of them.

Do you want to calculate another population? (y/n) y

How many jackalopes do you have? 300
How many generations do you want to wait? 4
If you start with 300 jackalopes and wait 4 generations, you'll end up with a total of 324 of them.

Do you want to calculate another population? (y/n) n






*/
/*
ID:w78034117
Filename: m33.cpp
Assignment : m33: mark up
Description: 
*/

#include <iostream>
#include <iomanip>
using namespace std;

float calculateRetail (float, float);

int main ()
{
  float cost, percentage;
  cout << fixed << setprecision(2);
  cout << "Please enter the wholesale cost: ";
  cin >> cost;
  cout << "And then enter the markup percentage(%): ";
  cin >> percentage;
  
  if (cost < 0 || percentage < 0)
    cout << "Invalid enter!\n";
  else 
  {
    cout << "The items retail price is " << calculateRetail (cost, percentage) << endl;
  }
  
  return 0;
}

float calculateRetail (float cost, float percentage )
{
  return cost*(1 + percentage/100); 
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m33.cpp 
[xzhu91@hills CS110A]$ ./a.out
Please enter the wholesale cost: 10.00
And then enter the markup percentage(%): 50
The items retail price is 15.00

[xzhu91@hills CS110A]$ ./a.out
Please enter the wholesale cost: -30
And then enter the markup percentage(%): 100
Invalid enter!

[xzhu91@hills CS110A]$ ./a.out
Please enter the wholesale cost: 20.05
And then enter the markup percentage(%): 75
The items retail price is 35.09

*/
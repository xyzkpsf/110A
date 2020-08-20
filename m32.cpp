/*
ID:w78034117
Filename: m32.cpp
Assignment : for loop
Description: 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
  int numRolls = 0,grandSum = 0,dice,total;
  char repeat;
  do
  {
      srand(time(0));
      cout << "How many rolls? ";
      cin >> numRolls;
      int sum = 0;
      for (int times = 0; times < numRolls; times++)
      {
        
        dice = rand() % 6 + 1;
        cout << dice << " ";
        sum += dice;
        grandSum += dice;
      }
      cout << endl;
      cout << "Total: " << sum << endl;
      cout << "Grand total: " << grandSum << endl;
      cout << "Roll again? (y/n): ";
      cin >> repeat;
  } while ( repeat == 'y' || repeat == 'Y');
  cout << "Goodbye!\n";
  return 0;
}

/*
[xzhu91@hills CS110A]$ g++ m32.cpp
[xzhu91@hills CS110A]$ ./a.out
How many rolls? 3
5 2 6
Total: 13
Grand total: 13
Roll again? (y/n): y
How many rolls? 5
3 2 3 4 4
Total: 16
Grand total: 29
Roll again? (y/n): y
How many rolls? 10
5 3 2 1 5 4 2 6 3 4
Total: 35
Grand total: 64
Roll again? (y/n): n
Goodbye!
*/
/*
ID:w78034117
Filename: m45.cpp
Assignment : M45: Array ordering  
Description: 
*/

#include <iostream>
using namespace std;

int main()
{
  int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int arrayChange[10];
  int swap[2];
  int mul, swap1, swap2;
  cout << "Enter multiplier: ";
  cin >> mul;
  for (int i = 0; i < 10; i++)
  {
    arrayChange[i] = ( array[i] * mul );
    cout << arrayChange[i] << " ";
  }
  cout << endl;
  cout << "Enter 2 indexes to swap: ";
  cin >> swap[0] >> swap[1];
  if (swap[0] < swap[1])
  {
    swap1 = swap[0];
    swap2 = swap[1];
  }
  else 
  {
    swap1 = swap[1];
    swap2 = swap[0];
  }
  for (int j = 0; j < 10; j++)
  {
    if ( j != swap1 && j != swap2)
      cout << arrayChange[j] << " ";
    if (j == swap1)
      cout << arrayChange[swap2] << " ";
    if (j == swap2)
      cout << arrayChange[swap1] << " ";
  }
 cout << endl;
 return 0;
}

/*
OUTPUT
[xzhu91@hills ~]$ cd CS110A/
[xzhu91@hills CS110A]$ g++ m45.cpp
[xzhu91@hills CS110A]$ ./a.out
Enter multiplier: 3
0 3 6 9 12 15 18 21 24 27
Enter 2 indexes to swap: 8 2
0 3 24 9 12 15 18 21 6 27

[xzhu91@hills CS110A]$ ./a.out
Enter multiplier: 4
0 4 8 12 16 20 24 28 32 36
Enter 2 indexes to swap: 2 5
0 4 20 12 16 8 24 28 32 36

[xzhu91@hills CS110A]$ ./a.out
Enter multiplier: 7
0 7 14 21 28 35 42 49 56 63
Enter 2 indexes to swap: 1 9
0 63 14 21 28 35 42 49 56 7
*/
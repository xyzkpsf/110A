/*
ID:w78034117
Filename: LAB6.cpp
Assignment :  Lab 6: De-Dup Program
Description: 
*/

#include <iostream>
using namespace std;

void display (int array_distinct[], int counter); // THis function display the elements of array_distinct, which includes only distinct numbers.

int main()
{
  const int max_array = 10;
  int array[max_array], array_distinct[max_array];
  int counter = 1;
  bool no_dul;
  cout << "Please enter 10 integers, hitting return after each one:\n";
  for (int i = 0; i < max_array; i++)
  {
    cin >> array[i];
  }
    array_distinct[0] = array[0];
  // 1 - 0
  // 2 - 1. 2 - 0.
  // 3 - 2. 3 - 1. 3 - 0.
  // 4 - 3. 4 - 2. 4 - 1. 4 - 0.
  for (int m = 0; m < max_array; m++)
  {
    for (int j = m - 1; j >= 0; j--)
    {
      if (array[j] != array[m])
        no_dul = true;
      else
      {
        no_dul = false;
        break;
      }
    }
    if (no_dul)
    {
      array_distinct[counter] = array[m];
      counter++;
    }
  }
  cout << "You entered " << counter << " distinct numbers:\n";
  display(array_distinct, counter);
  cout << endl;
  return 0;
}
  
  void display (int array_distinct[], int counter)
  { 
  for (int k = 0; k < counter; k++)
    cout << array_distinct[k] << " "; 
  }

  /*
  OUTPUT
  [xzhu91@hills CS110A]$ g++ LAB6.cpp
[xzhu91@hills CS110A]$ ./a.out
Please enter 10 integers, hitting return after each one:
5
75
10
75
5
80
10
5
5
50
You entered 5 distinct numbers:
5 75 10 80 50

[xzhu91@hills CS110A]$ ./a.out
Please enter 10 integers, hitting return after each one:
1
2
3
4
5
6
7
8
9
10
You entered 10 distinct numbers:
1 2 3 4 5 6 7 8 9 10

[xzhu91@hills CS110A]$ ./a.out
Please enter 10 integers, hitting return after each one:
11
22
33
33
33
44
11
67
89
99
You entered 7 distinct numbers:
11 22 33 44 67 89 99
*/

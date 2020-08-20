/*
ID:w78034117
Filename: m27.cpp
Assignment : while loop
Description: 
*/

#include <iostream>
using namespace std;

int main ()
{
  int enter, times = 0;
  cout << "How many times should I say hello? ";
  cin >> enter;
  
  while (times<enter)
  {
    if (times%2 ==1)
    cout << "HELLO ";
    if (times%2 ==0)
    cout << "hello ";
    times++;
  }
  
  cout << endl;
  return 0;
}

/*
[xzhu91@hills ~]$ cd CS110A/
[xzhu91@hills CS110A]$ g++ m27.cpp
[xzhu91@hills CS110A]$ ./a.out
How many times should I say hello? 5
hello HELLO hello HELLO hello
[xzhu91@hills CS110A]$ ./a.out
How many times should I say hello? 9
hello HELLO hello HELLO hello HELLO hello HELLO hello
[xzhu91@hills CS110A]$ ./a.out
How many times should I say hello? 1
hello
*/

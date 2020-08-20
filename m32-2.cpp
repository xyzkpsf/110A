/*
ID:w78034117
Filename: m32-2.cpp
Assignment : M32-2: Nested For Loops
Description: 
*/

#include <iostream>

using namespace std;

int main()
{
  char symbol;
  int length, height,height2,height3;
  cout << "Enter symbol: ";
  cin >> symbol;
  cout << "Draw 1 symbol: \n";
  cout << symbol << endl;
  cout << "Draw 10 symbol: \n";
  for (int time = 0; time <10; time++)
    cout << symbol;
  cout << endl;
  cout << "Draw X symbol: \n";
  cout << "Enter line length: ";
  cin >> length;
  for (int time = 0; time < length; time++)
     cout << symbol;
  cout << endl;
  cout << "Draw X symbol twice: \n";
  for (int line = 0; line < 2; line++)
  {
    for (int time = 0; time < length; time++)
       cout << symbol;
    cout << endl;
  }
  cout << "Draw X symbol Y times:\n";
  cout << "Enter height: ";
  cin >> height;
  for (int line = 0; line < height; line++)
  {
    for (int time = 0; time < length; time++)
       cout << symbol;
    cout << endl;
  }
  cout << "Draw X symbol Y times with a differnt beginning, 'A ':\n";
   for (int line = 0; line < height; line++)
  {
    cout << "A ";
    for (int time = 0; time < length; time++)
       cout << symbol;
    cout << endl;
  }
  cout << "Draw X symbol Y times with line numbers: \n";
  for (int time = (height - 1); time >=0; time--)
  {
    cout << time << " ";
    for (int time = 0; time < length; time++)
       cout << symbol;
    cout << endl;
  }
  cout << "Make length depend on line number:\n";
  for (int time = (height - 1); time >=0; time--)
  {
    cout << time << " ";
    for (int counter = (time -1); counter >=0; counter--) 
      cout << symbol;
    cout << endl;
  }
  cout << "Reverse the triangle:\n";
  for (int time = height; time >0; time--)
  {
    cout << time << " ";
     for (int counter = (12-time); counter>0; counter-- )
       cout << symbol;
     cout << endl;
  }
  cout << "Add a 2nd shape:\n";
  for (int time = height; time >0 ; time--)
  {
    cout << time << " ";  
    for (int counter = height; counter>0; counter--)
      cout << "#";
      for (int counter = (12- time); counter>0; counter--)
        cout << symbol;
    cout << endl;
  }
  cout << "Swap the triangle and the square:\n";
  for (int time = (height-1); time >=0 ; time--)
  {
    cout << time << " ";  
    for (int counter = (12-time); counter>0; counter--)  
      cout << symbol;
      for (int counter = height; counter>0; counter--)
       cout << "#";
    cout << endl;
  }
  cout << "Change the symbol to a ' ' (space):\n";
  for (int time = (height-1); time >=0 ; time--)
  {
    cout << time << " ";
    for (int counter = (11-time); counter>0; counter--)  
      cout << " "; 
      for (int counter = height; counter>0; counter--)
       cout << "#";
    cout << endl;
  }
   
  return 0;
}

/*
OUTPUT

[xzhu91@hills CS110A]$ g++ m32-2.cpp
[xzhu91@hills CS110A]$ ./a.out
Enter symbol: $
Draw 1 symbol:
$
Draw 10 symbol:
$$$$$$$$$$
Draw X symbol:
Enter line length: 20
$$$$$$$$$$$$$$$$$$$$
Draw X symbol twice:
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
Draw X symbol Y times:
Enter height: 12
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
Draw X symbol Y times with a differnt beginning, 'A ':
A $$$$$$$$$$$$$$$$$$$$
A $$$$$$$$$$$$$$$$$$$$
A $$$$$$$$$$$$$$$$$$$$
A $$$$$$$$$$$$$$$$$$$$
A $$$$$$$$$$$$$$$$$$$$
A $$$$$$$$$$$$$$$$$$$$
A $$$$$$$$$$$$$$$$$$$$
A $$$$$$$$$$$$$$$$$$$$
A $$$$$$$$$$$$$$$$$$$$
A $$$$$$$$$$$$$$$$$$$$
A $$$$$$$$$$$$$$$$$$$$
A $$$$$$$$$$$$$$$$$$$$
Draw X symbol Y times with line numbers:
11 $$$$$$$$$$$$$$$$$$$$
10 $$$$$$$$$$$$$$$$$$$$
9 $$$$$$$$$$$$$$$$$$$$
8 $$$$$$$$$$$$$$$$$$$$
7 $$$$$$$$$$$$$$$$$$$$
6 $$$$$$$$$$$$$$$$$$$$
5 $$$$$$$$$$$$$$$$$$$$
4 $$$$$$$$$$$$$$$$$$$$
3 $$$$$$$$$$$$$$$$$$$$
2 $$$$$$$$$$$$$$$$$$$$
1 $$$$$$$$$$$$$$$$$$$$
0 $$$$$$$$$$$$$$$$$$$$
Make length depend on line number:
11 $$$$$$$$$$$
10 $$$$$$$$$$
9 $$$$$$$$$
8 $$$$$$$$
7 $$$$$$$
6 $$$$$$
5 $$$$$
4 $$$$
3 $$$
2 $$
1 $
0
Reverse the triangle:
12
11 $
10 $$
9 $$$
8 $$$$
7 $$$$$
6 $$$$$$
5 $$$$$$$
4 $$$$$$$$
3 $$$$$$$$$
2 $$$$$$$$$$
1 $$$$$$$$$$$
Add a 2nd shape:
12 ############
11 ############$
10 ############$$
9 ############$$$
8 ############$$$$
7 ############$$$$$
6 ############$$$$$$
5 ############$$$$$$$
4 ############$$$$$$$$
3 ############$$$$$$$$$
2 ############$$$$$$$$$$
1 ############$$$$$$$$$$$
Swap the triangle and the square:
11 $############
10 $$############
9 $$$############
8 $$$$############
7 $$$$$############
6 $$$$$$############
5 $$$$$$$############
4 $$$$$$$$############
3 $$$$$$$$$############
2 $$$$$$$$$$############
1 $$$$$$$$$$$############
0 $$$$$$$$$$$$############
Change the symbol to a ' ' (space):
11 ############
10  ############
9   ############
8    ############
7     ############
6      ############
5       ############
4        ############
3         ############
2          ############
1           ############
0            ############

*/
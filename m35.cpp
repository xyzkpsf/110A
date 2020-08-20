/*
ID:w78034117
Filename: m35.cpp
Assignment : M35 Celcius Temperature Table 
Description: 
*/

#include <iostream>
#include <iomanip>
using namespace std;

float celsius (int);

int main ()
{
  cout << "This program displays a table of the Fahrenheit temperatures 0 through 20 and their Celsius equivalents.\n";
  cout << "F\tC\n";
  cout << setprecision(6);
  for (int counter = 0; counter<=20; counter++)
    cout << counter << "\t" << celsius (counter) << endl;
  
  return 0;
}

float celsius (int counter)
{
  return ((float)counter - 32)*5/9;
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m35.cpp
[xzhu91@hills CS110A]$ ./a.out
This program displays a table of the Fahrenheit temperatures 0 through 20 and their Celsius equivalents.
F       C
0       -17.7778
1       -17.2222
2       -16.6667
3       -16.1111
4       -15.5556
5       -15
6       -14.4444
7       -13.8889
8       -13.3333
9       -12.7778
10      -12.2222
11      -11.6667
12      -11.1111
13      -10.5556
14      -10
15      -9.44444
16      -8.88889
17      -8.33333
18      -7.77778
19      -7.22222
20      -6.66667
*/
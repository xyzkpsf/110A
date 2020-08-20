/*
ID:w78034117
Filename: m25.cpp
Assignment : M25: testing for file open errors
Description: 
*/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main ()
{
  char package;
  int min;
  float additionalFee = 0, fee;
  ifstream file_in;
  
  file_in.open("data.txt");
  file_in >> package;
  file_in >> min;
  cout << fixed << setprecision(2);
  
  if(!file_in)
    cout << "Error! File could not be opened!\n";
  else
  {
      {
          switch (package)
          {
            case 'a': case 'A':
              if (min > 450)
                additionalFee = (min - 450)*0.45;
                fee = 39.99 + additionalFee;
              cout << "You total amount due is $" << fee << endl;
              break;
            case 'b': case 'B':
              if (min > 900)
                additionalFee = (min - 900)*0.40;
                fee = 59.99 + additionalFee;
              cout << "You total amount due is $" << fee << endl;
              break;
            case 'c': case 'C':
              fee = 69.99;
              cout << "You total amount due is $" << fee << endl;
              break;
            default:
              cout << "Invalid data!\n";
          }
        
        // if package=A,min<495, maxfee = 39.99+19.8 = 59.79. There is no saving.
        // if package=A, 495 < min < 900, fee will be 59.99
        // if package=A, 900 < min < 925, fee will be 59.99 + (min-900)*0.4, the saving will be different from the above line.
        // if min >= 925, no matter what package A or B, purchasing package c always saving.
        
        double feeLess;
        if ((package == 'a' || package == 'A') && min > 494 && min < 900)
          {
            feeLess = 59.99;
            cout << "If you purchased package B, you can save $" << fee - feeLess << " dollars!\n";
          }
        else if ((package == 'a' || package == 'A') && min >= 900 && min <= 925)
          {
            feeLess = 59.99 + (min - 900)*0.40;
            cout << "If you purchased package B, you can save $" << fee - feeLess << " dollars!\n";
          }
        else if ((package == 'a' || package == 'A' || package == 'b' || package == 'B') && min >= 926)
          {
            cout << "If you purchased package C, you can save $" << fee - 69.99 << " dollars!\n";
          }
        }
  }
  file_in.close();
  return 0;
}

/*
// changed the txt file name:

[xzhu91@hills CS110A]$ g++ m25.cpp
[xzhu91@hills CS110A]$ ./a.out
Error! File could not be opened!

// if package=a min=494, the output will be:

[xzhu91@hills CS110A]$ ./a.out
You total amount due is $59.79

// if package=a min=800, the output will be:

[xzhu91@hills CS110A]$ ./a.out
You total amount due is $197.49
If you purchased package B, you can save $137.50 dollars!

// if package=a min=926, the output will be:

[xzhu91@hills CS110A]$ ./a.out
You total amount due is $254.19
If you purchased package C, you can save $184.20 dollars!

// if package=B min=920, the output will be:

[xzhu91@hills CS110A]$ ./a.out
You total amount due is $67.99

// if package=B min=929, the output will be:

[xzhu91@hills CS110A]$ ./a.out
You total amount due is $71.59
If you purchased package C, you can save $1.60 dollars!

*/
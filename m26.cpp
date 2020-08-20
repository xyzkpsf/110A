/*
ID:w78034117
Filename: m26.cpp
Assignment : M26: strcmp
Description: Mobile Service Provider, Part 3
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
  char package, month[10];
  int min, maxMin;
  float additionalFee = 0, fee;
  bool isDone;
  ifstream fin;
  
  fin.open("data.txt");
  fin >> month >> package >> min;
  cout << fixed << setprecision(2);

  if(!fin)
    cout << "Error! File could not be opened!\n";
  else
  {
      if((strcmp(month, "January")) && (strcmp(month, "February")) && (strcmp(month, "March")) &&
          (strcmp(month, "April")) && (strcmp(month, "May")) && (strcmp(month, "June")) && (strcmp(month, "July"))
          && (strcmp(month, "August")) && (strcmp(month, "September")) && (strcmp(month, "October")) && (strcmp(month, "November")) 
           && (strcmp(month, "December")) )
        {
          cout << "Month enter invalid!\n";
          isDone = true;
        }
       else 
          {
            if (strcmp(month, "January")== 0 || (strcmp(month, "March")) == 0 || (strcmp(month, "May"))== 0 || (strcmp(month, "July"))== 0
                || (strcmp(month, "August"))== 0 || (strcmp(month, "October"))== 0 || (strcmp(month, "December"))== 0 )
                 {
                     maxMin = 44640;
                   if (min > maxMin)
                   {
                     cout << "Minutes enter invalid!\n";
                    isDone = true;
                   }
                 }
             if (strcmp(month, "February")== 0)
                 {
                     maxMin = 40320;
                   if (min > maxMin)
                   {
                    cout << "Minutes enter invalid!\n";
                    isDone = true;
                   }
                 }
             if ((strcmp(month, "April") == 0) || (strcmp(month, "June"))== 0 || (strcmp(month, "September"))== 0 || (strcmp(month, "November"))== 0 )
                 {
                     maxMin = 43200;
                   if (min > maxMin)
                   {
                     cout << "Minutes enter invalid!\n";
                    isDone = true;
                   }
                 }
          }
        if (isDone != true)   
        { switch (package)
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
  fin.close();
  return 0;
  }

/*
OUTPUT

[xzhu91@hills CS110A]$ g++ m26.cpp 
[xzhu91@hills CS110A]$ cat data.txt 
Septemberr b 300
[xzhu91@hills CS110A]$ ./a.out
Month enter invalid!

[xzhu91@hills CS110A]$ cat data.txt 
September b 43119
[xzhu91@hills CS110A]$ ./a.out
You total amount due is $16947.59
If you purchased package C, you can save $16877.60 dollars!

[xzhu91@hills CS110A]$ cat data.txt 
September b 43201
[xzhu91@hills CS110A]$ ./a.out
Minutes enter invalid!

[xzhu91@hills CS110A]$ cat data.txt 
August b 43201
[xzhu91@hills CS110A]$ ./a.out
You total amount due is $16980.39
If you purchased package C, you can save $16910.40 dollars!

*/
 
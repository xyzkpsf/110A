/*
ID:w78034117
Filename: m24.cpp
Assignment : M24: Menus and switch
Description: using switch statement
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
  char package;
  int min;
  float additionalFee = 0;
  
  cout << "Dear customer, here are the packages we have:\n";
  cout << "Package A: For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute.\n";
  cout << "Package B: For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute.\n";
  cout << "Package C: For $69.99 per month unlimited minutes provided.\n";
  cout << "Please chose a package you have purchase: ";
  cin >> package;
  cout << "Please enter the minutes you have used:";
  cin >> min;
  cout << fixed << setprecision(2);
  
  switch (package)
  {
    case 'a': case 'A':
      if (min > 450)
        additionalFee = (min - 450)*0.45;
      cout << "You total amount due is $" << 39.99+additionalFee << endl;
      break;
    case 'b': case 'B':
      if (min > 900)
        additionalFee = (min - 900)*0.40;
      cout << "You total amount due is $" << 59.99+additionalFee << endl;
      break;
    case 'c': case 'C':
      cout << "You total amount due is $" << 69.99 << endl;
      break;
    default:
      cout << "Invalid enter!\n";
  }
  return 0;
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m24.cpp
[xzhu91@hills CS110A]$ ./a.out
Dear customer, here are the packages we have:
Package A: For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute.
Package B: For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute.
Package C: For $69.99 per month unlimited minutes provided.
Please chose a package you have purchase: a
Please enter the minutes you have used:400
You total amount due is $39.99

[xzhu91@hills CS110A]$ ./a.out
Dear customer, here are the packages we have:
Package A: For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute.
Package B: For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute.
Package C: For $69.99 per month unlimited minutes provided.
Please chose a package you have purchase: B
Please enter the minutes you have used:910
You total amount due is $63.99

[xzhu91@hills CS110A]$ ./a.out
Dear customer, here are the packages we have:
Package A: For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute.
Package B: For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute.
Package C: For $69.99 per month unlimited minutes provided.
Please chose a package you have purchase: C
Please enter the minutes you have used:10000000
You total amount due is $69.99

[xzhu91@hills CS110A]$ ./a.out
Dear customer, here are the packages we have:
Package A: For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute.
Package B: For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute.
Package C: For $69.99 per month unlimited minutes provided.
Please chose a package you have purchase: D
Please enter the minutes you have used:100
Invalid enter!
*/
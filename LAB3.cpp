/*
ID:w78034117
Filename: LAB3.cpp
Assignment : LAB3: Shape
Description: To output a parallelogram of the specified size and makeup.
*/

#include <iostream>
using namespace std;

int main ()
{
  int side;
  char character;
  cout << "This program will output a parallelogram.\n";
  cout << "How long do you want each side to be? ";
  cin >> side;
  cout << "Please enter the character you want it to be made of: ";
  cin >> character;
  
  for (int counter = (side-1); counter >= 0; counter--)
  {
    for (int counter2 = (side-counter); counter2>0; counter2--)
      cout << character;
   cout << endl;
  }
  for (int counter = (side-1); counter > 0; counter--)
  {
    for (int counter2 = (side-counter); counter2>0; counter2--)
      cout << " ";
    for (int counter3 = counter; counter3>0; counter3--)
      cout << character;
    cout << endl;
  }
  
  return 0;
}

/*
[xzhu91@hills CS110A]$ ./a.out
This program will output a parallelogram.
How long do you want each side to be? 6
Please enter the character you want it to be made of: @
@
@@
@@@
@@@@
@@@@@
@@@@@@
 @@@@@
  @@@@
   @@@
    @@
     @
[xzhu91@hills CS110A]$ ./a.out
This program will output a parallelogram.
How long do you want each side to be? 15
Please enter the character you want it to be made of: *
*
**
***
****
*****
******
*******
********
*********
**********
***********
************
*************
**************
***************
 **************
  *************
   ************
    ***********
     **********
      *********
       ********
        *******
         ******
          *****
           ****
            ***
             **
              *
*/
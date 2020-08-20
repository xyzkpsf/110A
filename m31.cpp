/*
ID:w78034117
Filename: m31.cpp
Assignment : M31: File Input 
Description: 
*/

#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
  double num, maxNum;
  ifstream fin;
  fin.open ("scorefile.txt");
  
  if (fin >> maxNum)
  {
      do
      {
        fin >> num;
        if (num >= maxNum)
        {
          maxNum = num;
        }
      } while (!fin.eof());
   cout << "The highest number in scorefile.txt is: " << maxNum << endl;
   }
  else
    cout << "File can not open!\n";
  fin.close();
 return 0; 
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m31.cpp 
[xzhu91@hills CS110A]$ cat scorefile.txt 
100 21.1 3.11 102.1 -102.2 106 1000 
[xzhu91@hills CS110A]$ ./a.out
The highest number in scorefile.txt is: 1000
*/
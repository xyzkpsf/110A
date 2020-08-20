/* ID: w78034117
Filename: m17.cpp
Assignment : M17: File I/O
Description: 
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main ()
{
  
  char name[80];
  float homework1, homework2, homework3, averaGegrade;
  
  cout << "Please enter your name: ";
  cin.getline (name, 80);
    
  ifstream file_in;
  file_in.open("grades.txt"); //grades in "grades.txt" are 70,80,90
  
  file_in >> homework1 >> homework2 >> homework3;
  averaGegrade = (homework1+homework2+homework3)/3;
  cout << "You name is " << name << "." << endl;
  cout << fixed << setprecision(1) << "The average grade is " << averaGegrade << endl;
  file_in.close();
  
  return 0;
}

//output
//[xzhu91@hills CS110A]$ g++ m17.cpp
//[xzhu91@hills CS110A]$ ./a.out
//Please enter your name: xiaoyi zhu
//You name is xiaoyi zhu.
//The average grade is 80.0
//[xzhu91@hills CS110A]$

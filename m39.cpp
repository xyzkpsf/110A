/*
ID:w78034117
Filename: m39.cpp
Assignment : M39: Birth Year  
Description: 
*/

#include <iostream>
using namespace std;

bool getBirthInfo(int& , int&);
void outputBirthYear (bool, int ,int);

int main()
  {
    bool birthdayPassed;
    int userAge, currentYear;

    birthdayPassed = getBirthInfo(userAge, currentYear);
    outputBirthYear(birthdayPassed, userAge, currentYear);
   
    return 0;
  }

bool getBirthInfo(int& userAge, int& currentYear)
{
  bool birthPass;
  char choice;
  cout << "How old are you? ";
  cin >> userAge;
  cout << "What year is it now? ";
  cin >> currentYear;
  cout << "Did you have your birthday yet (y or n)? ";
  cin >> choice;
  if (choice == 'y' || choice == 'Y')
    birthPass = true;
  else
    birthPass = false;
  return birthPass;
}

void outputBirthYear (bool birthdayPassed, int userAge, int currentYear)
{
  int bornYear;
  if (birthdayPassed == true)
  {
    bornYear = currentYear - userAge;
  }
  else
  {
    bornYear = (currentYear - userAge - 1);
  }
  cout << "Your were born in " << bornYear << endl;
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m39.cpp 
[xzhu91@hills CS110A]$ ./a.out
How old are you? 28
What year is it now? 2017
Did you have your birthday yet (y or n)? y
Your were born in 1989

[xzhu91@hills CS110A]$ ./a.out
How old are you? 50
What year is it now? 1990
Did you have your birthday yet (y or n)? n
Your were born in 1939
*/
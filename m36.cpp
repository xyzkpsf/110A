/*
ID:w78034117
Filename: m36.cpp
Assignment : M36 return a bool 
Description: 
*/

#include <iostream>
using namespace std;

char getInitial ();
int getAge (char);
bool askIfUserWantsToEnterAnother ();

int main()
  {
    int userAge, oldestAge = 0;
    char userInitial, oldestInitial;

    do
    {
      userInitial = getInitial();
      userAge = getAge(userInitial);
      if(userAge > oldestAge)
          {
            oldestAge = userAge;
            oldestInitial = userInitial;  
          }
   }while(askIfUserWantsToEnterAnother()); 
   cout << oldestInitial << " is the oldest\n"; 
   return 0; 
   }

char getInitial ()
{
  char initial;
  cout << "Enter an initial: ";
  cin >> initial;
  return initial;
}

int getAge ( char userInitial)
{
  int age;
  cout << "Enter " << userInitial << "'s age: ";
  cin >> age;
  return age;
}

bool askIfUserWantsToEnterAnother ()
{
  char choice;
  bool repeat;
  cout << "Do you want to enter another? ";
  cin >> choice;
  if (choice == 'y' || choice == 'Y')
    repeat = 1;
  else 
    repeat = 0;
  return repeat;
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m36.cpp 
[xzhu91@hills CS110A]$ ./a.out
Enter an initial: B
Enter B's age: 50
Do you want to enter another? y
Enter an initial: w
Enter w's age: 10
Do you want to enter another? Y
Enter an initial: Y
Enter Y's age: 100
Do you want to enter another? n
Y is the oldest
*/
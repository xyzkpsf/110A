/*
ID:w78034117
Filename: m38.cpp
Assignment : M38: Pass by reference  
Description: 
*/

#include <iostream>
using namespace std;

int getInfo (char &);
bool askIfUserWantsToEnterAnother ();

int main()
{
 int userAge, oldestAge = 0;
 char userInitial, oldestInitial;

 do
 {
   userAge = getInfo(userInitial);
   if(userAge > oldestAge)
   {
     oldestAge = userAge;
     oldestInitial = userInitial; 
   }
 }while(askIfUserWantsToEnterAnother()); 
 cout << oldestInitial << " is the oldest\n"; 
 return 0; 
 }

int getInfo (char &userInitial)
{
  int age;
  cout << "Enter an initial: ";
  cin >> userInitial;
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
[xzhu91@hills CS110A]$ g++ m38.cpp 
[xzhu91@hills CS110A]$ ./a.out
Enter an initial: Y
Enter Y's age: 20
Do you want to enter another? y
Enter an initial: P
Enter P's age: 30
Do you want to enter another? y
Enter an initial: q
Enter q's age: 40
Do you want to enter another? n
q is the oldest

*/
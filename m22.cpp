/*
ID:w78034117
Filename: m22.cpp
Assignment : M22: Checking Numeric Ranges
Description: using logical and (&&) or or (||)
*/

#include <iostream>

using namespace std;

int main ()
{
  int age1, age2;
  char name1[20], name2[20];
  bool person1Match, person2Match;
  cout << "Please enter first person's name: \n";
  cin >> name1;
  cout << "Please enter first person's age: \n";
  cin >> age1;
  cout << "Please enter second person's name: \n";
  cin >> name2;
  cout << "Please enter second person's age: \n";
  cin >> age2;
  
  person1Match = (age1>=18 && age1<=65);
  person2Match = (age2>=18 && age2<=65);
  
  if (person1Match && person2Match)
    cout << "Both people are between 18 and 65.\n";
  else if (person1Match==true && person2Match==false)
    cout << name1 << " is between 18 and 65, but " << name2 << " is not.\n";
  else if (person1Match==false && person2Match==true)
    cout << name2 << " is between 18 and 65, but " << name1 << " is not.\n";
  else if (person1Match==false && person2Match==false)
    cout << "Neither person is between 18 and 65.\n";
    
return 0;  
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m22.cpp 
[xzhu91@hills CS110A]$ ./a.out
Please enter first person's name: 
peter
Please enter first person's age: 
17
Please enter second person's name: 
matt
Please enter second person's age: 
66
Neither person is between 18 and 65.

[xzhu91@hills CS110A]$ ./a.out
Please enter first person's name: 
peter
Please enter first person's age: 
19
Please enter second person's name: 
matt
Please enter second person's age: 
60
Both people are between 18 and 65.

[xzhu91@hills CS110A]$ ./a.out
Please enter first person's name: 
peter
Please enter first person's age: 
25
Please enter second person's name: 
matt
Please enter second person's age: 
88
peter is between 18 and 65, but matt is not.
*/


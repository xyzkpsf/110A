/* ID: w78034117
Filename: m09.cpp
Assignment : M09: cin in-class
Description: 
*/

#include <iostream>
using namespace std;

int main()

{
  int age;
  char word[80], firstname[80], lastname [80];
  cout <<"Enter a word: ";
  cin >> word;
  cout << word << " " << word << " " << word << endl;
  cout << "Enter first name: ";
  cin >> firstname;
  cout << "Enter last name: ";
  cin >> lastname;
  cout << "Enter age: ";
  cin >> age;
  cout << "You entered " << lastname << "," << firstname << " with " << age << "." << endl;
  return 0;
  
}

/* OUTPUT
[xzhu91@hills CS110A]$ g++ m09.cpp 
[xzhu91@hills CS110A]$ ./a.out
Enter a word: hello
hello hello hello
Enter first name: Ana
Enter last name: Lovelace
Enter age: 21
You entered Lovelace,Ana with 21.
*/

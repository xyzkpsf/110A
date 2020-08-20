/*
ID:w78034117
Filename: m44.cpp
Assignment : M44: Arrays as function arguments  
Description: 
*/

/*
#include <iostream>
using namespace std;

bool isDup (char word []);

int main ()
{
  char word[80];
  bool isDuplicate;
  cout << "Please enter a word: ";
  cin >> word;
  isDuplicate = isDup(word);
  cout << "You entered: " << word << endl;
  if (isDuplicate)
    cout << "Duplicates? Found!\n";
  else 
    cout << "Duplicates? Not found!\n";
  return 0;
}

bool isDup (char word[])
{
  bool isTrue = false;
  char firstChar[1]; 
  firstChar[0] = word[0];
  for (int i = 1; i < 80 && word[i] != '\0'; i++)
    {
      if (firstChar[0] == word[i])
        {
        isTrue = true;
        break;
        }
    }
  return isTrue;
}
*/

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m44.cpp
[xzhu91@hills CS110A]$ ./a.out
Please enter a word: balloon
You entered: balloon
Duplicates? Not found!

[xzhu91@hills CS110A]$ ./a.out
Please enter a word: aardvark
You entered: aardvark
Duplicates? Found!

[xzhu91@hills CS110A]$ ./a.out
Please enter a word: trot
You entered: trot
Duplicates? Found!

[xzhu91@hills CS110A]$ ./a.out
Please enter a word: tricycle
You entered: tricycle
Duplicates? Not found!
*/


#include <iostream>
using namespace std;

bool isDup (char word []);

int main ()
{
  char word[80];
  bool isDuplicate;
  cout << "Please enter a word: ";
  cin >> word;
  isDuplicate = isDup(word);
  cout << "You entered: " << word << endl;
  if (isDuplicate)
    cout << "Duplicates? Found!\n";
  else 
    cout << "Duplicates? Not found!\n";
  return 0;
}

bool isDup(char word[])
{
  bool isTrue = false;
  for (int i = 0; i < 80 && word[i] != '\0'; i++ )
  {
    for(int j = i+1; j < 80 && word[j] != '\0'; j++ )
    {
      if (word[i] == word[j])
      {
        isTrue = true;
        break;
      }
    } 
  }
  return isTrue;
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m44.cpp
[xzhu91@hills CS110A]$ ./a.out
Please enter a word: balloon
You entered: balloon
Duplicates? Found!

[xzhu91@hills CS110A]$ ./a.out
Please enter a word: return
You entered: return
Duplicates? Found!

[xzhu91@hills CS110A]$ ./a.out
Please enter a word: tax
You entered: tax
Duplicates? Not found!

[xzhu91@hills CS110A]$ ./a.out
Please enter a word: aplet
You entered: aplet
Duplicates? Not found!

[xzhu91@hills CS110A]$ ./a.out
Please enter a word: abcdefghijk123456
You entered: abcdefghijk123456
Duplicates? Not found!
*/

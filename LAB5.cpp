/*
ID:w78034117
Filename: LAB5.cpp
Assignment :  LAB5:Palindrome Program
Description: 
*/

#include <iostream>
#include <cstring>
using namespace std;

bool verifyPalindrome (char word[21], int length);

int main()
{
  char word[21];
  int length;
  bool isPali;
  cout << "Please enter a word: ";
  cin >> word;
  length = strlen(word);
  isPali = verifyPalindrome(word, length);
  cout << "The word you entered " << "'" << word << "' " << "is ";
  if (isPali)
    cout << "a palindrome.\n";
  else 
    cout << "not a palindrome.\n";
  return 0;
}


bool verifyPalindrome(char word[21], int length)
{
  bool isPalindrome;
  if (length % 2 == 1)
  {
    int j = length -1;
    for (int i = 0; i< ((length - 1)/2); i++)
    {
      if (word[i] == word[j])
      {
        isPalindrome = true;
        j--;
      }
      else
      {
        isPalindrome = false;
        break;
      }
    }
  }
  else
  {
    int j = length - 1;
    for (int i = 0; i < (length / 2); i++)
    {
      if (word[i] == word[j])
      {
        isPalindrome = true;
        j--;
      }
      else
      {
        isPalindrome = false;
        break;
      }
    }
  }
  return isPalindrome;
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ LAB5.cpp
[xzhu91@hills CS110A]$ ./a.out
Please enter a word: radar
The word you entered 'radar' is a palindrome.

[xzhu91@hills CS110A]$ ./a.out
Please enter a word: abccba
The word you entered 'abccba' is a palindrome.

[xzhu91@hills CS110A]$ ./a.out
Please enter a word: abcddxba
The word you entered 'abcddxba' is not a palindrome.

[xzhu91@hills CS110A]$ ./a.out
Please enter a word: 12345678987654321
The word you entered '12345678987654321' is a palindrome.

[xzhu91@hills CS110A]$ ./a.out
Please enter a word: asdfgfsda
The word you entered 'asdfgfsda' is not a palindrome.
*/
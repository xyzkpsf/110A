/*
ID:w78034117
Filename: m43.cpp
Assignment : M43: Processing arrays  
Description: 
*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


int main()
{
  char word[81];
  bool foundDouble = false;
  cout << "Enter word: ";
  
  cin >> word;
  
  for (int i = 0; i < 81 ; i++)
  {
    if ( (word[i] == word[i+1]) && (word[i] != '\0') && (word[i+1] != '\0') )
    {
      foundDouble = true;
    }
// i got a problem in this if statement, it always return true, i cannot fix it..
// i try to cout the value of foundDouble, to find out the problem, but i found that in this for loop, the first 8th value of foundDouble
// are always false, while the rest remain true. i don't understand why.
    cout << foundDouble << endl;
  }
  
  if (foundDouble == true)
    cout << "found a double\n";
  else
    cout << "Did not find a double\n";
  
  return 0;
}


/*
int main()
{
  char word[81];
  ifstream alice;
  int letterCount, wordCount = 0;
  alice.open ("alice.txt");
  if (!alice)
    cout << "ERROR: cannot open file.\n";
 /*
  while (alice >> word)
  {
    if (word[0] == word[1])
      cout << word << " ";
    letterCount++;
  }
  
  int idx = 0;
  while (alice >> word)
  {
    idx = 0;
    while (word[idx] != '\0' && idx < 80)
      idx++;
    letterCount += idx;
    wordCount++;
  }
  
  cout << endl << "total words: " << wordCount << endl;
  cout << endl << "total letters " << letterCount << endl;
  
  alice.close();
 
  return 0;
}
  */
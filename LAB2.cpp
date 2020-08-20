/*
ID:w78034117
Filename: LAB2.cpp
Assignment : LAB2: R/P/S
Description: To play the funny rock-paper-scissors game.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

int main ()
{
  char choice;
  int computerMove;
  
  cout << endl;
  cout << "Please enter your move: \n";
  cout << "('P' for Paper, 'R' for Rock, 'S' for Scissors) "; 
  cin >> choice;
  choice = toupper(choice);
  srand (time(0));
  computerMove = rand()%3 + 1;
  // 1 == Paper, 2 == Rock , 3 == Scissors
  switch (computerMove)
  {
    case 1:
      cout << "Computer's move is Paper.\n";
    break;
    case 2:
      cout << "Computer's move is Rock.\n";
      break;
    case 3:
      cout << "Computer's move is Scissors.\n";
      break; 
  }
  
      if ((choice == 'P' && computerMove == 1) || (choice == 'R' && computerMove == 2) || (choice == 'S' && computerMove == 3))
        cout << "Tie!!\n";
      else if ((choice == 'P' && computerMove == 2) || (choice == 'R' && computerMove == 3) || (choice == 'S' && computerMove == 1))
      {  
          cout << "You win!\n";
        if (choice == 'P' && computerMove == 2) 
          cout << "Paper Covers Rock!!\n";
        if (choice == 'R' && computerMove == 3)
          cout << "Rock Breaks Scissors!!\n";
        if (choice == 'S' && computerMove == 1)
          cout << "Scissors cut paper!!\n";
      }
      else if ((choice == 'P' && computerMove == 3) || (choice == 'R' && computerMove == 1) || (choice == 'S' && computerMove == 2))
      {
          cout << "Computer win!\n"; 
        if (choice == 'R' && computerMove == 1) 
          cout << "Paper Covers Rock!!\n";
        if (choice == 'S' && computerMove == 2)
          cout << "Rock Breaks Scissors!!\n";
        if (choice == 'P' && computerMove == 3)
          cout << "Scissors cut paper!!\n";
      }
      else if (choice != 'P' && choice != 'R' && choice != 'S')
        cout << "Invalid move!!\n";
  return 0;
}

/*
[xzhu91@hills CS110A]$ g++ LAB2.cpp
[xzhu91@hills CS110A]$ ./a.out

Please enter your move:
('P' for Paper, 'R' for Rock, 'S' for Scissors) R
Computer's move is Paper.
Computer win!
Paper Covers Rock!!
[xzhu91@hills CS110A]$ ./a.out

Please enter your move:
('P' for Paper, 'R' for Rock, 'S' for Scissors) r
Computer's move is Scissors.
You win!
Rock Breaks Scissors!!
[xzhu91@hills CS110A]$ ./a.out

Please enter your move:
('P' for Paper, 'R' for Rock, 'S' for Scissors) z
Computer's move is Rock.
Invalid move!!
[xzhu91@hills CS110A]$ ./a.out

Please enter your move:
('P' for Paper, 'R' for Rock, 'S' for Scissors) P
Computer's move is Rock.
You win!
Paper Covers Rock!!
[xzhu91@hills CS110A]$ ./a.out

Please enter your move:
('P' for Paper, 'R' for Rock, 'S' for Scissors) s
Computer's move is Scissors.
Tie!!
*/


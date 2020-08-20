/*
ID:w78034117
Filename: LAB7.cpp
Assignment :  LAB7:#XO
Description: Lab 7 (For Extra Credit): Tic Tac Toe Program
*/

#include <iostream>
using namespace std;

void clear(char b[][3]); // Intialize the board for the beginning of a game.
void display(const char b[][3]); //Display the current status of the board on the screen.
void takeTurn(char b[][3], char &nextPlayer); // Allow the nextPlayer to take a turn.prompt,show,and verify the input.
char winner(char b[][3]); // examines the status of the game, decide what is win, draw or no-result.

int main()
{
  char board[3][3];
  char nextPlayer;
  char winningPlayer;

  clear(board);
  nextPlayer = 'X';
  display(board);
  do
  {
    takeTurn(board, nextPlayer);
    display(board);
    winningPlayer = winner(board);
  }while(winningPlayer == ' ');

  if (winningPlayer == '?')
    cout << "Nobody won. Please play again.\n";
  else
    cout << "Congratulations, " << winningPlayer << " YOU WON!\n";

  return 0;
}

void clear (char b [][3])
{
  for (int i = 0; i < 3; i ++)
   for (int j = 0; j < 3; j ++)
     b[i][j] = ' ';
}

void display (const char b[][3])
{
  cout << endl;
  for (int j = 0; j < 3; j++)
  {
    for (int k = 0; k < 3; k++)
    {
      cout << b[j][k];
      if (k < 2)
        cout << "|";
      else
        cout << endl;
    }
    if (j < 2)
    cout << "-----" << endl;
  }
  cout << endl;
}

void takeTurn (char b[][3], char& nextPlayer)
{
  int move_1, move_2;
  bool enter_verify;
  do 
  {
  enter_verify = true;
  cout << "It is now " << nextPlayer << "'s turn.\n";
  cout << "Please enter your move in the form row column.\n";
  cout << "So 0 0 would be the top left, and 0 2 would be the top right.\n";
  cin >> move_1 >> move_2;
  cout << endl;
    if (move_1 < 0 || move_1 > 2 || move_2 < 0 || move_2 > 2)
     {
        cout << "Invalid entry: row and column must both be between 0 and 2 (inclusive).\n";
        cout << "Please try again.\n";
        enter_verify = false;
     }
    if (b[move_1][move_2] != ' ' && move_1 >= 0 && move_1 <= 2 && move_2 >= 0 && move_2 <= 2)
    {
      cout << "Invalid entry: Row 0 at Column 0 already contains: " << b[move_1][move_2] << endl;
      cout << "Please try again.\n";
      enter_verify = false;
    }
  }  while (enter_verify == false);
  b[move_1][move_2] = nextPlayer;
  if (nextPlayer == 'X')
    nextPlayer = 'O';
  else
    nextPlayer = 'X';
}

char winner(char b[][3])
{
  bool someone_win = false;
  char winner = ' ';
  int counter = 0;
  for (int i = 0; i < 3; i++)
  {
    if (b[i][0] == b[i][1] && b[i][0] == b[i][2] && b[i][0] != ' ')
    {
      someone_win = true;
      winner = b[i][0];
    }
  }
  for (int j = 0; j < 3; j++)
  {
    if (b[0][j] == b[1][j] && b[0][j] == b[2][j] && b[0][j] != ' ')
    {
      someone_win = true;
      winner = b[0][j];
    }
  }
  if (b[0][0] == b[1][1] && b[0][0] == b[2][2] && b[0][0] != ' ')
  {
    someone_win = true;
    winner = b[0][0];
  }
  if (b[0][2] == b[1][1] && b[0][2] == b[2][0] && b[2][0] != ' ')
  {
    someone_win = true;
    winner = b[0][2];
  }
  for (int k = 0; k < 3; k++)
  {
    for (int l = 0; l <3; l++)
    {
      if (b[k][l] != ' ')
        counter++;
    }
  }
  if (counter == 9 && someone_win != true)
    winner = '?';
  return winner;
}

/* Output
[xzhu91@hills CS110A]$ g++ LAB7.cpp
[xzhu91@hills CS110A]$ ./a.out

 | |
-----
 | |
-----
 | |

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
-2 0

Invalid entry: row and column must both be between 0 and 2 (inclusive).
Please try again.
It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 4

Invalid entry: row and column must both be between 0 and 2 (inclusive).
Please try again.
It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 0


X| |
-----
 | |
-----
 | |

It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 0

Invalid entry: Row 0 at Column 0 already contains: X
Please try again.
It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 1


X|O|
-----
 | |
-----
 | |

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 0

Invalid entry: Row 0 at Column 0 already contains: X
Please try again.
It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 1

Invalid entry: Row 0 at Column 0 already contains: O
Please try again.
It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
1 1


X|O|
-----
 |X|
-----
 | |

It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 2


X|O|O
-----
 |X|
-----
 | |

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
2 2


X|O|O
-----
 |X|
-----
 | |X

Congratulations, X YOU WON!

[xzhu91@hills CS110A]$ ./a.out

 | |
-----
 | |
-----
 | |

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
2 0


 | |
-----
 | |
-----
X| |

It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
2 1


 | |
-----
 | |
-----
X|O|

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 2


 | |X
-----
 | |
-----
X|O|

It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
1 1


 | |X
-----
 |O|
-----
X|O|

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
2 2


 | |X
-----
 |O|
-----
X|O|X

It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 1


 |O|X
-----
 |O|
-----
X|O|X

Congratulations, O YOU WON!

[xzhu91@hills CS110A]$ ./a.out

 | |
-----
 | |
-----
 | |

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
2 0


 | |
-----
 | |
-----
X| |

It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
1 0


 | |
-----
O| |
-----
X| |

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 0


X| |
-----
O| |
-----
X| |

It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
1 1


X| |
-----
O|O|
-----
X| |

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
2 2


X| |
-----
O|O|
-----
X| |X

It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
1 2


X| |
-----
O|O|O
-----
X| |X

Congratulations, O YOU WON!

[xzhu91@hills CS110A]$ ./a.out

 | |
-----
 | |
-----
 | |

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 0


X| |
-----
 | |
-----
 | |

It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
1 1


X| |
-----
 |O|
-----
 | |

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
2 2


X| |
-----
 |O|
-----
 | |X

It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
1 2


X| |
-----
 |O|O
-----
 | |X

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
1 0


X| |
-----
X|O|O
-----
 | |X

It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
2 0


X| |
-----
X|O|O
-----
O| |X

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 2


X| |X
-----
X|O|O
-----
O| |X

It is now O's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
0 1


X|O|X
-----
X|O|O
-----
O| |X

It is now X's turn.
Please enter your move in the form row column.
So 0 0 would be the top left, and 0 2 would be the top right.
2 1


X|O|X
-----
X|O|O
-----
O|X|X

Nobody won. Please play again.
*/

/*
Group navigator: Xiaoyi Zhu
Group Members: 
Xiaoyi Zhu
Jovanny Ruiz
Brandon Carino

Assignment : M40: BlackJack

*/

#include <iostream>
using namespace std;

int get_input(); //Get input from user and return score
bool verifyCardNum(int num); // Show error and return false if invalid # of cards
int get_card(int card_num, bool& ace_seen);  
// get one card's value, returning it and setting ace_seen if necessary
void disp_results(int total); //Show score to user

int main()
{
  int total;
  char again;

  cout << "\nWelcome to the Blackjack Counter.\n";

  do
  {
    total = get_input();

    disp_results(total);

    cout << "\n\nDo you wish to continue?\n";
    cout << "Enter 'Y' (Yes) or 'N' (No): ";
    cin  >> again;
  } while (again == 'Y' || again == 'y');

   return 0;
} 

int get_input()
{
  int score = 0, num, cardValue;
  int card_num; 
  bool verify_CardNum, ace_seen;
  
  do
  {
    cout << "How many cards do you have? ";
    cin >> card_num;
    cout << endl;
    num = card_num;
    verify_CardNum = verifyCardNum(num);
    if (verify_CardNum == false)
      cout << "You must have between 2 and 5 cards (inclusive)\n";
    if (verify_CardNum == true)
    {
        for (int count = 1; count <= num; count ++)
        {
          do
          {
            cout << "Enter value of card # " << count << ":";
            cardValue = get_card(card_num, ace_seen);
            score += cardValue;
            cout << endl;
          }while ( !cardValue);
        }
    }
  }while (verify_CardNum == false);
  
  if (score <= 11 && ace_seen == true)
    score += 10; 
  return score;
}

bool verifyCardNum(int num)
{
  bool verifyCardNum;
  if (num >= 2 && num <= 5)
    verifyCardNum = true;
  else
    verifyCardNum = false;
  return verifyCardNum;
}

int get_card(int card_num, bool& ace_seen)
{
  char cardInput;
  int cardValue;
     
  cin >> cardInput;
  if ( cardInput == 'a' || cardInput == 'A')
  {
    cardValue = 1;
    ace_seen = true;
  }
  else if ( cardInput >= '2' && cardInput <= '9')
    cardValue = cardInput - '0';
  else if ( cardInput == 't' || cardInput == 'T' || cardInput == 'j' || cardInput == 'J'
        || cardInput == 'q' || cardInput == 'Q' || cardInput == 'k' || cardInput == 'K' )
    cardValue = 10;
  else 
  {
    cout << "Not a valid entry. Please try again.\n";
  }
  return cardValue;  
}
      

void disp_results(int total)
{
  if (total > 21)
    cout << "You BUSTED with " << total << endl;
  else 
    cout << "You hand is " << total << endl;
}

/*
[xzhu91@hills CS110A]$ g++ m40.cpp
[xzhu91@hills CS110A]$ ./a.out

Welcome to the Blackjack Counter.
How many cards do you have? 2

Enter value of card # 1:k

Enter value of card # 2:a

You hand is 21


Do you wish to continue?
Enter 'Y' (Yes) or 'N' (No): y
How many cards do you have? 3

Enter value of card # 1:t

Enter value of card # 2:k

Enter value of card # 3:a

You hand is 21


Do you wish to continue?
Enter 'Y' (Yes) or 'N' (No): y
How many cards do you have? 7

You must have between 2 and 5 cards (inclusive)
How many cards do you have? 8

You must have between 2 and 5 cards (inclusive)
How many cards do you have? 3

Enter value of card # 1:7

Enter value of card # 2:8

Enter value of card # 3:9

You BUSTED with 24


Do you wish to continue?
Enter 'Y' (Yes) or 'N' (No): y
How many cards do you have? 3

Enter value of card # 1:k

Enter value of card # 2:b
Not a valid entry. Please try again.

Enter value of card # 2:w
Not a valid entry. Please try again.

Enter value of card # 2:a

Enter value of card # 3:8

You hand is 19


Do you wish to continue?
Enter 'Y' (Yes) or 'N' (No): n
*/
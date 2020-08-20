/*
ID:w78034117
Filename: M44: Deck Problem
Assignment : M44: Deck Problem  
Description: 
*/

#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

void shuffle (char a[], int );
void display (char a[], int );
void swap (char a[], int, int);


const int max_size = 13;

int main()
{
  char cards[max_size] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
  display (cards, max_size);
  shuffle (cards, max_size);
  display (cards, max_size);
  return 0;
}

void display(char a[], int max_size)
{
  for (int i = 0; i < max_size; i++)
    cout << a[i] << " ";
  cout << endl;
}

void shuffle (char a[], int max_size)
{
  srand (time(0));
  int random_num = rand()%max_size;
  for (int i = 0; i < max_size; i++)
  swap (a, i, random_num);
}

void swap (char a[], int i, int j)
{
  char temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

/*
OUTPUT
[xzhu91@hills CS110A]$ ./a.out
2 3 4 5 6 7 8 9 t j q k a
k 2 3 4 5 6 7 8 9 t j a q

[xzhu91@hills CS110A]$ ./a.out
2 3 4 5 6 7 8 9 t j q k a
8 2 3 4 5 6 a 7 9 t j q k

[xzhu91@hills CS110A]$ ./a.out
2 3 4 5 6 7 8 9 t j q k a
j 2 3 4 5 6 7 8 9 a t q k
[xzhu91@hills CS110A]$
*/
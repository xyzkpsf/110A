/*
Student ID: W78034117
Filename: pp3.cpp
Assignment: CS 110A Practice Problem 3
Description: Muni ridership calculator
*/

#include <iostream>
    using namespace std;

    int main()

    {
      char muniline [80];
      int days, riders;
      cout << "Welcome to the Muni Ridership Calculator.\n";
      cout << "Which Muni line did you survey?  ";
      cin >> muniline;
      cout << "How many days did you survey it?  ";
      cin >> days;
      cout << "How many riders did you count?  ";
      cin >> riders;
      cout << "According to your survey, an average of " << (float)riders/days << " people rode the " << muniline << " per day.\n";
      
      return 0;
    }

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ pp3.cpp
[xzhu91@hills CS110A]$ ./a.out
Welcome to the Muni Ridership Calculator.
Which Muni line did you survey?  K-Ingelside
How many days did you survey it?  5
How many riders did you count?  123456
According to your survey, an average of 24691.2 people rode the K-Ingelside per day.
[xzhu91@hills CS110A]$ ./a.out
Welcome to the Muni Ridership Calculator.
Which Muni line did you survey?  8A
How many days did you survey it?  30
How many riders did you count?  250000
According to your survey, an average of 8333.33 people rode the 8A per day.
[xzhu91@hills CS110A]$
*/



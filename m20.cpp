/*
ID:w78034117
Filename: m20.cpp
Assignment : M20: if and else statement
Description: 
*/

#include <iostream>
#include <iomanip>
using namespace std;

/*
int main ()
{
  double num1,num2;
  cout << "Please enter two numbers.\n";
  cout << "number 1: ";
  cin >> num1;
  cout << "number 2: ";
  cin >> num2;
  
  if (num1 == num2)
    cout << "The two numbers are the same.\n";
  else if (num1 > num2)
    cout << "number 1 is larger.\n";
  else if (num1 < num2)
    cout << "number 2 is larger.\n";
  return 0;
}
*/


/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m20.cpp 
[xzhu91@hills CS110A]$ ./a.out 
Please enter two numbers.
number 1: 12
number 2: 80
number 2 is larger.
[xzhu91@hills CS110A]$ ./a.out 
Please enter two numbers.
number 1: 30
number 2: 30
The two numbers are the same.
*/



/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m20.cpp 
[xzhu91@hills CS110A]$ ./a.out 
Please enter two numbers.
number 1: 1.1
number 2: 22.2
number 2 is larger.
*/

/*
int main ()
{
  int seconds;
  cout << "Please enter seconds.\n";
  cin >> seconds;
  cout << "It is ";
  if (seconds < 60)
    cout << seconds << " seconds.\n";
  if (seconds >= 60 && seconds<=3600)
    cout << seconds/60 << " minutes," << " and " << seconds%60 << " seconds.\n";
  if (seconds >= 3600 && seconds<=86400)
    cout << seconds/3600 << " hours," << " and " << (seconds%3600)/60 << " minutes," << " and " << seconds%3600 << " seconds.\n";
  if (seconds >= 86400)
    cout << seconds/86400 << " days,"<< (seconds%86400)/3600 << " hours," << " and " << (seconds%3600)/60 << " minutes," << " and " << seconds%3600 << " seconds.\n";
  
  return 0;
}
  /*
  
  
/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m20.cpp 
[xzhu91@hills CS110A]$ ./a.out 
Please enter seconds.
20
It is 20 seconds.
[xzhu91@hills CS110A]$ ./a.out 
Please enter seconds.
80
It is 1 minutes, and 20 seconds.
[xzhu91@hills CS110A]$ ./a.out 
Please enter seconds.
6500
It is 1 hours, and 48 minutes, and 2900 seconds.
[xzhu91@hills CS110A]$ ./a.out 
Please enter seconds.
100000
It is 1 days,3 hours, and 46 minutes, and 2800 seconds.
*/

/*
int main ()
{
  const int price = 99;
  int quantity;
  cout << "Please enter the quantity: ";
  cin >> quantity;
  
  if (quantity < 0)
    cout << "This is an invalid number!\n";
   else 
     cout << "Your total cost is: $";
     cout << fixed << setprecision(2);
  if (quantity>=0 && quantity<10)
    cout << quantity*price << endl;
  if (quantity>=10 && quantity<20)
    cout << (double)quantity*price*0.8 << endl;
  if (quantity>=20 && quantity<50)
    cout << (double)quantity*price*0.7<< endl;
  if (quantity>=50)
    cout << (double)quantity*price*0.6<< endl;
  return 0;
}
  */
  
  /*
[xzhu91@hills CS110A]$ g++ m20.cpp
[xzhu91@hills CS110A]$ ./a.out
Please enter the quantity: -1
This is an invalid number!
[xzhu91@hills CS110A]$ ./a.out
Please enter the quantity: 9
Your total cost is: $891
[xzhu91@hills CS110A]$ ./a.out
Please enter the quantity: 49
Your total cost is: $3395.70
*/  


int main ()
{
  double calories, fatGrams, calorieFromFat, percentageOfCaloriesFromFat, lowFat;
  cout << "Pleae enter the claories and fat grams in your food.\n";
  cin >> calories >> fatGrams;
  calorieFromFat=fatGrams*9;
  percentageOfCaloriesFromFat=calorieFromFat/calories;
  lowFat=calories*0.3;
  if (calories<0 || fatGrams<0)
    cout << "Your input is unvalid!\n";
  else
  {
    if (calories<=calorieFromFat)
    cout << "Please check your input!\n";
    else
      cout << "The percentage of calories from fat is " << percentageOfCaloriesFromFat << endl;
      if (calorieFromFat<lowFat)
      cout << "Congratulation! Your food is low in fat!\n";
  }
  return 0;
}


/*
[xzhu91@hills CS110A]$ g++ m20.cpp
[xzhu91@hills CS110A]$ ./a.out
Pleae enter the claories and fat grams in your food.
-10 0
Your input is unvalid!
[xzhu91@hills CS110A]$ ./a.out
Pleae enter the claories and fat grams in your food.100 12
Please check your input!
[xzhu91@hills CS110A]$ ./a.out
Pleae enter the claories and fat grams in your food.
100 3
The percentage of calories from fat is 0.27
Congratulation! Your food is low in fat!
*/



















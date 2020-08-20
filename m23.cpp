/*
ID:w78034117
Filename: m23.cpp
Assignment : M23: Menus
Description: using switch and if/else statement
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
  const float PI = 3.14159;
  double radius, length, width, base, height;
  int choice;
  cout << "Geometry Calculator \n\n";
  cout << "1. Calculate the Area of a Circle\n";
  cout << "2. Calculate the Area of a Rectangle\n";
  cout << "3. Calculate the Area of a Triangle\n";
  cout << "4.Quit\n";
  cout << "Enter your choice (1-4): \n";
  
  cin >> choice;
  cout << fixed << showpoint << setprecision(2);
  
  switch (choice)
  {case 1:
   cout << "Please enter the radius: ";
   cin >> radius;
   if (radius<0)
     cout << "Invalid Enter!\n";
   else
   cout << "The Area of this Circle is " << PI*radius*radius << endl;
   break;
   
   case 2:
   cout << "The length of the Rectangle is ";
   cin >> length;
   cout << "The width of the Rectangle is ";
   cin >> width;
    if (length<0 || width<0)
     cout << "Invalid Enter!\n";
   else
     cout << "The area of the Rectangle is " << length*width << endl;
   break;
   
   case 3:
   cout << "The base of the Triangle is ";
   cin >> base;
   cout << "The height of the Triangle is ";
   cin >> height;
   if (base<0 || height<0)
     cout << "Invalid Enter!\n";
   else
     cout << "The area of the Triangle is " << base*height*0.5 << endl;
   break;
   
   case 4:
   cout << "The program ends.\n";
   break;
   
   default:
   cout << "ERROR: unknown menu selection.\n";
}
  return 0;
}

/*
OUTPUT
[xzhu91@hills CS110A]$ g++ m23.cpp 
[xzhu91@hills CS110A]$ ./a.out
Geometry Calculator 

1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4.Quit
Enter your choice (1-4): 
2
The length of the Rectangle is 10
The width of the Rectangle is 20
The area of the Rectangle is 200.00
[xzhu91@hills CS110A]$ ./a.out
Geometry Calculator 

1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4.Quit
Enter your choice (1-4): 
3
The base of the Triangle is -40
The height of the Triangle is 5
Invalid Enter!
[xzhu91@hills CS110A]$ ./a.out
Geometry Calculator 

1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4.Quit
Enter your choice (1-4): 
5
ERROR: unknown menu selection.
*/
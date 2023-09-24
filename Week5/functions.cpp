//  Theo Lee
//  functions.cpp
//  10/30/2022
//  Function 1: Random number generator
//  Function 2: the function that displays the largest number

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int function1();
void function2(float num1,float num2,float num3);

int main()
{
     int iseed = time(NULL); 
     srand(iseed);
     
     cout << "The random number is " << function1() << endl;
     
     function2(9.5, 2.2, 5.6);

     return 0;
}

int function1()
{
     int min = 11;
     int max = 23;
     int function1 = min + rand()%(max-min+1);

     return function1;
}

void function2(float num1,float num2,float num3)
{
     if (num1 > num2 && num1 > num3)
          cout << "The largest number is " << num1 << endl;
     else if (num2 > num1 && num2 > num3)
          cout << "The largest number is " << num2 << endl;
     else if (num3 > num1 && num3 > num2)
          cout << "The largest number is " << num3 << endl;
}

/* == Sample Run:
The random number is 15
The largest number is 9.5
===
The random number is 11
The largest number is 9.5
===
*/
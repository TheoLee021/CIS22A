//  Your name: Theo Lee
//  Program Name: p23.cpp
//  Date:  10/15/2022
//  Description: A program that finds the sum of every
//  integer number from 150 to 250 inclusive
//  Also show the total count of numbers and the average of 
//  the numbers

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int count = 0;
    
    for (int i = 150; i <= 250; i++)
    {
        sum = sum + i;
        count++;
    }

    cout << "The sum of the numbers is " << sum << endl;
    cout << "There are " << count << " numbers" << endl;
    cout << "The average is " << sum/count << endl;

    return 0;
}

/* === OUTPUT ===
The sum of the numbers is 20200
There are 101 numbers
The average is 200
===

*/
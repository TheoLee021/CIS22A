//  Your name: Theo Lee
//  Program Name: p25.cpp
//  Date:  10/15/2022
//  Description: A program that finds the largest, smallest, 
//  sum, and average of X numbers entered by the user.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int many, number, smallest, largest, sum = 0, average;
    cout << "How many numbers would you like to enter? ";
    cin >> many;

    for(int i = 1; i <= many; i++)
    {
        cout << "Please enter a number: ";
        cin >> number;
        sum = sum + number;
        average = sum/many;

        if (i == 1)
        {
            smallest = number;
            largest = number;
        }
        else if (number < smallest)
            smallest = number;
        else if (number > largest)
            largest = number;
    }

    cout << "The smallest is " << smallest << ", largest is ";
    cout << largest << ", sum is " << sum << ", average is ";
    cout << average;

    return 0;
}

/* === PROGRAM RUN1:
How many numbers would you like to enter? 3
Please enter a number: 1
Please enter a number: 2
Please enter a number: 3
The smallest is 1, largest is 3, sum is 6, average is 2

=== PROGRAM RUN2:
How many numbers would you like to enter? 3
Please enter a number: 3
Please enter a number: 2
Please enter a number: 1
The smallest is 1, largest is 3, sum is 6, average is 2

=== PROGRAM RUN3:
How many numbers would you like to enter? 3
Please enter a number: 3
Please enter a number: 1
Please enter a number: 2
The smallest is 1, largest is 3, sum is 6, average is 2

*/
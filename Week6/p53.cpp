// Theo Lee
// p53.cpp
// 11/05/2022
// Desctiption: A program that makes an ARRAY1 of X random elements, 
// where each array element has a different random value N.
// X is a random number between 20 to 30. (This means you have from 20 to 30 array Elements). 
// N is a random number between 100 to 200. (This means that each Element is a random number between 100 to 200).
// This program will show the array, sum of the array elements, average of the array elements,
// the smallest of all values and largest of all values.

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int randomNumX();
int randomNumN();

int main()
{
    int iseed = time(NULL);
    srand(iseed);

    int X = randomNumX();
    cout << "Making an array of " << X << " random elements" << endl;
    
    int a[X];
    for(int i = 0; i < X; i++)
    {
        a[i] = randomNumN();
        cout << "a [ " << i << " ] = " << a[i] << endl;
    }

    int sum = 0;
    for (int i = 0; i < X; i++)
    {
        sum = sum + a[i];
    }
    cout << "Sum = " << sum << endl;
    
    int avg = sum/X;
    cout << "Average = " << avg << endl;

    int smallest = a[0];
    for (int i = 0; i < X; i++)
    {
        if (smallest > a[i])
        {
            smallest = a[i];
        }
    }
    cout << "The smallest = " << smallest << endl;

    int largest = a[0];
    for (int i = 0; i < X; i++)
    {
        if (largest < a[i])
        {
            largest = a[i];
        }
    }
    cout << "The largest = " << largest << endl;

    return 0;
}

int randomNumX()
{
    int max = 30;
    int min = 20;
    int randomNumX = min + rand()%(max-min+1);
    
    return randomNumX;
}

int randomNumN()
{
    int max = 200;
    int min = 100;
    int randomNumN = min + rand()%(max-min+1);

    return randomNumN;
}

/* == Sample Run:
Making an array of 22 random elements
a [ 0 ] = 189
a [ 1 ] = 192
a [ 2 ] = 171
a [ 3 ] = 192
a [ 4 ] = 179
a [ 5 ] = 177
a [ 6 ] = 123
a [ 7 ] = 126
a [ 8 ] = 109
a [ 9 ] = 179
a [ 10 ] = 137
a [ 11 ] = 157
a [ 12 ] = 142
a [ 13 ] = 142
a [ 14 ] = 113
a [ 15 ] = 158
a [ 16 ] = 179
a [ 17 ] = 135
a [ 18 ] = 135
a [ 19 ] = 119
a [ 20 ] = 111
a [ 21 ] = 183
Sum = 3348
Average = 152
The smallest = 109
The largest = 192
===
*/

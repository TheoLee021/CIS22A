// Theo Lee
// final.cpp
// 12/02/2022
// Desctiption: Final Exam Project

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int randomNum();
void showArray(int a[], int size);
void showReverse(int a[], int size);
int lowest(int a[], int size);
int highest(int a[], int size);
int sum(int a[], int size);
float average(int a[], float size);
int count5(int a[], int size);
int firstMinuslast(int a[], int size);
void showBeforeIndex(int a[], int index);

int main()
{
    int a[25];
    int iseed = time(NULL);
    srand(iseed);

    for(int i = 0; i < 25; i++)
    {
        a[i] = randomNum();
    }
    cout << "Making an array of 25 random integers from 3 to 7!" << endl;

    showArray(a, 25);
    showReverse(a, 25);
    cout << "Lowest value is " << lowest(a, 25) << endl;
    cout << "Highest value is " << highest(a, 25) << endl;
    cout << "The sum of all array elements is " << sum(a, 25) << endl;
    cout << "The average of all array values is " << average(a, 25) << endl;
    cout << "The number 5 appears " << count5(a, 25) << " times." << endl;
    cout << "The difference between the first and last array elements is " << firstMinuslast(a, 25) << endl;
    showBeforeIndex(a, 3);

    return 0;
}

int randomNum()
{
    int min = 3;
    int max = 7;
    int randomNum = min + rand()%(max-min+1);
    return randomNum;
}

void showArray(int a[], int size)
{
    cout << "Original array a [ ] = { ";
    for(int i = 0; i < size; i++)
    {
        if (i == 24)
            cout << a[i];
        else
            cout << a[i] << ", ";
    }
    cout << " }" << endl;
}

void showReverse(int a[], int size)
{
    cout << "Reversed array a [ ] = { ";
    for(int i = size-1; i > -1; i--)
    {
        if (i == 0)
            cout << a[i];
        else
            cout << a[i] << ", ";
    }
    cout << " }" << endl;
}

int lowest(int a[], int size)
{
    int lowest;
    lowest = a[0];
    for(int i = 0; i < size; i++)
    {
        if (lowest > a[i])
            lowest = a[i];
    }
    return lowest;
}

int highest(int a[], int size)
{
    int highest = a[0];
    for(int i = 0; i < size; i++)
    {
        if(highest < a[i])
            highest = a[i];
    }
    return highest;
}

int sum(int a[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

float average(int a[], float size)
{
    return sum(a, 25)/size;
}

int count5(int a[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(a[i] == 5)
            count++;
    }
    return count;
}
int firstMinuslast(int a[], int size)
{
    return a[0] - a[size-1];
}
void showBeforeIndex(int a[], int index)
{
    cout << "The array values before Index " << index << " are ";
    for(int i = 0; i < index; i++)
    {
        if(i == index-1)
            cout << a[i];
        else
            cout << a[i] << ", ";
    }
}

/* == Sample Run:
Making an array of 25 random integers from 3 to 7!
Original array a [ ] = { 5, 3, 5, 4, 4, 5, 5, 6, 6, 5, 4, 4, 5, 6, 7, 6, 7, 7, 7, 5, 6, 3, 4, 6, 3 }
Reversed array a [ ] = { 3, 6, 4, 3, 6, 5, 7, 7, 7, 6, 7, 6, 5, 4, 4, 5, 6, 6, 5, 5, 4, 4, 5, 3, 5 }
Lowest value is 3
Highest value is 7
The sum of all array elements is 128
The average of all array values is 5.12
The number 5 appears 7 times.
The difference between the first and last array elements is 2
The array values before Index 3 are 5, 3, 5%       
===
*/

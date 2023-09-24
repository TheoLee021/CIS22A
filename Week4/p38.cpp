//  Theo Lee
//  p38.cpp
//  10/22/2022
//  The program that shows the average of 3 parameters passed to it

#include <iostream>

using namespace std;

float average(float valA, float valB, float valC);

int main()
{
    float num1, num2, num3, temp;
    cout << "Enter three numbers" << endl;
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    cout << "Third number: ";
    cin >> num3;

    temp = average(num1, num2, num3);
    cout << "Avg = " << temp;

    return 0;
}

float average(float valA, float valB, float valC)
{
    return (valA + valB + valC)/3;
}

/* == Sample Run:
Enter three numbers
First number: 19
Second number: 23
Third number: 5
Avg = 15.6667
===
*/
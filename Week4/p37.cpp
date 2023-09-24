//  Theo Lee
//  p37.cpp
//  10/22/2022
//  The program that shows the larger of two parameters

#include <iostream>

using namespace std;

float larger(float valA, float valB);

int main()
{
    float num1 = 1, num2 = 2, temp;
    cout << "The larger of the two numbers " << num1 << " and ";
    cout << num2 << " is " << larger (num1, num2) << endl;
    temp = larger (num2, num1);
    cout << "The larger of the two numbers " << num2 << " and ";
    cout << num1 << " is " << temp << endl;
    
    return 0;
}

float larger(float valA, float valB)
{
    if (valA > valB)
        return valA;
    else if (valA < valB)
        return valB;
    
    return 0;
}

/* == Sample Run:
The larger of the two numbers 1 and 2 is 2
The larger of the two numbers 2 and 1 is 2
===
*/